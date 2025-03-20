// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See command_buffer_memory_tracker_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
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

    icd::Logger& Log() { return logger_; }
    VkDeviceSize GetAllocatedMemorySize() const { return allocated_memory_size_; }

    VkResult BeginCommandBuffer(const VkCommandBufferBeginInfo* pBeginInfo);
    VkResult ResetCommandBuffer(VkCommandBufferResetFlags flags);

    void CmdBindPipeline(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
    void CmdSetViewport(uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports);
    void CmdSetScissor(uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors);
    void CmdSetLineWidth(float lineWidth);
    void CmdSetDepthBias(float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
    void CmdSetBlendConstants(const float blendConstants[4]);
    void CmdSetDepthBounds(float minDepthBounds, float maxDepthBounds);
    void CmdSetStencilCompareMask(VkStencilFaceFlags faceMask, uint32_t compareMask);
    void CmdSetStencilWriteMask(VkStencilFaceFlags faceMask, uint32_t writeMask);
    void CmdSetStencilReference(VkStencilFaceFlags faceMask, uint32_t reference);
    void CmdBindDescriptorSets(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet,
                               uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount,
                               const uint32_t* pDynamicOffsets);
    void CmdBindIndexBuffer(VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
    void CmdBindVertexBuffers(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
    void CmdDraw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
    void CmdDrawIndexed(uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset,
                        uint32_t firstInstance);
    void CmdDrawIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
    void CmdDrawIndexedIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
    void CmdDispatch(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
    void CmdDispatchIndirect(VkBuffer buffer, VkDeviceSize offset);
    void CmdCopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions);
    void CmdCopyImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                      uint32_t regionCount, const VkImageCopy* pRegions);
    void CmdBlitImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                      uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter);
    void CmdCopyBufferToImage(VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                              const VkBufferImageCopy* pRegions);
    void CmdCopyImageToBuffer(VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount,
                              const VkBufferImageCopy* pRegions);
    void CmdUpdateBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData);
    void CmdFillBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
    void CmdClearColorImage(VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount,
                            const VkImageSubresourceRange* pRanges);
    void CmdClearDepthStencilImage(VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil,
                                   uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
    void CmdClearAttachments(uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount,
                             const VkClearRect* pRects);
    void CmdResolveImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                         uint32_t regionCount, const VkImageResolve* pRegions);
    void CmdSetEvent(VkEvent event, VkPipelineStageFlags stageMask);
    void CmdResetEvent(VkEvent event, VkPipelineStageFlags stageMask);
    void CmdWaitEvents(uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask,
                       VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                       uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                       uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
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
    void CmdPushConstants(VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size,
                          const void* pValues);
    void CmdBeginRenderPass(const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents);
    void CmdNextSubpass(VkSubpassContents contents);
    void CmdEndRenderPass();
    void CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
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
    void CmdSetEvent2(VkEvent event, const VkDependencyInfo* pDependencyInfo);
    void CmdResetEvent2(VkEvent event, VkPipelineStageFlags2 stageMask);
    void CmdWaitEvents2(uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos);
    void CmdPipelineBarrier2(const VkDependencyInfo* pDependencyInfo);
    void CmdWriteTimestamp2(VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query);
    void CmdCopyBuffer2(const VkCopyBufferInfo2* pCopyBufferInfo);
    void CmdCopyImage2(const VkCopyImageInfo2* pCopyImageInfo);
    void CmdCopyBufferToImage2(const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);
    void CmdCopyImageToBuffer2(const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);
    void CmdBlitImage2(const VkBlitImageInfo2* pBlitImageInfo);
    void CmdResolveImage2(const VkResolveImageInfo2* pResolveImageInfo);
    void CmdBeginRendering(const VkRenderingInfo* pRenderingInfo);
    void CmdEndRendering();
    void CmdSetCullMode(VkCullModeFlags cullMode);
    void CmdSetFrontFace(VkFrontFace frontFace);
    void CmdSetPrimitiveTopology(VkPrimitiveTopology primitiveTopology);
    void CmdSetViewportWithCount(uint32_t viewportCount, const VkViewport* pViewports);
    void CmdSetScissorWithCount(uint32_t scissorCount, const VkRect2D* pScissors);
    void CmdBindVertexBuffers2(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets,
                               const VkDeviceSize* pSizes, const VkDeviceSize* pStrides);
    void CmdSetDepthTestEnable(VkBool32 depthTestEnable);
    void CmdSetDepthWriteEnable(VkBool32 depthWriteEnable);
    void CmdSetDepthCompareOp(VkCompareOp depthCompareOp);
    void CmdSetDepthBoundsTestEnable(VkBool32 depthBoundsTestEnable);
    void CmdSetStencilTestEnable(VkBool32 stencilTestEnable);
    void CmdSetStencilOp(VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp,
                         VkCompareOp compareOp);
    void CmdSetRasterizerDiscardEnable(VkBool32 rasterizerDiscardEnable);
    void CmdSetDepthBiasEnable(VkBool32 depthBiasEnable);
    void CmdSetPrimitiveRestartEnable(VkBool32 primitiveRestartEnable);
    void CmdSetLineStipple(uint32_t lineStippleFactor, uint16_t lineStipplePattern);
    void CmdBindIndexBuffer2(VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size, VkIndexType indexType);
    void CmdPushDescriptorSet(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set,
                              uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);
    void CmdSetRenderingAttachmentLocations(const VkRenderingAttachmentLocationInfo* pLocationInfo);
    void CmdSetRenderingInputAttachmentIndices(const VkRenderingInputAttachmentIndexInfo* pInputAttachmentIndexInfo);
    void CmdBindDescriptorSets2(const VkBindDescriptorSetsInfo* pBindDescriptorSetsInfo);
    void CmdPushConstants2(const VkPushConstantsInfo* pPushConstantsInfo);
    void CmdPushDescriptorSet2(const VkPushDescriptorSetInfo* pPushDescriptorSetInfo);
    void CmdSetFragmentShadingRateKHR(const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
    void CmdSetDiscardRectangleEXT(uint32_t firstDiscardRectangle, uint32_t discardRectangleCount,
                                   const VkRect2D* pDiscardRectangles);
    void CmdSetDiscardRectangleEnableEXT(VkBool32 discardRectangleEnable);
    void CmdSetDiscardRectangleModeEXT(VkDiscardRectangleModeEXT discardRectangleMode);
    void CmdBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void CmdEndDebugUtilsLabelEXT();
    void CmdInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void CmdSetSampleLocationsEXT(const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
    void CmdSetVertexInputEXT(uint32_t vertexBindingDescriptionCount,
                              const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
                              uint32_t vertexAttributeDescriptionCount,
                              const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);
    void CmdSetPatchControlPointsEXT(uint32_t patchControlPoints);
    void CmdSetLogicOpEXT(VkLogicOp logicOp);
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
