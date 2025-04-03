// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See command_buffer_memory_tracker_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vksc_command_buffer_memory_tracker.h"
#include "vksc_device.h"

namespace vksc {

CommandBufferMemoryTracker::CommandBufferMemoryTracker(VkCommandBuffer command_buffer, CommandPool& command_pool)
    : vk::CommandBuffer(command_buffer, command_pool.GetDevice().VkDispatch(), command_pool.GetDevice().GetFaultHandler()),
      command_pool_(command_pool),
      allocated_memory_size_(0),
      status_(VK_SUCCESS),
      logger_(command_pool_.GetDevice().Log(), VK_OBJECT_TYPE_COMMAND_BUFFER, command_buffer) {}

CommandBufferMemoryTracker::~CommandBufferMemoryTracker() { FreeMemory(); }

VkResult CommandBufferMemoryTracker::BeginCommandBuffer(const VkCommandBufferBeginInfo* pBeginInfo) {
    FreeMemory();
    if (GetStatus() != VK_SUCCESS) {
        return GetStatus();
    } else {
        return NEXT::BeginCommandBuffer(pBeginInfo);
    }
}

VkResult CommandBufferMemoryTracker::ResetCommandBuffer(VkCommandBufferResetFlags flags) {
    FreeMemory();
    if (GetStatus() != VK_SUCCESS) {
        return GetStatus();
    } else {
        return NEXT::ResetCommandBuffer(flags);
    }
}
void CommandBufferMemoryTracker::CmdBindPipeline(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBindPipeline(pipelineBindPoint, pipeline);
    }
}

void CommandBufferMemoryTracker::CmdSetViewport(uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(8 + viewportCount * 4);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetViewport(firstViewport, viewportCount, pViewports);
    }
}

void CommandBufferMemoryTracker::CmdSetScissor(uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(8 + scissorCount * 4);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetScissor(firstScissor, scissorCount, pScissors);
    }
}

void CommandBufferMemoryTracker::CmdSetLineWidth(float lineWidth) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetLineWidth(lineWidth);
    }
}

void CommandBufferMemoryTracker::CmdSetDepthBias(float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDepthBias(depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
    }
}

void CommandBufferMemoryTracker::CmdSetBlendConstants(const float blendConstants[4]) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetBlendConstants(blendConstants);
    }
}

void CommandBufferMemoryTracker::CmdSetDepthBounds(float minDepthBounds, float maxDepthBounds) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDepthBounds(minDepthBounds, maxDepthBounds);
    }
}

void CommandBufferMemoryTracker::CmdSetStencilCompareMask(VkStencilFaceFlags faceMask, uint32_t compareMask) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetStencilCompareMask(faceMask, compareMask);
    }
}

void CommandBufferMemoryTracker::CmdSetStencilWriteMask(VkStencilFaceFlags faceMask, uint32_t writeMask) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetStencilWriteMask(faceMask, writeMask);
    }
}

void CommandBufferMemoryTracker::CmdSetStencilReference(VkStencilFaceFlags faceMask, uint32_t reference) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetStencilReference(faceMask, reference);
    }
}

void CommandBufferMemoryTracker::CmdBindDescriptorSets(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                                       uint32_t firstSet, uint32_t descriptorSetCount,
                                                       const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount,
                                                       const uint32_t* pDynamicOffsets) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(8 + (descriptorSetCount + dynamicOffsetCount) * 4);
    if (res == VK_SUCCESS) {
        NEXT::CmdBindDescriptorSets(pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount,
                                    pDynamicOffsets);
    }
}

void CommandBufferMemoryTracker::CmdBindIndexBuffer(VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBindIndexBuffer(buffer, offset, indexType);
    }
}

void CommandBufferMemoryTracker::CmdBindVertexBuffers(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers,
                                                      const VkDeviceSize* pOffsets) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(8 + bindingCount * 16);
    if (res == VK_SUCCESS) {
        NEXT::CmdBindVertexBuffers(firstBinding, bindingCount, pBuffers, pOffsets);
    }
}

void CommandBufferMemoryTracker::CmdDraw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex,
                                         uint32_t firstInstance) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDraw(vertexCount, instanceCount, firstVertex, firstInstance);
    }
}

void CommandBufferMemoryTracker::CmdDrawIndexed(uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex,
                                                int32_t vertexOffset, uint32_t firstInstance) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDrawIndexed(indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
    }
}

