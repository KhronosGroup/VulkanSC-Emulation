// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See command_buffer_memory_tracker_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "vksc_command_pool.h"
#include "vksc_dispatchable.h"
#include "vk_command_buffer.h"
#include "icd_log.h"

namespace vksc {

class Device;

/// @brief Shortcircuits the callchain when memory allocation goes over reservation
class CommandBufferMemoryTracker : public vk::CommandBuffer {
  public:
    using NEXT = vk::CommandBuffer;
    friend CommandPool;

    CommandBufferMemoryTracker(VkCommandBuffer command_buffer, CommandPool& command_pool);
    ~CommandBufferMemoryTracker();

    const icd::Logger& Log() const { return logger_; }
    VkDeviceSize GetAllocatedMemorySize() const { return allocated_memory_size_; }

    VkResult BeginCommandBuffer(const VkCommandBufferBeginInfo* pBeginInfo);
    VkResult ResetCommandBuffer(VkCommandBufferResetFlags flags);

    void CmdCopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions);
    void CmdCopyImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                      uint32_t regionCount, const VkImageCopy* pRegions);
    void CmdCopyBufferToImage(VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                              const VkBufferImageCopy* pRegions);
    void CmdCopyImageToBuffer(VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount,
                              const VkBufferImageCopy* pRegions);
    void CmdUpdateBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData);
    void CmdFillBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
    void CmdPipelineBarrier(VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags,
                            uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount,
                            const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount,
                            const VkImageMemoryBarrier* pImageMemoryBarriers);
    void CmdBeginQuery(VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
    void CmdEndQuery(VkQueryPool queryPool, uint32_t query);
    void CmdResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
    void CmdWriteTimestamp(VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
    void CmdCopyQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer,
                                 VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
    void CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
    void CmdBindPipeline(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
    void CmdBindDescriptorSets(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet,
                               uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount,
                               const uint32_t* pDynamicOffsets);
    void CmdClearColorImage(VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount,
                            const VkImageSubresourceRange* pRanges);
    void CmdDispatch(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
    void CmdDispatchIndirect(VkBuffer buffer, VkDeviceSize offset);
    void CmdSetEvent(VkEvent event, VkPipelineStageFlags stageMask);
    void CmdResetEvent(VkEvent event, VkPipelineStageFlags stageMask);
    void CmdWaitEvents(uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask,
                       VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                       uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                       uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
    void CmdPushConstants(VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size,
                          const void* pValues);
    void CmdSetViewport(uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports);
    void CmdSetScissor(uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors);
    void CmdSetLineWidth(float lineWidth);
    void CmdSetDepthBias(float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
    void CmdSetBlendConstants(const float blendConstants[4]);
    void CmdSetDepthBounds(float minDepthBounds, float maxDepthBounds);
    void CmdSetStencilCompareMask(VkStencilFaceFlags faceMask, uint32_t compareMask);
    void CmdSetStencilWriteMask(VkStencilFaceFlags faceMask, uint32_t writeMask);
    void CmdSetStencilReference(VkStencilFaceFlags faceMask, uint32_t reference);
    void CmdBindIndexBuffer(VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
    void CmdBindVertexBuffers(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
    void CmdDraw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
    void CmdDrawIndexed(uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset,
                        uint32_t firstInstance);
    void CmdDrawIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
    void CmdDrawIndexedIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
    void CmdBlitImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                      uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter);
    void CmdClearDepthStencilImage(VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil,
                                   uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
    void CmdClearAttachments(uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount,
                             const VkClearRect* pRects);
    void CmdResolveImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                         uint32_t regionCount, const VkImageResolve* pRegions);
    void CmdBeginRenderPass(const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents);
    void CmdNextSubpass(VkSubpassContents contents);
    void CmdEndRenderPass();
    void CmdSetDeviceMask(uint32_t deviceMask);
    void CmdDispatchBase(uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY,
                         uint32_t groupCountZ);
    void CmdDrawIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                              uint32_t maxDrawCount, uint32_t stride);
    void CmdDrawIndexedIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                     uint32_t maxDrawCount, uint32_t stride);
    void CmdBeginRenderPass2(const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo);
    void CmdNextSubpass2(const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo);
    void CmdEndRenderPass2(const VkSubpassEndInfo* pSubpassEndInfo);
    void CmdSetFragmentShadingRateKHR(const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
    void CmdSetEvent2KHR(VkEvent event, const VkDependencyInfo* pDependencyInfo);
    void CmdResetEvent2KHR(VkEvent event, VkPipelineStageFlags2 stageMask);
    void CmdWaitEvents2KHR(uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos);
    void CmdPipelineBarrier2KHR(const VkDependencyInfo* pDependencyInfo);
    void CmdWriteTimestamp2KHR(VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query);
    void CmdCopyBuffer2KHR(const VkCopyBufferInfo2* pCopyBufferInfo);
    void CmdCopyImage2KHR(const VkCopyImageInfo2* pCopyImageInfo);
    void CmdCopyBufferToImage2KHR(const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);
    void CmdCopyImageToBuffer2KHR(const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);
    void CmdBlitImage2KHR(const VkBlitImageInfo2* pBlitImageInfo);
    void CmdResolveImage2KHR(const VkResolveImageInfo2* pResolveImageInfo);
    void CmdSetLineStippleKHR(uint32_t lineStippleFactor, uint16_t lineStipplePattern);
    void CmdSetDiscardRectangleEXT(uint32_t firstDiscardRectangle, uint32_t discardRectangleCount,
                                   const VkRect2D* pDiscardRectangles);
    void CmdSetDiscardRectangleEnableEXT(VkBool32 discardRectangleEnable);
    void CmdSetDiscardRectangleModeEXT(VkDiscardRectangleModeEXT discardRectangleMode);
    void CmdBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void CmdEndDebugUtilsLabelEXT();
    void CmdInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void CmdSetSampleLocationsEXT(const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
    void CmdSetLineStippleEXT(uint32_t lineStippleFactor, uint16_t lineStipplePattern);
    void CmdSetCullModeEXT(VkCullModeFlags cullMode);
    void CmdSetFrontFaceEXT(VkFrontFace frontFace);
    void CmdSetPrimitiveTopologyEXT(VkPrimitiveTopology primitiveTopology);
    void CmdSetViewportWithCountEXT(uint32_t viewportCount, const VkViewport* pViewports);
    void CmdSetScissorWithCountEXT(uint32_t scissorCount, const VkRect2D* pScissors);
    void CmdBindVertexBuffers2EXT(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers,
                                  const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides);
    void CmdSetDepthTestEnableEXT(VkBool32 depthTestEnable);
    void CmdSetDepthWriteEnableEXT(VkBool32 depthWriteEnable);
    void CmdSetDepthCompareOpEXT(VkCompareOp depthCompareOp);
    void CmdSetDepthBoundsTestEnableEXT(VkBool32 depthBoundsTestEnable);
    void CmdSetStencilTestEnableEXT(VkBool32 stencilTestEnable);
    void CmdSetStencilOpEXT(VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp,
                            VkCompareOp compareOp);
    void CmdSetVertexInputEXT(uint32_t vertexBindingDescriptionCount,
                              const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
                              uint32_t vertexAttributeDescriptionCount,
                              const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);
    void CmdSetPatchControlPointsEXT(uint32_t patchControlPoints);
    void CmdSetRasterizerDiscardEnableEXT(VkBool32 rasterizerDiscardEnable);
    void CmdSetDepthBiasEnableEXT(VkBool32 depthBiasEnable);
    void CmdSetLogicOpEXT(VkLogicOp logicOp);
    void CmdSetPrimitiveRestartEnableEXT(VkBool32 primitiveRestartEnable);
    void CmdSetColorWriteEnableEXT(uint32_t attachmentCount, const VkBool32* pColorWriteEnables);

  protected:
    VkResult GetStatus() const { return status_; }
    void SetStatus(VkResult status) { status_ = status; }

    CommandPool& command_pool_;

  private:
    void FreeMemory();
    VkResult AllocateMemory(VkDeviceSize size);

    VkDeviceSize allocated_memory_size_;
    VkResult status_;

    icd::Logger logger_;
};

}  // namespace vksc

// NOLINTEND
