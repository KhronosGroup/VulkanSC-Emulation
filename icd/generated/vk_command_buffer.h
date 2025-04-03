// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "vk_dispatch_table.h"
#include "icd_fault_handler.h"

namespace vk {

class CommandBuffer {
  public:
    CommandBuffer(VkCommandBuffer handle, const DispatchTable& dispatch_table, icd::FaultHandler& fault_handler)
        : handle_(handle), dispatch_table_(dispatch_table), fault_handler_(fault_handler) {}
    VkResult BeginCommandBuffer(const VkCommandBufferBeginInfo* pBeginInfo);
    VkResult EndCommandBuffer();
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
    void CmdPushDescriptorSetWithTemplate(VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout,
                                          uint32_t set, const void* pData);
    void CmdSetRenderingAttachmentLocations(const VkRenderingAttachmentLocationInfo* pLocationInfo);
    void CmdSetRenderingInputAttachmentIndices(const VkRenderingInputAttachmentIndexInfo* pInputAttachmentIndexInfo);
    void CmdBindDescriptorSets2(const VkBindDescriptorSetsInfo* pBindDescriptorSetsInfo);
    void CmdPushConstants2(const VkPushConstantsInfo* pPushConstantsInfo);
    void CmdPushDescriptorSet2(const VkPushDescriptorSetInfo* pPushDescriptorSetInfo);
    void CmdPushDescriptorSetWithTemplate2(const VkPushDescriptorSetWithTemplateInfo* pPushDescriptorSetWithTemplateInfo);
    void CmdBeginVideoCodingKHR(const VkVideoBeginCodingInfoKHR* pBeginInfo);
    void CmdEndVideoCodingKHR(const VkVideoEndCodingInfoKHR* pEndCodingInfo);
    void CmdControlVideoCodingKHR(const VkVideoCodingControlInfoKHR* pCodingControlInfo);
    void CmdDecodeVideoKHR(const VkVideoDecodeInfoKHR* pDecodeInfo);
    void CmdSetFragmentShadingRateKHR(const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
    void CmdEncodeVideoKHR(const VkVideoEncodeInfoKHR* pEncodeInfo);
    void CmdTraceRaysIndirect2KHR(VkDeviceAddress indirectDeviceAddress);
    void CmdSetDescriptorBufferOffsets2EXT(const VkSetDescriptorBufferOffsetsInfoEXT* pSetDescriptorBufferOffsetsInfo);
    void CmdBindDescriptorBufferEmbeddedSamplers2EXT(
        const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* pBindDescriptorBufferEmbeddedSamplersInfo);
    void CmdDebugMarkerBeginEXT(const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
    void CmdDebugMarkerEndEXT();
    void CmdDebugMarkerInsertEXT(const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
    void CmdBindTransformFeedbackBuffersEXT(uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers,
                                            const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes);
    void CmdBeginTransformFeedbackEXT(uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers,
                                      const VkDeviceSize* pCounterBufferOffsets);
    void CmdEndTransformFeedbackEXT(uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers,
                                    const VkDeviceSize* pCounterBufferOffsets);
    void CmdBeginQueryIndexedEXT(VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index);
    void CmdEndQueryIndexedEXT(VkQueryPool queryPool, uint32_t query, uint32_t index);
    void CmdDrawIndirectByteCountEXT(uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer,
                                     VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride);
    void CmdCuLaunchKernelNVX(const VkCuLaunchInfoNVX* pLaunchInfo);
    void CmdBeginConditionalRenderingEXT(const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin);
    void CmdEndConditionalRenderingEXT();
    void CmdSetViewportWScalingNV(uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings);
    void CmdSetDiscardRectangleEXT(uint32_t firstDiscardRectangle, uint32_t discardRectangleCount,
                                   const VkRect2D* pDiscardRectangles);
    void CmdSetDiscardRectangleEnableEXT(VkBool32 discardRectangleEnable);
    void CmdSetDiscardRectangleModeEXT(VkDiscardRectangleModeEXT discardRectangleMode);
    void CmdBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void CmdEndDebugUtilsLabelEXT();
    void CmdInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
#ifdef VK_ENABLE_BETA_EXTENSIONS
    void CmdInitializeGraphScratchMemoryAMDX(VkPipeline executionGraph, VkDeviceAddress scratch, VkDeviceSize scratchSize);
    void CmdDispatchGraphAMDX(VkDeviceAddress scratch, VkDeviceSize scratchSize, const VkDispatchGraphCountInfoAMDX* pCountInfo);
    void CmdDispatchGraphIndirectAMDX(VkDeviceAddress scratch, VkDeviceSize scratchSize,
                                      const VkDispatchGraphCountInfoAMDX* pCountInfo);
    void CmdDispatchGraphIndirectCountAMDX(VkDeviceAddress scratch, VkDeviceSize scratchSize, VkDeviceAddress countInfo);
#endif  // VK_ENABLE_BETA_EXTENSIONS
    void CmdSetSampleLocationsEXT(const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
    void CmdBindShadingRateImageNV(VkImageView imageView, VkImageLayout imageLayout);
    void CmdSetViewportShadingRatePaletteNV(uint32_t firstViewport, uint32_t viewportCount,
                                            const VkShadingRatePaletteNV* pShadingRatePalettes);
    void CmdSetCoarseSampleOrderNV(VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount,
                                   const VkCoarseSampleOrderCustomNV* pCustomSampleOrders);
    void CmdBuildAccelerationStructureNV(const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData,
                                         VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst,
                                         VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset);
    void CmdCopyAccelerationStructureNV(VkAccelerationStructureNV dst, VkAccelerationStructureNV src,
                                        VkCopyAccelerationStructureModeKHR mode);
    void CmdTraceRaysNV(VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset,
                        VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset,
                        VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer,
                        VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride,
                        VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset,
                        VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth);
    void CmdWriteAccelerationStructuresPropertiesNV(uint32_t accelerationStructureCount,
                                                    const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType,
                                                    VkQueryPool queryPool, uint32_t firstQuery);
    void CmdWriteBufferMarkerAMD(VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                 uint32_t marker);
    void CmdWriteBufferMarker2AMD(VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
    void CmdDrawMeshTasksNV(uint32_t taskCount, uint32_t firstTask);
    void CmdDrawMeshTasksIndirectNV(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
    void CmdDrawMeshTasksIndirectCountNV(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                         uint32_t maxDrawCount, uint32_t stride);
    void CmdSetExclusiveScissorEnableNV(uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount,
                                        const VkBool32* pExclusiveScissorEnables);
    void CmdSetExclusiveScissorNV(uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount,
                                  const VkRect2D* pExclusiveScissors);
    void CmdSetCheckpointNV(const void* pCheckpointMarker);
    VkResult CmdSetPerformanceMarkerINTEL(const VkPerformanceMarkerInfoINTEL* pMarkerInfo);
    VkResult CmdSetPerformanceStreamMarkerINTEL(const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo);
    VkResult CmdSetPerformanceOverrideINTEL(const VkPerformanceOverrideInfoINTEL* pOverrideInfo);
    void CmdPreprocessGeneratedCommandsNV(const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
    void CmdExecuteGeneratedCommandsNV(VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
    void CmdBindPipelineShaderGroupNV(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex);
    void CmdSetDepthBias2EXT(const VkDepthBiasInfoEXT* pDepthBiasInfo);
#ifdef VK_ENABLE_BETA_EXTENSIONS
    void CmdCudaLaunchKernelNV(const VkCudaLaunchInfoNV* pLaunchInfo);
#endif  // VK_ENABLE_BETA_EXTENSIONS
    void CmdBindDescriptorBuffersEXT(uint32_t bufferCount, const VkDescriptorBufferBindingInfoEXT* pBindingInfos);
    void CmdSetDescriptorBufferOffsetsEXT(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet,
                                          uint32_t setCount, const uint32_t* pBufferIndices, const VkDeviceSize* pOffsets);
    void CmdBindDescriptorBufferEmbeddedSamplersEXT(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set);
    void CmdSetFragmentShadingRateEnumNV(VkFragmentShadingRateNV shadingRate,
                                         const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
    void CmdSetVertexInputEXT(uint32_t vertexBindingDescriptionCount,
                              const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
                              uint32_t vertexAttributeDescriptionCount,
                              const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);
    void CmdSubpassShadingHUAWEI();
    void CmdBindInvocationMaskHUAWEI(VkImageView imageView, VkImageLayout imageLayout);
    void CmdSetPatchControlPointsEXT(uint32_t patchControlPoints);
    void CmdSetLogicOpEXT(VkLogicOp logicOp);
    void CmdSetColorWriteEnableEXT(uint32_t attachmentCount, const VkBool32* pColorWriteEnables);
    void CmdDrawMultiEXT(uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo, uint32_t instanceCount, uint32_t firstInstance,
                         uint32_t stride);
    void CmdDrawMultiIndexedEXT(uint32_t drawCount, const VkMultiDrawIndexedInfoEXT* pIndexInfo, uint32_t instanceCount,
                                uint32_t firstInstance, uint32_t stride, const int32_t* pVertexOffset);
    void CmdBuildMicromapsEXT(uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos);
    void CmdCopyMicromapEXT(const VkCopyMicromapInfoEXT* pInfo);
    void CmdCopyMicromapToMemoryEXT(const VkCopyMicromapToMemoryInfoEXT* pInfo);
    void CmdCopyMemoryToMicromapEXT(const VkCopyMemoryToMicromapInfoEXT* pInfo);
    void CmdWriteMicromapsPropertiesEXT(uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                        VkQueryPool queryPool, uint32_t firstQuery);
    void CmdDrawClusterHUAWEI(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
    void CmdDrawClusterIndirectHUAWEI(VkBuffer buffer, VkDeviceSize offset);
    void CmdCopyMemoryIndirectNV(VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride);
    void CmdCopyMemoryToImageIndirectNV(VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride, VkImage dstImage,
                                        VkImageLayout dstImageLayout, const VkImageSubresourceLayers* pImageSubresources);
    void CmdDecompressMemoryNV(uint32_t decompressRegionCount, const VkDecompressMemoryRegionNV* pDecompressMemoryRegions);
    void CmdDecompressMemoryIndirectCountNV(VkDeviceAddress indirectCommandsAddress, VkDeviceAddress indirectCommandsCountAddress,
                                            uint32_t stride);
    void CmdUpdatePipelineIndirectBufferNV(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
    void CmdSetDepthClampEnableEXT(VkBool32 depthClampEnable);
    void CmdSetPolygonModeEXT(VkPolygonMode polygonMode);
    void CmdSetRasterizationSamplesEXT(VkSampleCountFlagBits rasterizationSamples);
    void CmdSetSampleMaskEXT(VkSampleCountFlagBits samples, const VkSampleMask* pSampleMask);
    void CmdSetAlphaToCoverageEnableEXT(VkBool32 alphaToCoverageEnable);
    void CmdSetAlphaToOneEnableEXT(VkBool32 alphaToOneEnable);
    void CmdSetLogicOpEnableEXT(VkBool32 logicOpEnable);
    void CmdSetColorBlendEnableEXT(uint32_t firstAttachment, uint32_t attachmentCount, const VkBool32* pColorBlendEnables);
    void CmdSetColorBlendEquationEXT(uint32_t firstAttachment, uint32_t attachmentCount,
                                     const VkColorBlendEquationEXT* pColorBlendEquations);
    void CmdSetColorWriteMaskEXT(uint32_t firstAttachment, uint32_t attachmentCount, const VkColorComponentFlags* pColorWriteMasks);
    void CmdSetTessellationDomainOriginEXT(VkTessellationDomainOrigin domainOrigin);
    void CmdSetRasterizationStreamEXT(uint32_t rasterizationStream);
    void CmdSetConservativeRasterizationModeEXT(VkConservativeRasterizationModeEXT conservativeRasterizationMode);
    void CmdSetExtraPrimitiveOverestimationSizeEXT(float extraPrimitiveOverestimationSize);
    void CmdSetDepthClipEnableEXT(VkBool32 depthClipEnable);
    void CmdSetSampleLocationsEnableEXT(VkBool32 sampleLocationsEnable);
    void CmdSetColorBlendAdvancedEXT(uint32_t firstAttachment, uint32_t attachmentCount,
                                     const VkColorBlendAdvancedEXT* pColorBlendAdvanced);
    void CmdSetProvokingVertexModeEXT(VkProvokingVertexModeEXT provokingVertexMode);
    void CmdSetLineRasterizationModeEXT(VkLineRasterizationModeEXT lineRasterizationMode);
    void CmdSetLineStippleEnableEXT(VkBool32 stippledLineEnable);
    void CmdSetDepthClipNegativeOneToOneEXT(VkBool32 negativeOneToOne);
    void CmdSetViewportWScalingEnableNV(VkBool32 viewportWScalingEnable);
    void CmdSetViewportSwizzleNV(uint32_t firstViewport, uint32_t viewportCount, const VkViewportSwizzleNV* pViewportSwizzles);
    void CmdSetCoverageToColorEnableNV(VkBool32 coverageToColorEnable);
    void CmdSetCoverageToColorLocationNV(uint32_t coverageToColorLocation);
    void CmdSetCoverageModulationModeNV(VkCoverageModulationModeNV coverageModulationMode);
    void CmdSetCoverageModulationTableEnableNV(VkBool32 coverageModulationTableEnable);
    void CmdSetCoverageModulationTableNV(uint32_t coverageModulationTableCount, const float* pCoverageModulationTable);
    void CmdSetShadingRateImageEnableNV(VkBool32 shadingRateImageEnable);
    void CmdSetRepresentativeFragmentTestEnableNV(VkBool32 representativeFragmentTestEnable);
    void CmdSetCoverageReductionModeNV(VkCoverageReductionModeNV coverageReductionMode);
    void CmdOpticalFlowExecuteNV(VkOpticalFlowSessionNV session, const VkOpticalFlowExecuteInfoNV* pExecuteInfo);
    void CmdBindShadersEXT(uint32_t stageCount, const VkShaderStageFlagBits* pStages, const VkShaderEXT* pShaders);
    void CmdSetDepthClampRangeEXT(VkDepthClampModeEXT depthClampMode, const VkDepthClampRangeEXT* pDepthClampRange);
    void CmdConvertCooperativeVectorMatrixNV(uint32_t infoCount, const VkConvertCooperativeVectorMatrixInfoNV* pInfos);
    void CmdSetAttachmentFeedbackLoopEnableEXT(VkImageAspectFlags aspectMask);
    void CmdBuildClusterAccelerationStructureIndirectNV(const VkClusterAccelerationStructureCommandsInfoNV* pCommandInfos);
    void CmdBuildPartitionedAccelerationStructuresNV(const VkBuildPartitionedAccelerationStructureInfoNV* pBuildInfo);
    void CmdPreprocessGeneratedCommandsEXT(const VkGeneratedCommandsInfoEXT* pGeneratedCommandsInfo,
                                           VkCommandBuffer stateCommandBuffer);
    void CmdExecuteGeneratedCommandsEXT(VkBool32 isPreprocessed, const VkGeneratedCommandsInfoEXT* pGeneratedCommandsInfo);
    void CmdBuildAccelerationStructuresKHR(uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                           const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
    void CmdBuildAccelerationStructuresIndirectKHR(uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                                   const VkDeviceAddress* pIndirectDeviceAddresses,
                                                   const uint32_t* pIndirectStrides, const uint32_t* const* ppMaxPrimitiveCounts);
    void CmdCopyAccelerationStructureKHR(const VkCopyAccelerationStructureInfoKHR* pInfo);
    void CmdCopyAccelerationStructureToMemoryKHR(const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
    void CmdCopyMemoryToAccelerationStructureKHR(const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
    void CmdWriteAccelerationStructuresPropertiesKHR(uint32_t accelerationStructureCount,
                                                     const VkAccelerationStructureKHR* pAccelerationStructures,
                                                     VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
    void CmdTraceRaysKHR(const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                         const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                         const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                         const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height,
                         uint32_t depth);
    void CmdTraceRaysIndirectKHR(const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                                 const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                                 const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                                 const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
                                 VkDeviceAddress indirectDeviceAddress);
    void CmdSetRayTracingPipelineStackSizeKHR(uint32_t pipelineStackSize);
    void CmdDrawMeshTasksEXT(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
    void CmdDrawMeshTasksIndirectEXT(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
    void CmdDrawMeshTasksIndirectCountEXT(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                          VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);

    VkCommandBuffer VkHandle() const { return handle_; }
    const DispatchTable& VkDispatch() const { return dispatch_table_; }

    void ReportFault(VkFaultLevel level, VkFaultType type) { fault_handler_.ReportFault(level, type); }

  private:
    const VkCommandBuffer handle_;
    const DispatchTable& dispatch_table_;
    icd::FaultHandler& fault_handler_;
};

}  // namespace vk

// NOLINTEND