void CommandBufferMemoryTracker::CmdDrawIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDrawIndirect(buffer, offset, drawCount, stride);
    }
}

void CommandBufferMemoryTracker::CmdDrawIndexedIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDrawIndexedIndirect(buffer, offset, drawCount, stride);
    }
}

void CommandBufferMemoryTracker::CmdDispatch(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDispatch(groupCountX, groupCountY, groupCountZ);
    }
}

void CommandBufferMemoryTracker::CmdDispatchIndirect(VkBuffer buffer, VkDeviceSize offset) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDispatchIndirect(buffer, offset);
    }
}

void CommandBufferMemoryTracker::CmdCopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount,
                                               const VkBufferCopy* pRegions) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyBuffer(srcBuffer, dstBuffer, regionCount, pRegions);
    }
}

void CommandBufferMemoryTracker::CmdCopyImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
                                              VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyImage(srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    }
}

void CommandBufferMemoryTracker::CmdBlitImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
                                              VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions,
                                              VkFilter filter) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBlitImage(srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
    }
}

void CommandBufferMemoryTracker::CmdCopyBufferToImage(VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout,
                                                      uint32_t regionCount, const VkBufferImageCopy* pRegions) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyBufferToImage(srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
    }
}

void CommandBufferMemoryTracker::CmdCopyImageToBuffer(VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer,
                                                      uint32_t regionCount, const VkBufferImageCopy* pRegions) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyImageToBuffer(srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
    }
}

void CommandBufferMemoryTracker::CmdUpdateBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize,
                                                 const void* pData) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(16 + dataSize);
    if (res == VK_SUCCESS) {
        NEXT::CmdUpdateBuffer(dstBuffer, dstOffset, dataSize, pData);
    }
}

void CommandBufferMemoryTracker::CmdFillBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdFillBuffer(dstBuffer, dstOffset, size, data);
    }
}

void CommandBufferMemoryTracker::CmdClearColorImage(VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor,
                                                    uint32_t rangeCount, const VkImageSubresourceRange* pRanges) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdClearColorImage(image, imageLayout, pColor, rangeCount, pRanges);
    }
}

void CommandBufferMemoryTracker::CmdClearDepthStencilImage(VkImage image, VkImageLayout imageLayout,
                                                           const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount,
                                                           const VkImageSubresourceRange* pRanges) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdClearDepthStencilImage(image, imageLayout, pDepthStencil, rangeCount, pRanges);
    }
}

void CommandBufferMemoryTracker::CmdClearAttachments(uint32_t attachmentCount, const VkClearAttachment* pAttachments,
                                                     uint32_t rectCount, const VkClearRect* pRects) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdClearAttachments(attachmentCount, pAttachments, rectCount, pRects);
    }
}

void CommandBufferMemoryTracker::CmdResolveImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
                                                 VkImageLayout dstImageLayout, uint32_t regionCount,
                                                 const VkImageResolve* pRegions) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdResolveImage(srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    }
}

void CommandBufferMemoryTracker::CmdSetEvent(VkEvent event, VkPipelineStageFlags stageMask) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetEvent(event, stageMask);
    }
}

void CommandBufferMemoryTracker::CmdResetEvent(VkEvent event, VkPipelineStageFlags stageMask) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdResetEvent(event, stageMask);
    }
}

void CommandBufferMemoryTracker::CmdWaitEvents(uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask,
                                               VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount,
                                               const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount,
                                               const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount,
                                               const VkImageMemoryBarrier* pImageMemoryBarriers) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdWaitEvents(eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers,
                            bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    }
}

void CommandBufferMemoryTracker::CmdPipelineBarrier(VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask,
                                                    VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount,
                                                    const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount,
                                                    const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                                                    uint32_t imageMemoryBarrierCount,
                                                    const VkImageMemoryBarrier* pImageMemoryBarriers) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdPipelineBarrier(srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers,
                                 bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    }
}

void CommandBufferMemoryTracker::CmdBeginQuery(VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBeginQuery(queryPool, query, flags);
    }
}

void CommandBufferMemoryTracker::CmdEndQuery(VkQueryPool queryPool, uint32_t query) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdEndQuery(queryPool, query);
    }
}

void CommandBufferMemoryTracker::CmdResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdResetQueryPool(queryPool, firstQuery, queryCount);
    }
}

void CommandBufferMemoryTracker::CmdWriteTimestamp(VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdWriteTimestamp(pipelineStage, queryPool, query);
    }
}

