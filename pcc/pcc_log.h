/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <fstream>
#include <string>
#include <utility>
#include <array>

class Logger {
  public:
    enum Level { Info = 0, Warning, Error, Quiet };

    inline static Level kError = Level::Error;
    inline static Level kInfo = Level::Info;
    inline static Level kWarning = Level::Warning;

    Logger() : file_(stderr), level_(Warning) {}
    Logger(Level level) : file_(stderr), level_(level) {}
    ~Logger() {
        if (file_ != stderr) {
            fclose(file_);
        }
    }

    bool SetLogFile(const std::string& log_filename) { return (file_ = fopen(log_filename.c_str(), "w")); }
    void SetLogLevel(Level level) { level_ = level; }

    template <typename... ARGS>
    void Write(Level level, const char* format, ARGS... args) const {
        if (level >= level_) {
            fprintf(file_, "%s ", prefixes[level]);
            fprintf(file_, format, std::forward<ARGS>(args)...);
        }
    }

  private:
    FILE* file_;
    Level level_;

    inline static std::array<const char*, 3> prefixes{{"[INFO]", "[WARNING]", "[ERROR]"}};
};
