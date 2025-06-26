// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_command_buffer.h"
#include "vksc_output_struct_sanitizer.h"

namespace vk {

VkResult CommandBuffer::BeginCommandBuffer(const VkCommandBufferBeginInfo* pBeginInfo) {
    return dispatch_table_.BeginCommandBuffer(handle_, pBeginInfo);
}
VkResult CommandBuffer::EndCommandBuffer() { return dispatch_table_.EndCommandBuffer(handle_); }
VkResult CommandBuffer::ResetCommandBuffer(VkCommandBufferResetFlags flags) {
    return dispatch_table_.ResetCommandBuffer(handle_, flags);
}
void CommandBuffer::CmdBindPipeline(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
    dispatch_table_.CmdBindPipeline(handle_, pipelineBindPoint, pipeline);
}
void CommandBuffer::CmdSetViewport(uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) {
    dispatch_table_.CmdSetViewport(handle_, firstViewport, viewportCount, pViewports);
}
void CommandBuffer::CmdSetScissor(uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) {
    dispatch_table_.CmdSetScissor(handle_, firstScissor, scissorCount, pScissors);
}
void CommandBuffer::CmdSetLineWidth(float lineWidth) { dispatch_table_.CmdSetLineWidth(handle_, lineWidth); }
void CommandBuffer::CmdSetDepthBias(float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {
    dispatch_table_.CmdSetDepthBias(handle_, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}
void CommandBuffer::CmdSetBlendConstants(const float blendConstants[4]) {
    dispatch_table_.CmdSetBlendConstants(handle_, blendConstants);
}
void CommandBuffer::CmdSetDepthBounds(float minDepthBounds, float maxDepthBounds) {
    dispatch_table_.CmdSetDepthBounds(handle_, minDepthBounds, maxDepthBounds);
}
void CommandBuffer::CmdSetStencilCompareMask(VkStencilFaceFlags faceMask, uint32_t compareMask) {
    dispatch_table_.CmdSetStencilCompareMask(handle_, faceMask, compareMask);
}
void CommandBuffer::CmdSetStencilWriteMask(VkStencilFaceFlags faceMask, uint32_t writeMask) {
    dispatch_table_.CmdSetStencilWriteMask(handle_, faceMask, writeMask);
}
void CommandBuffer::CmdSetStencilReference(VkStencilFaceFlags faceMask, uint32_t reference) {
    dispatch_table_.CmdSetStencilReference(handle_, faceMask, reference);
}
void CommandBuffer::CmdBindDescriptorSets(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet,
                                          uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets,
                                          uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) {
    dispatch_table_.CmdBindDescriptorSets(handle_, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets,
                                          dynamicOffsetCount, pDynamicOffsets);
}
void CommandBuffer::CmdBindIndexBuffer(VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {
    dispatch_table_.CmdBindIndexBuffer(handle_, buffer, offset, indexType);
}
void CommandBuffer::CmdBindVertexBuffers(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers,
                                         const VkDeviceSize* pOffsets) {
    dispatch_table_.CmdBindVertexBuffers(handle_, firstBinding, bindingCount, pBuffers, pOffsets);
}
void CommandBuffer::CmdDraw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
    dispatch_table_.CmdDraw(handle_, vertexCount, instanceCount, firstVertex, firstInstance);
}
void CommandBuffer::CmdDrawIndexed(uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset,
                                   uint32_t firstInstance) {
    dispatch_table_.CmdDrawIndexed(handle_, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}
void CommandBuffer::CmdDrawIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndirect(handle_, buffer, offset, drawCount, stride);
}
void CommandBuffer::CmdDrawIndexedIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndexedIndirect(handle_, buffer, offset, drawCount, stride);
}
void CommandBuffer::CmdDispatch(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    dispatch_table_.CmdDispatch(handle_, groupCountX, groupCountY, groupCountZ);
}
void CommandBuffer::CmdDispatchIndirect(VkBuffer buffer, VkDeviceSize offset) {
    dispatch_table_.CmdDispatchIndirect(handle_, buffer, offset);
}
void CommandBuffer::CmdCopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions) {
    dispatch_table_.CmdCopyBuffer(handle_, srcBuffer, dstBuffer, regionCount, pRegions);
}
void CommandBuffer::CmdCopyImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                                 uint32_t regionCount, const VkImageCopy* pRegions) {
    dispatch_table_.CmdCopyImage(handle_, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}
void CommandBuffer::CmdBlitImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                                 uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter) {
    dispatch_table_.CmdBlitImage(handle_, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}
void CommandBuffer::CmdCopyBufferToImage(VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                         const VkBufferImageCopy* pRegions) {
    dispatch_table_.CmdCopyBufferToImage(handle_, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}
void CommandBuffer::CmdCopyImageToBuffer(VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount,
                                         const VkBufferImageCopy* pRegions) {
    dispatch_table_.CmdCopyImageToBuffer(handle_, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}
void CommandBuffer::CmdUpdateBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) {
    dispatch_table_.CmdUpdateBuffer(handle_, dstBuffer, dstOffset, dataSize, pData);
}
void CommandBuffer::CmdFillBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {
    dispatch_table_.CmdFillBuffer(handle_, dstBuffer, dstOffset, size, data);
}
void CommandBuffer::CmdClearColorImage(VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor,
                                       uint32_t rangeCount, const VkImageSubresourceRange* pRanges) {
    dispatch_table_.CmdClearColorImage(handle_, image, imageLayout, pColor, rangeCount, pRanges);
}
void CommandBuffer::CmdClearDepthStencilImage(VkImage image, VkImageLayout imageLayout,
                                              const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount,
                                              const VkImageSubresourceRange* pRanges) {
    dispatch_table_.CmdClearDepthStencilImage(handle_, image, imageLayout, pDepthStencil, rangeCount, pRanges);
}
void CommandBuffer::CmdClearAttachments(uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount,
                                        const VkClearRect* pRects) {
    dispatch_table_.CmdClearAttachments(handle_, attachmentCount, pAttachments, rectCount, pRects);
}
void CommandBuffer::CmdResolveImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout,
                                    uint32_t regionCount, const VkImageResolve* pRegions) {
    dispatch_table_.CmdResolveImage(handle_, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}
void CommandBuffer::CmdSetEvent(VkEvent event, VkPipelineStageFlags stageMask) {
    dispatch_table_.CmdSetEvent(handle_, event, stageMask);
}
void CommandBuffer::CmdResetEvent(VkEvent event, VkPipelineStageFlags stageMask) {
    dispatch_table_.CmdResetEvent(handle_, event, stageMask);
}
void CommandBuffer::CmdWaitEvents(uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask,
                                  VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount,
                                  const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount,
                                  const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount,
                                  const VkImageMemoryBarrier* pImageMemoryBarriers) {
    dispatch_table_.CmdWaitEvents(handle_, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers,
                                  bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}
void CommandBuffer::CmdPipelineBarrier(VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask,
                                       VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount,
                                       const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount,
                                       const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount,
                                       const VkImageMemoryBarrier* pImageMemoryBarriers) {
    dispatch_table_.CmdPipelineBarrier(handle_, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers,
                                       bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount,
                                       pImageMemoryBarriers);
}
void CommandBuffer::CmdBeginQuery(VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {
    dispatch_table_.CmdBeginQuery(handle_, queryPool, query, flags);
}
void CommandBuffer::CmdEndQuery(VkQueryPool queryPool, uint32_t query) { dispatch_table_.CmdEndQuery(handle_, queryPool, query); }
void CommandBuffer::CmdResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    dispatch_table_.CmdResetQueryPool(handle_, queryPool, firstQuery, queryCount);
}
void CommandBuffer::CmdWriteTimestamp(VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {
    dispatch_table_.CmdWriteTimestamp(handle_, pipelineStage, queryPool, query);
}
void CommandBuffer::CmdCopyQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer,
                                            VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) {
    dispatch_table_.CmdCopyQueryPoolResults(handle_, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}
void CommandBuffer::CmdPushConstants(VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size,
                                     const void* pValues) {
    dispatch_table_.CmdPushConstants(handle_, layout, stageFlags, offset, size, pValues);
}
void CommandBuffer::CmdBeginRenderPass(const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) {
    dispatch_table_.CmdBeginRenderPass(handle_, pRenderPassBegin, contents);
}
void CommandBuffer::CmdNextSubpass(VkSubpassContents contents) { dispatch_table_.CmdNextSubpass(handle_, contents); }
void CommandBuffer::CmdEndRenderPass() { dispatch_table_.CmdEndRenderPass(handle_); }
void CommandBuffer::CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    dispatch_table_.CmdExecuteCommands(handle_, commandBufferCount, pCommandBuffers);
}
void CommandBuffer::CmdSetDeviceMask(uint32_t deviceMask) { dispatch_table_.CmdSetDeviceMask(handle_, deviceMask); }
void CommandBuffer::CmdDispatchBase(uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX,
                                    uint32_t groupCountY, uint32_t groupCountZ) {
    dispatch_table_.CmdDispatchBase(handle_, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}
void CommandBuffer::CmdDrawIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                         uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndirectCount(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
void CommandBuffer::CmdDrawIndexedIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                                VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndexedIndirectCount(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
void CommandBuffer::CmdBeginRenderPass2(const VkRenderPassBeginInfo* pRenderPassBegin,
                                        const VkSubpassBeginInfo* pSubpassBeginInfo) {
    dispatch_table_.CmdBeginRenderPass2(handle_, pRenderPassBegin, pSubpassBeginInfo);
}
void CommandBuffer::CmdNextSubpass2(const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
    dispatch_table_.CmdNextSubpass2(handle_, pSubpassBeginInfo, pSubpassEndInfo);
}
void CommandBuffer::CmdEndRenderPass2(const VkSubpassEndInfo* pSubpassEndInfo) {
    dispatch_table_.CmdEndRenderPass2(handle_, pSubpassEndInfo);
}
void CommandBuffer::CmdBeginVideoCodingKHR(const VkVideoBeginCodingInfoKHR* pBeginInfo) {
    dispatch_table_.CmdBeginVideoCodingKHR(handle_, pBeginInfo);
}
void CommandBuffer::CmdEndVideoCodingKHR(const VkVideoEndCodingInfoKHR* pEndCodingInfo) {
    dispatch_table_.CmdEndVideoCodingKHR(handle_, pEndCodingInfo);
}
void CommandBuffer::CmdControlVideoCodingKHR(const VkVideoCodingControlInfoKHR* pCodingControlInfo) {
    dispatch_table_.CmdControlVideoCodingKHR(handle_, pCodingControlInfo);
}
void CommandBuffer::CmdDecodeVideoKHR(const VkVideoDecodeInfoKHR* pDecodeInfo) {
    dispatch_table_.CmdDecodeVideoKHR(handle_, pDecodeInfo);
}
void CommandBuffer::CmdBeginRenderingKHR(const VkRenderingInfo* pRenderingInfo) {
    dispatch_table_.CmdBeginRenderingKHR(handle_, pRenderingInfo);
}
void CommandBuffer::CmdEndRenderingKHR() { dispatch_table_.CmdEndRenderingKHR(handle_); }
void CommandBuffer::CmdSetDeviceMaskKHR(uint32_t deviceMask) { dispatch_table_.CmdSetDeviceMaskKHR(handle_, deviceMask); }
void CommandBuffer::CmdDispatchBaseKHR(uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX,
                                       uint32_t groupCountY, uint32_t groupCountZ) {
    dispatch_table_.CmdDispatchBaseKHR(handle_, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}
void CommandBuffer::CmdPushDescriptorSetKHR(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set,
                                            uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) {
    dispatch_table_.CmdPushDescriptorSetKHR(handle_, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}
void CommandBuffer::CmdPushDescriptorSetWithTemplateKHR(VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                        VkPipelineLayout layout, uint32_t set, const void* pData) {
    dispatch_table_.CmdPushDescriptorSetWithTemplateKHR(handle_, descriptorUpdateTemplate, layout, set, pData);
}
void CommandBuffer::CmdBeginRenderPass2KHR(const VkRenderPassBeginInfo* pRenderPassBegin,
                                           const VkSubpassBeginInfo* pSubpassBeginInfo) {
    dispatch_table_.CmdBeginRenderPass2KHR(handle_, pRenderPassBegin, pSubpassBeginInfo);
}
void CommandBuffer::CmdNextSubpass2KHR(const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
    dispatch_table_.CmdNextSubpass2KHR(handle_, pSubpassBeginInfo, pSubpassEndInfo);
}
void CommandBuffer::CmdEndRenderPass2KHR(const VkSubpassEndInfo* pSubpassEndInfo) {
    dispatch_table_.CmdEndRenderPass2KHR(handle_, pSubpassEndInfo);
}
void CommandBuffer::CmdDrawIndirectCountKHR(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                            VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndirectCountKHR(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
void CommandBuffer::CmdDrawIndexedIndirectCountKHR(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                                   VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndexedIndirectCountKHR(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
void CommandBuffer::CmdSetFragmentShadingRateKHR(const VkExtent2D* pFragmentSize,
                                                 const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
    dispatch_table_.CmdSetFragmentShadingRateKHR(handle_, pFragmentSize, combinerOps);
}
void CommandBuffer::CmdSetRenderingAttachmentLocationsKHR(const VkRenderingAttachmentLocationInfo* pLocationInfo) {
    dispatch_table_.CmdSetRenderingAttachmentLocationsKHR(handle_, pLocationInfo);
}
void CommandBuffer::CmdSetRenderingInputAttachmentIndicesKHR(const VkRenderingInputAttachmentIndexInfo* pInputAttachmentIndexInfo) {
    dispatch_table_.CmdSetRenderingInputAttachmentIndicesKHR(handle_, pInputAttachmentIndexInfo);
}
void CommandBuffer::CmdEncodeVideoKHR(const VkVideoEncodeInfoKHR* pEncodeInfo) {
    dispatch_table_.CmdEncodeVideoKHR(handle_, pEncodeInfo);
}
void CommandBuffer::CmdSetEvent2KHR(VkEvent event, const VkDependencyInfo* pDependencyInfo) {
    dispatch_table_.CmdSetEvent2KHR(handle_, event, pDependencyInfo);
}
void CommandBuffer::CmdResetEvent2KHR(VkEvent event, VkPipelineStageFlags2 stageMask) {
    dispatch_table_.CmdResetEvent2KHR(handle_, event, stageMask);
}
void CommandBuffer::CmdWaitEvents2KHR(uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos) {
    dispatch_table_.CmdWaitEvents2KHR(handle_, eventCount, pEvents, pDependencyInfos);
}
void CommandBuffer::CmdPipelineBarrier2KHR(const VkDependencyInfo* pDependencyInfo) {
    dispatch_table_.CmdPipelineBarrier2KHR(handle_, pDependencyInfo);
}
void CommandBuffer::CmdWriteTimestamp2KHR(VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
    dispatch_table_.CmdWriteTimestamp2KHR(handle_, stage, queryPool, query);
}
void CommandBuffer::CmdCopyBuffer2KHR(const VkCopyBufferInfo2* pCopyBufferInfo) {
    dispatch_table_.CmdCopyBuffer2KHR(handle_, pCopyBufferInfo);
}
void CommandBuffer::CmdCopyImage2KHR(const VkCopyImageInfo2* pCopyImageInfo) {
    dispatch_table_.CmdCopyImage2KHR(handle_, pCopyImageInfo);
}
void CommandBuffer::CmdCopyBufferToImage2KHR(const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
    dispatch_table_.CmdCopyBufferToImage2KHR(handle_, pCopyBufferToImageInfo);
}
void CommandBuffer::CmdCopyImageToBuffer2KHR(const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
    dispatch_table_.CmdCopyImageToBuffer2KHR(handle_, pCopyImageToBufferInfo);
}
void CommandBuffer::CmdBlitImage2KHR(const VkBlitImageInfo2* pBlitImageInfo) {
    dispatch_table_.CmdBlitImage2KHR(handle_, pBlitImageInfo);
}
void CommandBuffer::CmdResolveImage2KHR(const VkResolveImageInfo2* pResolveImageInfo) {
    dispatch_table_.CmdResolveImage2KHR(handle_, pResolveImageInfo);
}
void CommandBuffer::CmdTraceRaysIndirect2KHR(VkDeviceAddress indirectDeviceAddress) {
    dispatch_table_.CmdTraceRaysIndirect2KHR(handle_, indirectDeviceAddress);
}
void CommandBuffer::CmdBindIndexBuffer2KHR(VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size, VkIndexType indexType) {
    dispatch_table_.CmdBindIndexBuffer2KHR(handle_, buffer, offset, size, indexType);
}
void CommandBuffer::CmdSetLineStippleKHR(uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
    dispatch_table_.CmdSetLineStippleKHR(handle_, lineStippleFactor, lineStipplePattern);
}
void CommandBuffer::CmdBindDescriptorSets2KHR(const VkBindDescriptorSetsInfo* pBindDescriptorSetsInfo) {
    dispatch_table_.CmdBindDescriptorSets2KHR(handle_, pBindDescriptorSetsInfo);
}
void CommandBuffer::CmdPushConstants2KHR(const VkPushConstantsInfo* pPushConstantsInfo) {
    dispatch_table_.CmdPushConstants2KHR(handle_, pPushConstantsInfo);
}
void CommandBuffer::CmdPushDescriptorSet2KHR(const VkPushDescriptorSetInfo* pPushDescriptorSetInfo) {
    dispatch_table_.CmdPushDescriptorSet2KHR(handle_, pPushDescriptorSetInfo);
}
void CommandBuffer::CmdPushDescriptorSetWithTemplate2KHR(
    const VkPushDescriptorSetWithTemplateInfo* pPushDescriptorSetWithTemplateInfo) {
    dispatch_table_.CmdPushDescriptorSetWithTemplate2KHR(handle_, pPushDescriptorSetWithTemplateInfo);
}
void CommandBuffer::CmdSetDescriptorBufferOffsets2EXT(const VkSetDescriptorBufferOffsetsInfoEXT* pSetDescriptorBufferOffsetsInfo) {
    dispatch_table_.CmdSetDescriptorBufferOffsets2EXT(handle_, pSetDescriptorBufferOffsetsInfo);
}
void CommandBuffer::CmdBindDescriptorBufferEmbeddedSamplers2EXT(
    const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* pBindDescriptorBufferEmbeddedSamplersInfo) {
    dispatch_table_.CmdBindDescriptorBufferEmbeddedSamplers2EXT(handle_, pBindDescriptorBufferEmbeddedSamplersInfo);
}
void CommandBuffer::CmdDebugMarkerBeginEXT(const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
    dispatch_table_.CmdDebugMarkerBeginEXT(handle_, pMarkerInfo);
}
void CommandBuffer::CmdDebugMarkerEndEXT() { dispatch_table_.CmdDebugMarkerEndEXT(handle_); }
void CommandBuffer::CmdDebugMarkerInsertEXT(const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
    dispatch_table_.CmdDebugMarkerInsertEXT(handle_, pMarkerInfo);
}
void CommandBuffer::CmdBindTransformFeedbackBuffersEXT(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers,
                                                       const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes) {
    dispatch_table_.CmdBindTransformFeedbackBuffersEXT(handle_, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
}
void CommandBuffer::CmdBeginTransformFeedbackEXT(uint32_t firstCounterBuffer, uint32_t counterBufferCount,
                                                 const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
    dispatch_table_.CmdBeginTransformFeedbackEXT(handle_, firstCounterBuffer, counterBufferCount, pCounterBuffers,
                                                 pCounterBufferOffsets);
}
void CommandBuffer::CmdEndTransformFeedbackEXT(uint32_t firstCounterBuffer, uint32_t counterBufferCount,
                                               const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
    dispatch_table_.CmdEndTransformFeedbackEXT(handle_, firstCounterBuffer, counterBufferCount, pCounterBuffers,
                                               pCounterBufferOffsets);
}
void CommandBuffer::CmdBeginQueryIndexedEXT(VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {
    dispatch_table_.CmdBeginQueryIndexedEXT(handle_, queryPool, query, flags, index);
}
void CommandBuffer::CmdEndQueryIndexedEXT(VkQueryPool queryPool, uint32_t query, uint32_t index) {
    dispatch_table_.CmdEndQueryIndexedEXT(handle_, queryPool, query, index);
}
void CommandBuffer::CmdDrawIndirectByteCountEXT(uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer,
                                                VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {
    dispatch_table_.CmdDrawIndirectByteCountEXT(handle_, instanceCount, firstInstance, counterBuffer, counterBufferOffset,
                                                counterOffset, vertexStride);
}
void CommandBuffer::CmdCuLaunchKernelNVX(const VkCuLaunchInfoNVX* pLaunchInfo) {
    dispatch_table_.CmdCuLaunchKernelNVX(handle_, pLaunchInfo);
}
void CommandBuffer::CmdDrawIndirectCountAMD(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                            VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndirectCountAMD(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
void CommandBuffer::CmdDrawIndexedIndirectCountAMD(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                                   VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawIndexedIndirectCountAMD(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
void CommandBuffer::CmdBeginConditionalRenderingEXT(const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) {
    dispatch_table_.CmdBeginConditionalRenderingEXT(handle_, pConditionalRenderingBegin);
}
void CommandBuffer::CmdEndConditionalRenderingEXT() { dispatch_table_.CmdEndConditionalRenderingEXT(handle_); }
void CommandBuffer::CmdSetViewportWScalingNV(uint32_t firstViewport, uint32_t viewportCount,
                                             const VkViewportWScalingNV* pViewportWScalings) {
    dispatch_table_.CmdSetViewportWScalingNV(handle_, firstViewport, viewportCount, pViewportWScalings);
}
void CommandBuffer::CmdSetDiscardRectangleEXT(uint32_t firstDiscardRectangle, uint32_t discardRectangleCount,
                                              const VkRect2D* pDiscardRectangles) {
    dispatch_table_.CmdSetDiscardRectangleEXT(handle_, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}
void CommandBuffer::CmdSetDiscardRectangleEnableEXT(VkBool32 discardRectangleEnable) {
    dispatch_table_.CmdSetDiscardRectangleEnableEXT(handle_, discardRectangleEnable);
}
void CommandBuffer::CmdSetDiscardRectangleModeEXT(VkDiscardRectangleModeEXT discardRectangleMode) {
    dispatch_table_.CmdSetDiscardRectangleModeEXT(handle_, discardRectangleMode);
}
void CommandBuffer::CmdBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    dispatch_table_.CmdBeginDebugUtilsLabelEXT(handle_, pLabelInfo);
}
void CommandBuffer::CmdEndDebugUtilsLabelEXT() { dispatch_table_.CmdEndDebugUtilsLabelEXT(handle_); }
void CommandBuffer::CmdInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    dispatch_table_.CmdInsertDebugUtilsLabelEXT(handle_, pLabelInfo);
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
void CommandBuffer::CmdInitializeGraphScratchMemoryAMDX(VkPipeline executionGraph, VkDeviceAddress scratch,
                                                        VkDeviceSize scratchSize) {
    dispatch_table_.CmdInitializeGraphScratchMemoryAMDX(handle_, executionGraph, scratch, scratchSize);
}
void CommandBuffer::CmdDispatchGraphAMDX(VkDeviceAddress scratch, VkDeviceSize scratchSize,
                                         const VkDispatchGraphCountInfoAMDX* pCountInfo) {
    dispatch_table_.CmdDispatchGraphAMDX(handle_, scratch, scratchSize, pCountInfo);
}
void CommandBuffer::CmdDispatchGraphIndirectAMDX(VkDeviceAddress scratch, VkDeviceSize scratchSize,
                                                 const VkDispatchGraphCountInfoAMDX* pCountInfo) {
    dispatch_table_.CmdDispatchGraphIndirectAMDX(handle_, scratch, scratchSize, pCountInfo);
}
void CommandBuffer::CmdDispatchGraphIndirectCountAMDX(VkDeviceAddress scratch, VkDeviceSize scratchSize,
                                                      VkDeviceAddress countInfo) {
    dispatch_table_.CmdDispatchGraphIndirectCountAMDX(handle_, scratch, scratchSize, countInfo);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
void CommandBuffer::CmdSetSampleLocationsEXT(const VkSampleLocationsInfoEXT* pSampleLocationsInfo) {
    dispatch_table_.CmdSetSampleLocationsEXT(handle_, pSampleLocationsInfo);
}
void CommandBuffer::CmdBindShadingRateImageNV(VkImageView imageView, VkImageLayout imageLayout) {
    dispatch_table_.CmdBindShadingRateImageNV(handle_, imageView, imageLayout);
}
void CommandBuffer::CmdSetViewportShadingRatePaletteNV(uint32_t firstViewport, uint32_t viewportCount,
                                                       const VkShadingRatePaletteNV* pShadingRatePalettes) {
    dispatch_table_.CmdSetViewportShadingRatePaletteNV(handle_, firstViewport, viewportCount, pShadingRatePalettes);
}
void CommandBuffer::CmdSetCoarseSampleOrderNV(VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount,
                                              const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) {
    dispatch_table_.CmdSetCoarseSampleOrderNV(handle_, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
}
void CommandBuffer::CmdBuildAccelerationStructureNV(const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData,
                                                    VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst,
                                                    VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
    dispatch_table_.CmdBuildAccelerationStructureNV(handle_, pInfo, instanceData, instanceOffset, update, dst, src, scratch,
                                                    scratchOffset);
}
void CommandBuffer::CmdCopyAccelerationStructureNV(VkAccelerationStructureNV dst, VkAccelerationStructureNV src,
                                                   VkCopyAccelerationStructureModeKHR mode) {
    dispatch_table_.CmdCopyAccelerationStructureNV(handle_, dst, src, mode);
}
void CommandBuffer::CmdTraceRaysNV(VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset,
                                   VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset,
                                   VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer,
                                   VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride,
                                   VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset,
                                   VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) {
    dispatch_table_.CmdTraceRaysNV(handle_, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer,
                                   missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer,
                                   hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer,
                                   callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
}
void CommandBuffer::CmdWriteAccelerationStructuresPropertiesNV(uint32_t accelerationStructureCount,
                                                               const VkAccelerationStructureNV* pAccelerationStructures,
                                                               VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
    dispatch_table_.CmdWriteAccelerationStructuresPropertiesNV(handle_, accelerationStructureCount, pAccelerationStructures,
                                                               queryType, queryPool, firstQuery);
}
void CommandBuffer::CmdWriteBufferMarkerAMD(VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                            uint32_t marker) {
    dispatch_table_.CmdWriteBufferMarkerAMD(handle_, pipelineStage, dstBuffer, dstOffset, marker);
}
void CommandBuffer::CmdWriteBufferMarker2AMD(VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                             uint32_t marker) {
    dispatch_table_.CmdWriteBufferMarker2AMD(handle_, stage, dstBuffer, dstOffset, marker);
}
void CommandBuffer::CmdDrawMeshTasksNV(uint32_t taskCount, uint32_t firstTask) {
    dispatch_table_.CmdDrawMeshTasksNV(handle_, taskCount, firstTask);
}
void CommandBuffer::CmdDrawMeshTasksIndirectNV(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    dispatch_table_.CmdDrawMeshTasksIndirectNV(handle_, buffer, offset, drawCount, stride);
}
void CommandBuffer::CmdDrawMeshTasksIndirectCountNV(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                                    VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawMeshTasksIndirectCountNV(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}
void CommandBuffer::CmdSetExclusiveScissorEnableNV(uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount,
                                                   const VkBool32* pExclusiveScissorEnables) {
    dispatch_table_.CmdSetExclusiveScissorEnableNV(handle_, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissorEnables);
}
void CommandBuffer::CmdSetExclusiveScissorNV(uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount,
                                             const VkRect2D* pExclusiveScissors) {
    dispatch_table_.CmdSetExclusiveScissorNV(handle_, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
}
void CommandBuffer::CmdSetCheckpointNV(const void* pCheckpointMarker) {
    dispatch_table_.CmdSetCheckpointNV(handle_, pCheckpointMarker);
}
VkResult CommandBuffer::CmdSetPerformanceMarkerINTEL(const VkPerformanceMarkerInfoINTEL* pMarkerInfo) {
    return dispatch_table_.CmdSetPerformanceMarkerINTEL(handle_, pMarkerInfo);
}
VkResult CommandBuffer::CmdSetPerformanceStreamMarkerINTEL(const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) {
    return dispatch_table_.CmdSetPerformanceStreamMarkerINTEL(handle_, pMarkerInfo);
}
VkResult CommandBuffer::CmdSetPerformanceOverrideINTEL(const VkPerformanceOverrideInfoINTEL* pOverrideInfo) {
    return dispatch_table_.CmdSetPerformanceOverrideINTEL(handle_, pOverrideInfo);
}
void CommandBuffer::CmdSetLineStippleEXT(uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
    dispatch_table_.CmdSetLineStippleEXT(handle_, lineStippleFactor, lineStipplePattern);
}
void CommandBuffer::CmdSetCullModeEXT(VkCullModeFlags cullMode) { dispatch_table_.CmdSetCullModeEXT(handle_, cullMode); }
void CommandBuffer::CmdSetFrontFaceEXT(VkFrontFace frontFace) { dispatch_table_.CmdSetFrontFaceEXT(handle_, frontFace); }
void CommandBuffer::CmdSetPrimitiveTopologyEXT(VkPrimitiveTopology primitiveTopology) {
    dispatch_table_.CmdSetPrimitiveTopologyEXT(handle_, primitiveTopology);
}
void CommandBuffer::CmdSetViewportWithCountEXT(uint32_t viewportCount, const VkViewport* pViewports) {
    dispatch_table_.CmdSetViewportWithCountEXT(handle_, viewportCount, pViewports);
}
void CommandBuffer::CmdSetScissorWithCountEXT(uint32_t scissorCount, const VkRect2D* pScissors) {
    dispatch_table_.CmdSetScissorWithCountEXT(handle_, scissorCount, pScissors);
}
void CommandBuffer::CmdBindVertexBuffers2EXT(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers,
                                             const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                             const VkDeviceSize* pStrides) {
    dispatch_table_.CmdBindVertexBuffers2EXT(handle_, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}
void CommandBuffer::CmdSetDepthTestEnableEXT(VkBool32 depthTestEnable) {
    dispatch_table_.CmdSetDepthTestEnableEXT(handle_, depthTestEnable);
}
void CommandBuffer::CmdSetDepthWriteEnableEXT(VkBool32 depthWriteEnable) {
    dispatch_table_.CmdSetDepthWriteEnableEXT(handle_, depthWriteEnable);
}
void CommandBuffer::CmdSetDepthCompareOpEXT(VkCompareOp depthCompareOp) {
    dispatch_table_.CmdSetDepthCompareOpEXT(handle_, depthCompareOp);
}
void CommandBuffer::CmdSetDepthBoundsTestEnableEXT(VkBool32 depthBoundsTestEnable) {
    dispatch_table_.CmdSetDepthBoundsTestEnableEXT(handle_, depthBoundsTestEnable);
}
void CommandBuffer::CmdSetStencilTestEnableEXT(VkBool32 stencilTestEnable) {
    dispatch_table_.CmdSetStencilTestEnableEXT(handle_, stencilTestEnable);
}
void CommandBuffer::CmdSetStencilOpEXT(VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp,
                                       VkCompareOp compareOp) {
    dispatch_table_.CmdSetStencilOpEXT(handle_, faceMask, failOp, passOp, depthFailOp, compareOp);
}
void CommandBuffer::CmdPreprocessGeneratedCommandsNV(const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
    dispatch_table_.CmdPreprocessGeneratedCommandsNV(handle_, pGeneratedCommandsInfo);
}
void CommandBuffer::CmdExecuteGeneratedCommandsNV(VkBool32 isPreprocessed,
                                                  const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
    dispatch_table_.CmdExecuteGeneratedCommandsNV(handle_, isPreprocessed, pGeneratedCommandsInfo);
}
void CommandBuffer::CmdBindPipelineShaderGroupNV(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) {
    dispatch_table_.CmdBindPipelineShaderGroupNV(handle_, pipelineBindPoint, pipeline, groupIndex);
}
void CommandBuffer::CmdSetDepthBias2EXT(const VkDepthBiasInfoEXT* pDepthBiasInfo) {
    dispatch_table_.CmdSetDepthBias2EXT(handle_, pDepthBiasInfo);
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
void CommandBuffer::CmdCudaLaunchKernelNV(const VkCudaLaunchInfoNV* pLaunchInfo) {
    dispatch_table_.CmdCudaLaunchKernelNV(handle_, pLaunchInfo);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
void CommandBuffer::CmdDispatchTileQCOM(const VkDispatchTileInfoQCOM* pDispatchTileInfo) {
    dispatch_table_.CmdDispatchTileQCOM(handle_, pDispatchTileInfo);
}
void CommandBuffer::CmdBeginPerTileExecutionQCOM(const VkPerTileBeginInfoQCOM* pPerTileBeginInfo) {
    dispatch_table_.CmdBeginPerTileExecutionQCOM(handle_, pPerTileBeginInfo);
}
void CommandBuffer::CmdEndPerTileExecutionQCOM(const VkPerTileEndInfoQCOM* pPerTileEndInfo) {
    dispatch_table_.CmdEndPerTileExecutionQCOM(handle_, pPerTileEndInfo);
}
void CommandBuffer::CmdBindDescriptorBuffersEXT(uint32_t bufferCount, const VkDescriptorBufferBindingInfoEXT* pBindingInfos) {
    dispatch_table_.CmdBindDescriptorBuffersEXT(handle_, bufferCount, pBindingInfos);
}
void CommandBuffer::CmdSetDescriptorBufferOffsetsEXT(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                                     uint32_t firstSet, uint32_t setCount, const uint32_t* pBufferIndices,
                                                     const VkDeviceSize* pOffsets) {
    dispatch_table_.CmdSetDescriptorBufferOffsetsEXT(handle_, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices,
                                                     pOffsets);
}
void CommandBuffer::CmdBindDescriptorBufferEmbeddedSamplersEXT(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                                               uint32_t set) {
    dispatch_table_.CmdBindDescriptorBufferEmbeddedSamplersEXT(handle_, pipelineBindPoint, layout, set);
}
void CommandBuffer::CmdSetFragmentShadingRateEnumNV(VkFragmentShadingRateNV shadingRate,
                                                    const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
    dispatch_table_.CmdSetFragmentShadingRateEnumNV(handle_, shadingRate, combinerOps);
}
void CommandBuffer::CmdSetVertexInputEXT(uint32_t vertexBindingDescriptionCount,
                                         const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
                                         uint32_t vertexAttributeDescriptionCount,
                                         const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) {
    dispatch_table_.CmdSetVertexInputEXT(handle_, vertexBindingDescriptionCount, pVertexBindingDescriptions,
                                         vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
}
void CommandBuffer::CmdSubpassShadingHUAWEI() { dispatch_table_.CmdSubpassShadingHUAWEI(handle_); }
void CommandBuffer::CmdBindInvocationMaskHUAWEI(VkImageView imageView, VkImageLayout imageLayout) {
    dispatch_table_.CmdBindInvocationMaskHUAWEI(handle_, imageView, imageLayout);
}
void CommandBuffer::CmdSetPatchControlPointsEXT(uint32_t patchControlPoints) {
    dispatch_table_.CmdSetPatchControlPointsEXT(handle_, patchControlPoints);
}
void CommandBuffer::CmdSetRasterizerDiscardEnableEXT(VkBool32 rasterizerDiscardEnable) {
    dispatch_table_.CmdSetRasterizerDiscardEnableEXT(handle_, rasterizerDiscardEnable);
}
void CommandBuffer::CmdSetDepthBiasEnableEXT(VkBool32 depthBiasEnable) {
    dispatch_table_.CmdSetDepthBiasEnableEXT(handle_, depthBiasEnable);
}
void CommandBuffer::CmdSetLogicOpEXT(VkLogicOp logicOp) { dispatch_table_.CmdSetLogicOpEXT(handle_, logicOp); }
void CommandBuffer::CmdSetPrimitiveRestartEnableEXT(VkBool32 primitiveRestartEnable) {
    dispatch_table_.CmdSetPrimitiveRestartEnableEXT(handle_, primitiveRestartEnable);
}
void CommandBuffer::CmdSetColorWriteEnableEXT(uint32_t attachmentCount, const VkBool32* pColorWriteEnables) {
    dispatch_table_.CmdSetColorWriteEnableEXT(handle_, attachmentCount, pColorWriteEnables);
}
void CommandBuffer::CmdDrawMultiEXT(uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo, uint32_t instanceCount,
                                    uint32_t firstInstance, uint32_t stride) {
    dispatch_table_.CmdDrawMultiEXT(handle_, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
}
void CommandBuffer::CmdDrawMultiIndexedEXT(uint32_t drawCount, const VkMultiDrawIndexedInfoEXT* pIndexInfo, uint32_t instanceCount,
                                           uint32_t firstInstance, uint32_t stride, const int32_t* pVertexOffset) {
    dispatch_table_.CmdDrawMultiIndexedEXT(handle_, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
}
void CommandBuffer::CmdBuildMicromapsEXT(uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos) {
    dispatch_table_.CmdBuildMicromapsEXT(handle_, infoCount, pInfos);
}
void CommandBuffer::CmdCopyMicromapEXT(const VkCopyMicromapInfoEXT* pInfo) { dispatch_table_.CmdCopyMicromapEXT(handle_, pInfo); }
void CommandBuffer::CmdCopyMicromapToMemoryEXT(const VkCopyMicromapToMemoryInfoEXT* pInfo) {
    dispatch_table_.CmdCopyMicromapToMemoryEXT(handle_, pInfo);
}
void CommandBuffer::CmdCopyMemoryToMicromapEXT(const VkCopyMemoryToMicromapInfoEXT* pInfo) {
    dispatch_table_.CmdCopyMemoryToMicromapEXT(handle_, pInfo);
}
void CommandBuffer::CmdWriteMicromapsPropertiesEXT(uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                                   VkQueryPool queryPool, uint32_t firstQuery) {
    dispatch_table_.CmdWriteMicromapsPropertiesEXT(handle_, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
}
void CommandBuffer::CmdDrawClusterHUAWEI(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    dispatch_table_.CmdDrawClusterHUAWEI(handle_, groupCountX, groupCountY, groupCountZ);
}
void CommandBuffer::CmdDrawClusterIndirectHUAWEI(VkBuffer buffer, VkDeviceSize offset) {
    dispatch_table_.CmdDrawClusterIndirectHUAWEI(handle_, buffer, offset);
}
void CommandBuffer::CmdCopyMemoryIndirectNV(VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride) {
    dispatch_table_.CmdCopyMemoryIndirectNV(handle_, copyBufferAddress, copyCount, stride);
}
void CommandBuffer::CmdCopyMemoryToImageIndirectNV(VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride,
                                                   VkImage dstImage, VkImageLayout dstImageLayout,
                                                   const VkImageSubresourceLayers* pImageSubresources) {
    dispatch_table_.CmdCopyMemoryToImageIndirectNV(handle_, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout,
                                                   pImageSubresources);
}
void CommandBuffer::CmdDecompressMemoryNV(uint32_t decompressRegionCount,
                                          const VkDecompressMemoryRegionNV* pDecompressMemoryRegions) {
    dispatch_table_.CmdDecompressMemoryNV(handle_, decompressRegionCount, pDecompressMemoryRegions);
}
void CommandBuffer::CmdDecompressMemoryIndirectCountNV(VkDeviceAddress indirectCommandsAddress,
                                                       VkDeviceAddress indirectCommandsCountAddress, uint32_t stride) {
    dispatch_table_.CmdDecompressMemoryIndirectCountNV(handle_, indirectCommandsAddress, indirectCommandsCountAddress, stride);
}
void CommandBuffer::CmdUpdatePipelineIndirectBufferNV(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
    dispatch_table_.CmdUpdatePipelineIndirectBufferNV(handle_, pipelineBindPoint, pipeline);
}
void CommandBuffer::CmdSetDepthClampEnableEXT(VkBool32 depthClampEnable) {
    dispatch_table_.CmdSetDepthClampEnableEXT(handle_, depthClampEnable);
}
void CommandBuffer::CmdSetPolygonModeEXT(VkPolygonMode polygonMode) { dispatch_table_.CmdSetPolygonModeEXT(handle_, polygonMode); }
void CommandBuffer::CmdSetRasterizationSamplesEXT(VkSampleCountFlagBits rasterizationSamples) {
    dispatch_table_.CmdSetRasterizationSamplesEXT(handle_, rasterizationSamples);
}
void CommandBuffer::CmdSetSampleMaskEXT(VkSampleCountFlagBits samples, const VkSampleMask* pSampleMask) {
    dispatch_table_.CmdSetSampleMaskEXT(handle_, samples, pSampleMask);
}
void CommandBuffer::CmdSetAlphaToCoverageEnableEXT(VkBool32 alphaToCoverageEnable) {
    dispatch_table_.CmdSetAlphaToCoverageEnableEXT(handle_, alphaToCoverageEnable);
}
void CommandBuffer::CmdSetAlphaToOneEnableEXT(VkBool32 alphaToOneEnable) {
    dispatch_table_.CmdSetAlphaToOneEnableEXT(handle_, alphaToOneEnable);
}
void CommandBuffer::CmdSetLogicOpEnableEXT(VkBool32 logicOpEnable) {
    dispatch_table_.CmdSetLogicOpEnableEXT(handle_, logicOpEnable);
}
void CommandBuffer::CmdSetColorBlendEnableEXT(uint32_t firstAttachment, uint32_t attachmentCount,
                                              const VkBool32* pColorBlendEnables) {
    dispatch_table_.CmdSetColorBlendEnableEXT(handle_, firstAttachment, attachmentCount, pColorBlendEnables);
}
void CommandBuffer::CmdSetColorBlendEquationEXT(uint32_t firstAttachment, uint32_t attachmentCount,
                                                const VkColorBlendEquationEXT* pColorBlendEquations) {
    dispatch_table_.CmdSetColorBlendEquationEXT(handle_, firstAttachment, attachmentCount, pColorBlendEquations);
}
void CommandBuffer::CmdSetColorWriteMaskEXT(uint32_t firstAttachment, uint32_t attachmentCount,
                                            const VkColorComponentFlags* pColorWriteMasks) {
    dispatch_table_.CmdSetColorWriteMaskEXT(handle_, firstAttachment, attachmentCount, pColorWriteMasks);
}
void CommandBuffer::CmdSetTessellationDomainOriginEXT(VkTessellationDomainOrigin domainOrigin) {
    dispatch_table_.CmdSetTessellationDomainOriginEXT(handle_, domainOrigin);
}
void CommandBuffer::CmdSetRasterizationStreamEXT(uint32_t rasterizationStream) {
    dispatch_table_.CmdSetRasterizationStreamEXT(handle_, rasterizationStream);
}
void CommandBuffer::CmdSetConservativeRasterizationModeEXT(VkConservativeRasterizationModeEXT conservativeRasterizationMode) {
    dispatch_table_.CmdSetConservativeRasterizationModeEXT(handle_, conservativeRasterizationMode);
}
void CommandBuffer::CmdSetExtraPrimitiveOverestimationSizeEXT(float extraPrimitiveOverestimationSize) {
    dispatch_table_.CmdSetExtraPrimitiveOverestimationSizeEXT(handle_, extraPrimitiveOverestimationSize);
}
void CommandBuffer::CmdSetDepthClipEnableEXT(VkBool32 depthClipEnable) {
    dispatch_table_.CmdSetDepthClipEnableEXT(handle_, depthClipEnable);
}
void CommandBuffer::CmdSetSampleLocationsEnableEXT(VkBool32 sampleLocationsEnable) {
    dispatch_table_.CmdSetSampleLocationsEnableEXT(handle_, sampleLocationsEnable);
}
void CommandBuffer::CmdSetColorBlendAdvancedEXT(uint32_t firstAttachment, uint32_t attachmentCount,
                                                const VkColorBlendAdvancedEXT* pColorBlendAdvanced) {
    dispatch_table_.CmdSetColorBlendAdvancedEXT(handle_, firstAttachment, attachmentCount, pColorBlendAdvanced);
}
void CommandBuffer::CmdSetProvokingVertexModeEXT(VkProvokingVertexModeEXT provokingVertexMode) {
    dispatch_table_.CmdSetProvokingVertexModeEXT(handle_, provokingVertexMode);
}
void CommandBuffer::CmdSetLineRasterizationModeEXT(VkLineRasterizationModeEXT lineRasterizationMode) {
    dispatch_table_.CmdSetLineRasterizationModeEXT(handle_, lineRasterizationMode);
}
void CommandBuffer::CmdSetLineStippleEnableEXT(VkBool32 stippledLineEnable) {
    dispatch_table_.CmdSetLineStippleEnableEXT(handle_, stippledLineEnable);
}
void CommandBuffer::CmdSetDepthClipNegativeOneToOneEXT(VkBool32 negativeOneToOne) {
    dispatch_table_.CmdSetDepthClipNegativeOneToOneEXT(handle_, negativeOneToOne);
}
void CommandBuffer::CmdSetViewportWScalingEnableNV(VkBool32 viewportWScalingEnable) {
    dispatch_table_.CmdSetViewportWScalingEnableNV(handle_, viewportWScalingEnable);
}
void CommandBuffer::CmdSetViewportSwizzleNV(uint32_t firstViewport, uint32_t viewportCount,
                                            const VkViewportSwizzleNV* pViewportSwizzles) {
    dispatch_table_.CmdSetViewportSwizzleNV(handle_, firstViewport, viewportCount, pViewportSwizzles);
}
void CommandBuffer::CmdSetCoverageToColorEnableNV(VkBool32 coverageToColorEnable) {
    dispatch_table_.CmdSetCoverageToColorEnableNV(handle_, coverageToColorEnable);
}
void CommandBuffer::CmdSetCoverageToColorLocationNV(uint32_t coverageToColorLocation) {
    dispatch_table_.CmdSetCoverageToColorLocationNV(handle_, coverageToColorLocation);
}
void CommandBuffer::CmdSetCoverageModulationModeNV(VkCoverageModulationModeNV coverageModulationMode) {
    dispatch_table_.CmdSetCoverageModulationModeNV(handle_, coverageModulationMode);
}
void CommandBuffer::CmdSetCoverageModulationTableEnableNV(VkBool32 coverageModulationTableEnable) {
    dispatch_table_.CmdSetCoverageModulationTableEnableNV(handle_, coverageModulationTableEnable);
}
void CommandBuffer::CmdSetCoverageModulationTableNV(uint32_t coverageModulationTableCount, const float* pCoverageModulationTable) {
    dispatch_table_.CmdSetCoverageModulationTableNV(handle_, coverageModulationTableCount, pCoverageModulationTable);
}
void CommandBuffer::CmdSetShadingRateImageEnableNV(VkBool32 shadingRateImageEnable) {
    dispatch_table_.CmdSetShadingRateImageEnableNV(handle_, shadingRateImageEnable);
}
void CommandBuffer::CmdSetRepresentativeFragmentTestEnableNV(VkBool32 representativeFragmentTestEnable) {
    dispatch_table_.CmdSetRepresentativeFragmentTestEnableNV(handle_, representativeFragmentTestEnable);
}
void CommandBuffer::CmdSetCoverageReductionModeNV(VkCoverageReductionModeNV coverageReductionMode) {
    dispatch_table_.CmdSetCoverageReductionModeNV(handle_, coverageReductionMode);
}
void CommandBuffer::CmdCopyTensorARM(const VkCopyTensorInfoARM* pCopyTensorInfo) {
    dispatch_table_.CmdCopyTensorARM(handle_, pCopyTensorInfo);
}
void CommandBuffer::CmdOpticalFlowExecuteNV(VkOpticalFlowSessionNV session, const VkOpticalFlowExecuteInfoNV* pExecuteInfo) {
    dispatch_table_.CmdOpticalFlowExecuteNV(handle_, session, pExecuteInfo);
}
void CommandBuffer::CmdBindShadersEXT(uint32_t stageCount, const VkShaderStageFlagBits* pStages, const VkShaderEXT* pShaders) {
    dispatch_table_.CmdBindShadersEXT(handle_, stageCount, pStages, pShaders);
}
void CommandBuffer::CmdSetDepthClampRangeEXT(VkDepthClampModeEXT depthClampMode, const VkDepthClampRangeEXT* pDepthClampRange) {
    dispatch_table_.CmdSetDepthClampRangeEXT(handle_, depthClampMode, pDepthClampRange);
}
void CommandBuffer::CmdConvertCooperativeVectorMatrixNV(uint32_t infoCount, const VkConvertCooperativeVectorMatrixInfoNV* pInfos) {
    dispatch_table_.CmdConvertCooperativeVectorMatrixNV(handle_, infoCount, pInfos);
}
void CommandBuffer::CmdDispatchDataGraphARM(VkDataGraphPipelineSessionARM session,
                                            const VkDataGraphPipelineDispatchInfoARM* pInfo) {
    dispatch_table_.CmdDispatchDataGraphARM(handle_, session, pInfo);
}
void CommandBuffer::CmdSetAttachmentFeedbackLoopEnableEXT(VkImageAspectFlags aspectMask) {
    dispatch_table_.CmdSetAttachmentFeedbackLoopEnableEXT(handle_, aspectMask);
}
void CommandBuffer::CmdBindTileMemoryQCOM(const VkTileMemoryBindInfoQCOM* pTileMemoryBindInfo) {
    dispatch_table_.CmdBindTileMemoryQCOM(handle_, pTileMemoryBindInfo);
}
void CommandBuffer::CmdBuildClusterAccelerationStructureIndirectNV(
    const VkClusterAccelerationStructureCommandsInfoNV* pCommandInfos) {
    dispatch_table_.CmdBuildClusterAccelerationStructureIndirectNV(handle_, pCommandInfos);
}
void CommandBuffer::CmdBuildPartitionedAccelerationStructuresNV(const VkBuildPartitionedAccelerationStructureInfoNV* pBuildInfo) {
    dispatch_table_.CmdBuildPartitionedAccelerationStructuresNV(handle_, pBuildInfo);
}
void CommandBuffer::CmdPreprocessGeneratedCommandsEXT(const VkGeneratedCommandsInfoEXT* pGeneratedCommandsInfo,
                                                      VkCommandBuffer stateCommandBuffer) {
    dispatch_table_.CmdPreprocessGeneratedCommandsEXT(handle_, pGeneratedCommandsInfo, stateCommandBuffer);
}
void CommandBuffer::CmdExecuteGeneratedCommandsEXT(VkBool32 isPreprocessed,
                                                   const VkGeneratedCommandsInfoEXT* pGeneratedCommandsInfo) {
    dispatch_table_.CmdExecuteGeneratedCommandsEXT(handle_, isPreprocessed, pGeneratedCommandsInfo);
}
void CommandBuffer::CmdEndRendering2EXT(const VkRenderingEndInfoEXT* pRenderingEndInfo) {
    dispatch_table_.CmdEndRendering2EXT(handle_, pRenderingEndInfo);
}
void CommandBuffer::CmdBuildAccelerationStructuresKHR(uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                                      const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
    dispatch_table_.CmdBuildAccelerationStructuresKHR(handle_, infoCount, pInfos, ppBuildRangeInfos);
}
void CommandBuffer::CmdBuildAccelerationStructuresIndirectKHR(uint32_t infoCount,
                                                              const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                                              const VkDeviceAddress* pIndirectDeviceAddresses,
                                                              const uint32_t* pIndirectStrides,
                                                              const uint32_t* const* ppMaxPrimitiveCounts) {
    dispatch_table_.CmdBuildAccelerationStructuresIndirectKHR(handle_, infoCount, pInfos, pIndirectDeviceAddresses,
                                                              pIndirectStrides, ppMaxPrimitiveCounts);
}
void CommandBuffer::CmdCopyAccelerationStructureKHR(const VkCopyAccelerationStructureInfoKHR* pInfo) {
    dispatch_table_.CmdCopyAccelerationStructureKHR(handle_, pInfo);
}
void CommandBuffer::CmdCopyAccelerationStructureToMemoryKHR(const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
    dispatch_table_.CmdCopyAccelerationStructureToMemoryKHR(handle_, pInfo);
}
void CommandBuffer::CmdCopyMemoryToAccelerationStructureKHR(const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
    dispatch_table_.CmdCopyMemoryToAccelerationStructureKHR(handle_, pInfo);
}
void CommandBuffer::CmdWriteAccelerationStructuresPropertiesKHR(uint32_t accelerationStructureCount,
                                                                const VkAccelerationStructureKHR* pAccelerationStructures,
                                                                VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
    dispatch_table_.CmdWriteAccelerationStructuresPropertiesKHR(handle_, accelerationStructureCount, pAccelerationStructures,
                                                                queryType, queryPool, firstQuery);
}
void CommandBuffer::CmdTraceRaysKHR(const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                                    const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                                    const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                                    const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width,
                                    uint32_t height, uint32_t depth) {
    dispatch_table_.CmdTraceRaysKHR(handle_, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable,
                                    pCallableShaderBindingTable, width, height, depth);
}
void CommandBuffer::CmdTraceRaysIndirectKHR(const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                                            const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                                            const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                                            const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
                                            VkDeviceAddress indirectDeviceAddress) {
    dispatch_table_.CmdTraceRaysIndirectKHR(handle_, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable,
                                            pCallableShaderBindingTable, indirectDeviceAddress);
}
void CommandBuffer::CmdSetRayTracingPipelineStackSizeKHR(uint32_t pipelineStackSize) {
    dispatch_table_.CmdSetRayTracingPipelineStackSizeKHR(handle_, pipelineStackSize);
}
void CommandBuffer::CmdDrawMeshTasksEXT(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    dispatch_table_.CmdDrawMeshTasksEXT(handle_, groupCountX, groupCountY, groupCountZ);
}
void CommandBuffer::CmdDrawMeshTasksIndirectEXT(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    dispatch_table_.CmdDrawMeshTasksIndirectEXT(handle_, buffer, offset, drawCount, stride);
}
void CommandBuffer::CmdDrawMeshTasksIndirectCountEXT(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    dispatch_table_.CmdDrawMeshTasksIndirectCountEXT(handle_, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

}  // namespace vk

// NOLINTEND