void CommandBufferMemoryTracker::CmdCopyQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount,
                                                         VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride,
                                                         VkQueryResultFlags flags) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyQueryPoolResults(queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
    }
}

void CommandBufferMemoryTracker::CmdPushConstants(VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset,
                                                  uint32_t size, const void* pValues) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdPushConstants(layout, stageFlags, offset, size, pValues);
    }
}

void CommandBufferMemoryTracker::CmdBeginRenderPass(const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBeginRenderPass(pRenderPassBegin, contents);
    }
}

void CommandBufferMemoryTracker::CmdNextSubpass(VkSubpassContents contents) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdNextSubpass(contents);
    }
}

void CommandBufferMemoryTracker::CmdEndRenderPass() {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdEndRenderPass();
    }
}

void CommandBufferMemoryTracker::CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdExecuteCommands(commandBufferCount, pCommandBuffers);
    }
}

void CommandBufferMemoryTracker::CmdSetDeviceMask(uint32_t deviceMask) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDeviceMask(deviceMask);
    }
}

void CommandBufferMemoryTracker::CmdDispatchBase(uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ,
                                                 uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDispatchBase(baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    }
}

void CommandBufferMemoryTracker::CmdDrawIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                                      VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDrawIndirectCount(buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
}

void CommandBufferMemoryTracker::CmdDrawIndexedIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                                             VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                             uint32_t stride) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdDrawIndexedIndirectCount(buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    }
}

void CommandBufferMemoryTracker::CmdBeginRenderPass2(const VkRenderPassBeginInfo* pRenderPassBegin,
                                                     const VkSubpassBeginInfo* pSubpassBeginInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBeginRenderPass2(pRenderPassBegin, pSubpassBeginInfo);
    }
}

void CommandBufferMemoryTracker::CmdNextSubpass2(const VkSubpassBeginInfo* pSubpassBeginInfo,
                                                 const VkSubpassEndInfo* pSubpassEndInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdNextSubpass2(pSubpassBeginInfo, pSubpassEndInfo);
    }
}

void CommandBufferMemoryTracker::CmdEndRenderPass2(const VkSubpassEndInfo* pSubpassEndInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdEndRenderPass2(pSubpassEndInfo);
    }
}

void CommandBufferMemoryTracker::CmdSetEvent2(VkEvent event, const VkDependencyInfo* pDependencyInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetEvent2(event, pDependencyInfo);
    }
}

void CommandBufferMemoryTracker::CmdResetEvent2(VkEvent event, VkPipelineStageFlags2 stageMask) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdResetEvent2(event, stageMask);
    }
}

void CommandBufferMemoryTracker::CmdWaitEvents2(uint32_t eventCount, const VkEvent* pEvents,
                                                const VkDependencyInfo* pDependencyInfos) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdWaitEvents2(eventCount, pEvents, pDependencyInfos);
    }
}

void CommandBufferMemoryTracker::CmdPipelineBarrier2(const VkDependencyInfo* pDependencyInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdPipelineBarrier2(pDependencyInfo);
    }
}

void CommandBufferMemoryTracker::CmdWriteTimestamp2(VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdWriteTimestamp2(stage, queryPool, query);
    }
}

void CommandBufferMemoryTracker::CmdCopyBuffer2(const VkCopyBufferInfo2* pCopyBufferInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyBuffer2(pCopyBufferInfo);
    }
}

void CommandBufferMemoryTracker::CmdCopyImage2(const VkCopyImageInfo2* pCopyImageInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyImage2(pCopyImageInfo);
    }
}

void CommandBufferMemoryTracker::CmdCopyBufferToImage2(const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyBufferToImage2(pCopyBufferToImageInfo);
    }
}

void CommandBufferMemoryTracker::CmdCopyImageToBuffer2(const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdCopyImageToBuffer2(pCopyImageToBufferInfo);
    }
}

void CommandBufferMemoryTracker::CmdBlitImage2(const VkBlitImageInfo2* pBlitImageInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBlitImage2(pBlitImageInfo);
    }
}

void CommandBufferMemoryTracker::CmdResolveImage2(const VkResolveImageInfo2* pResolveImageInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdResolveImage2(pResolveImageInfo);
    }
}

void CommandBufferMemoryTracker::CmdBeginRendering(const VkRenderingInfo* pRenderingInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBeginRendering(pRenderingInfo);
    }
}

