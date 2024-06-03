/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <fstream>
#include <string>
#include <utility>

class Logger {
  public:
    inline static const char* ERROR = "[ERROR]";
    inline static const char* INFO = "[INFO]";
    inline static const char* WARNING = "[WARNING]";

    Logger() : file_(stderr) {}
    ~Logger() {
        if (file_ != stderr) {
            fclose(file_);
        }
    }

    bool SetLogFile(const std::string& log_filename) { return (file_ = fopen(log_filename.c_str(), "w")); }

    template <typename... ARGS>
    void Write(const char* prefix, const char* format, ARGS... args) const {
        fprintf(file_, "%s ", prefix);
        fprintf(file_, format, std::forward<ARGS>(args)...);
    }

  private:
    FILE* file_;
};