void CommandBufferMemoryTracker::CmdEndRendering() {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdEndRendering();
    }
}

void CommandBufferMemoryTracker::CmdSetCullMode(VkCullModeFlags cullMode) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetCullMode(cullMode);
    }
}

void CommandBufferMemoryTracker::CmdSetFrontFace(VkFrontFace frontFace) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetFrontFace(frontFace);
    }
}

void CommandBufferMemoryTracker::CmdSetPrimitiveTopology(VkPrimitiveTopology primitiveTopology) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetPrimitiveTopology(primitiveTopology);
    }
}

void CommandBufferMemoryTracker::CmdSetViewportWithCount(uint32_t viewportCount, const VkViewport* pViewports) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(8 + viewportCount * 4);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetViewportWithCount(viewportCount, pViewports);
    }
}

void CommandBufferMemoryTracker::CmdSetScissorWithCount(uint32_t scissorCount, const VkRect2D* pScissors) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(8 + scissorCount * 4);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetScissorWithCount(scissorCount, pScissors);
    }
}

void CommandBufferMemoryTracker::CmdBindVertexBuffers2(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers,
                                                       const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                                       const VkDeviceSize* pStrides) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(8 + bindingCount * 24);
    if (res == VK_SUCCESS) {
        NEXT::CmdBindVertexBuffers2(firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    }
}

void CommandBufferMemoryTracker::CmdSetDepthTestEnable(VkBool32 depthTestEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDepthTestEnable(depthTestEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetDepthWriteEnable(VkBool32 depthWriteEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDepthWriteEnable(depthWriteEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetDepthCompareOp(VkCompareOp depthCompareOp) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDepthCompareOp(depthCompareOp);
    }
}

void CommandBufferMemoryTracker::CmdSetDepthBoundsTestEnable(VkBool32 depthBoundsTestEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDepthBoundsTestEnable(depthBoundsTestEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetStencilTestEnable(VkBool32 stencilTestEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetStencilTestEnable(stencilTestEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetStencilOp(VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp,
                                                 VkStencilOp depthFailOp, VkCompareOp compareOp) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetStencilOp(faceMask, failOp, passOp, depthFailOp, compareOp);
    }
}

void CommandBufferMemoryTracker::CmdSetRasterizerDiscardEnable(VkBool32 rasterizerDiscardEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetRasterizerDiscardEnable(rasterizerDiscardEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetDepthBiasEnable(VkBool32 depthBiasEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDepthBiasEnable(depthBiasEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetPrimitiveRestartEnable(VkBool32 primitiveRestartEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetPrimitiveRestartEnable(primitiveRestartEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetLineStipple(uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetLineStipple(lineStippleFactor, lineStipplePattern);
    }
}

void CommandBufferMemoryTracker::CmdBindIndexBuffer2(VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size,
                                                     VkIndexType indexType) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBindIndexBuffer2(buffer, offset, size, indexType);
    }
}

void CommandBufferMemoryTracker::CmdPushDescriptorSet(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set,
                                                      uint32_t descriptorWriteCount,
                                                      const VkWriteDescriptorSet* pDescriptorWrites) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdPushDescriptorSet(pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
    }
}

void CommandBufferMemoryTracker::CmdSetRenderingAttachmentLocations(const VkRenderingAttachmentLocationInfo* pLocationInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetRenderingAttachmentLocations(pLocationInfo);
    }
}

void CommandBufferMemoryTracker::CmdSetRenderingInputAttachmentIndices(
    const VkRenderingInputAttachmentIndexInfo* pInputAttachmentIndexInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetRenderingInputAttachmentIndices(pInputAttachmentIndexInfo);
    }
}

void CommandBufferMemoryTracker::CmdBindDescriptorSets2(const VkBindDescriptorSetsInfo* pBindDescriptorSetsInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBindDescriptorSets2(pBindDescriptorSetsInfo);
    }
}

void CommandBufferMemoryTracker::CmdPushConstants2(const VkPushConstantsInfo* pPushConstantsInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdPushConstants2(pPushConstantsInfo);
    }
}

void CommandBufferMemoryTracker::CmdPushDescriptorSet2(const VkPushDescriptorSetInfo* pPushDescriptorSetInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdPushDescriptorSet2(pPushDescriptorSetInfo);
    }
}

void CommandBufferMemoryTracker::CmdSetFragmentShadingRateKHR(const VkExtent2D* pFragmentSize,
                                                              const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetFragmentShadingRateKHR(pFragmentSize, combinerOps);
    }
}

void CommandBufferMemoryTracker::CmdSetDiscardRectangleEXT(uint32_t firstDiscardRectangle, uint32_t discardRectangleCount,
                                                           const VkRect2D* pDiscardRectangles) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDiscardRectangleEXT(firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    }
}

void CommandBufferMemoryTracker::CmdSetDiscardRectangleEnableEXT(VkBool32 discardRectangleEnable) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDiscardRectangleEnableEXT(discardRectangleEnable);
    }
}

void CommandBufferMemoryTracker::CmdSetDiscardRectangleModeEXT(VkDiscardRectangleModeEXT discardRectangleMode) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetDiscardRectangleModeEXT(discardRectangleMode);
    }
}

void CommandBufferMemoryTracker::CmdBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdBeginDebugUtilsLabelEXT(pLabelInfo);
    }
}

void CommandBufferMemoryTracker::CmdEndDebugUtilsLabelEXT() {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdEndDebugUtilsLabelEXT();
    }
}

void CommandBufferMemoryTracker::CmdInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdInsertDebugUtilsLabelEXT(pLabelInfo);
    }
}

void CommandBufferMemoryTracker::CmdSetSampleLocationsEXT(const VkSampleLocationsInfoEXT* pSampleLocationsInfo) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetSampleLocationsEXT(pSampleLocationsInfo);
    }
}

void CommandBufferMemoryTracker::CmdSetVertexInputEXT(uint32_t vertexBindingDescriptionCount,
                                                      const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
                                                      uint32_t vertexAttributeDescriptionCount,
                                                      const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetVertexInputEXT(vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount,
                                   pVertexAttributeDescriptions);
    }
}

void CommandBufferMemoryTracker::CmdSetPatchControlPointsEXT(uint32_t patchControlPoints) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetPatchControlPointsEXT(patchControlPoints);
    }
}

void CommandBufferMemoryTracker::CmdSetLogicOpEXT(VkLogicOp logicOp) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetLogicOpEXT(logicOp);
    }
}

void CommandBufferMemoryTracker::CmdSetColorWriteEnableEXT(uint32_t attachmentCount, const VkBool32* pColorWriteEnables) {
    if (status_ != VK_SUCCESS) {
        return;
    }
    VkResult res = AllocateMemory(32);
    if (res == VK_SUCCESS) {
        NEXT::CmdSetColorWriteEnableEXT(attachmentCount, pColorWriteEnables);
    }
}

void CommandBufferMemoryTracker::FreeMemory() {
    SetStatus(VK_SUCCESS);
    VkResult res = command_pool_.FreeMemory(GetAllocatedMemorySize());
    if (res != VK_SUCCESS) {
        SetStatus(res);
        command_pool_.GetDevice().ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
        Log().Error("VKSC-EMU-CommandBuffer-ResetError", "Failed to release command buffer resources to pool (%p).",
                    &command_pool_);
    }
    allocated_memory_size_ = 0;
}

VkResult CommandBufferMemoryTracker::AllocateMemory(VkDeviceSize size) {
    if (GetStatus() != VK_SUCCESS) {
        return GetStatus();
    }

    auto new_size = allocated_memory_size_ + size;
    if (new_size > command_pool_.GetDevice().GetPhysicalDevice().GetMaxCommandBufferSize()) {
        SetStatus(VK_ERROR_OUT_OF_DEVICE_MEMORY);
        command_pool_.GetDevice().ReportFault(VK_FAULT_LEVEL_RECOVERABLE, VK_FAULT_TYPE_COMMAND_BUFFER_FULL);
        Log().Error("VKSC-EMU-CommandBuffer-AllocateError",
                    "Allocation of size (%zu) to pool (%p) is more than the physical device limit of (%zu).", size,
                    command_pool_.GetDevice().GetPhysicalDevice().GetMaxCommandBufferSize(), &command_pool_);
        return GetStatus();
    }

    VkResult res = command_pool_.AllocateMemory(size);
    if (res != VK_SUCCESS) {
        SetStatus(res);
        command_pool_.GetDevice().ReportFault(VK_FAULT_LEVEL_RECOVERABLE, VK_FAULT_TYPE_COMMAND_BUFFER_FULL);
        return GetStatus();
    }

    allocated_memory_size_ = new_size;
    return VK_SUCCESS;
}

}  // namespace vksc

// NOLINTEND
