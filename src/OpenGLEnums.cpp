#include "OpenGLEnums.hpp"

#include <iostream>



std::ostream & GL::operator<<(std::ostream & s, Error val)
{
	switch (val)
	{
		case Error::NoError: s << "NoError"; break;
		case Error::InvalidEnum: s << "InvalidEnum"; break;
		case Error::InvalidValue: s << "InvalidValue"; break;
		case Error::InvalidOperation: s << "InvalidOperation"; break;
		case Error::InvalidFramebufferOperation: s << "InvalidFramebufferOperation"; break;
		case Error::OutOfMemory: s << "OutOfMemory"; break;
		case Error::StackUnderflow: s << "StackUnderflow"; break;
		case Error::StackOverflow: s << "StackOverflow"; break;
		default: s << "Error: " << ((unsigned int)val); break;
	}
	return s;
}

std::ostream & GL::operator<<(std::ostream & s, ParameterName val)
{
	switch (val)
	{
		case ParameterName::AliasedLineWidthRange: s << "AliasedLineWidthRange"; break;
		case ParameterName::ArrayBufferBinding: s << "ArrayBufferBinding"; break;
		case ParameterName::Blend: s << "Blend"; break;
		case ParameterName::BlendColor: s << "BlendColor"; break;
		case ParameterName::BlendDstAlpha: s << "BlendDstAlpha"; break;
		case ParameterName::BlendDstRgb: s << "BlendDstRgb"; break;
		case ParameterName::BlendEquationRgb: s << "BlendEquationRgb"; break;
		case ParameterName::BlendEquationAlpha: s << "BlendEquationAlpha"; break;
		case ParameterName::BlendSrcAlpha: s << "BlendSrcAlpha"; break;
		case ParameterName::BlendSrcRgb: s << "BlendSrcRgb"; break;
		case ParameterName::ColorClearValue: s << "ColorClearValue"; break;
		case ParameterName::ColorLogicOp: s << "ColorLogicOp"; break;
		case ParameterName::ColorWritemask: s << "ColorWritemask"; break;
		case ParameterName::CompressedTextureFormats: s << "CompressedTextureFormats"; break;
		case ParameterName::MaxComputeShaderStorageBlocks: s << "MaxComputeShaderStorageBlocks"; break;
		case ParameterName::MaxCombinedShaderStorageBlocks: s << "MaxCombinedShaderStorageBlocks"; break;
		case ParameterName::MaxComputeUniformBlocks: s << "MaxComputeUniformBlocks"; break;
		case ParameterName::MaxComputeTextureImageUnits: s << "MaxComputeTextureImageUnits"; break;
		case ParameterName::MaxComputeUniformComponents: s << "MaxComputeUniformComponents"; break;
		case ParameterName::MaxComputeAtomicCounters: s << "MaxComputeAtomicCounters"; break;
		case ParameterName::MaxComputeAtomicCounterBuffers: s << "MaxComputeAtomicCounterBuffers"; break;
		case ParameterName::MaxCombinedComputeUniformComponents: s << "MaxCombinedComputeUniformComponents"; break;
		case ParameterName::MaxComputeWorkGroupInvocations: s << "MaxComputeWorkGroupInvocations"; break;
		case ParameterName::MaxComputeWorkGroupCount: s << "MaxComputeWorkGroupCount"; break;
		case ParameterName::MaxComputeWorkGroupSize: s << "MaxComputeWorkGroupSize"; break;
		case ParameterName::DispatchIndirectBufferBinding: s << "DispatchIndirectBufferBinding"; break;
		case ParameterName::MaxDebugGroupStackDepth: s << "MaxDebugGroupStackDepth"; break;
		case ParameterName::DebugGroupStackDepth: s << "DebugGroupStackDepth"; break;
		case ParameterName::ContextFlags: s << "ContextFlags"; break;
		case ParameterName::CullFace: s << "CullFace"; break;
		case ParameterName::CullFaceMode: s << "CullFaceMode"; break;
		case ParameterName::CurrentProgram: s << "CurrentProgram"; break;
		case ParameterName::DepthClearValue: s << "DepthClearValue"; break;
		case ParameterName::DepthFunc: s << "DepthFunc"; break;
		case ParameterName::DepthRange: s << "DepthRange"; break;
		case ParameterName::DepthTest: s << "DepthTest"; break;
		case ParameterName::DepthWritemask: s << "DepthWritemask"; break;
		case ParameterName::Dither: s << "Dither"; break;
		case ParameterName::Doublebuffer: s << "Doublebuffer"; break;
		case ParameterName::DrawBuffer: s << "DrawBuffer"; break;
		case ParameterName::DrawBuffer0: s << "DrawBuffer0"; break;
		case ParameterName::DrawBuffer1: s << "DrawBuffer1"; break;
		case ParameterName::DrawBuffer2: s << "DrawBuffer2"; break;
		case ParameterName::DrawBuffer3: s << "DrawBuffer3"; break;
		case ParameterName::DrawBuffer4: s << "DrawBuffer4"; break;
		case ParameterName::DrawBuffer5: s << "DrawBuffer5"; break;
		case ParameterName::DrawBuffer6: s << "DrawBuffer6"; break;
		case ParameterName::DrawBuffer7: s << "DrawBuffer7"; break;
		case ParameterName::DrawBuffer8: s << "DrawBuffer8"; break;
		case ParameterName::DrawBuffer9: s << "DrawBuffer9"; break;
		case ParameterName::DrawBuffer10: s << "DrawBuffer10"; break;
		case ParameterName::DrawBuffer11: s << "DrawBuffer11"; break;
		case ParameterName::DrawBuffer12: s << "DrawBuffer12"; break;
		case ParameterName::DrawBuffer13: s << "DrawBuffer13"; break;
		case ParameterName::DrawBuffer14: s << "DrawBuffer14"; break;
		case ParameterName::DrawBuffer15: s << "DrawBuffer15"; break;
		case ParameterName::DrawFramebufferBinding: s << "DrawFramebufferBinding"; break;
		case ParameterName::ReadFramebufferBinding: s << "ReadFramebufferBinding"; break;
		case ParameterName::ElementArrayBufferBinding: s << "ElementArrayBufferBinding"; break;
		case ParameterName::FragmentShaderDerivativeHint: s << "FragmentShaderDerivativeHint"; break;
		case ParameterName::ImplementationColorReadFormat: s << "ImplementationColorReadFormat"; break;
		case ParameterName::ImplementationColorReadType: s << "ImplementationColorReadType"; break;
		case ParameterName::LineSmooth: s << "LineSmooth"; break;
		case ParameterName::LineSmoothHint: s << "LineSmoothHint"; break;
		case ParameterName::LineWidth: s << "LineWidth"; break;
		case ParameterName::LayerProvokingVertex: s << "LayerProvokingVertex"; break;
		case ParameterName::LogicOpMode: s << "LogicOpMode"; break;
		case ParameterName::MajorVersion: s << "MajorVersion"; break;
		case ParameterName::Max3dTextureSize: s << "Max3dTextureSize"; break;
		case ParameterName::MaxArrayTextureLayers: s << "MaxArrayTextureLayers"; break;
		case ParameterName::MaxClipDistances: s << "MaxClipDistances"; break;
		case ParameterName::MaxColorTextureSamples: s << "MaxColorTextureSamples"; break;
		case ParameterName::MaxCombinedAtomicCounters: s << "MaxCombinedAtomicCounters"; break;
		case ParameterName::MaxCombinedFragmentUniformComponents: s << "MaxCombinedFragmentUniformComponents"; break;
		case ParameterName::MaxCombinedGeometryUniformComponents: s << "MaxCombinedGeometryUniformComponents"; break;
		case ParameterName::MaxCombinedTextureImageUnits: s << "MaxCombinedTextureImageUnits"; break;
		case ParameterName::MaxCombinedUniformBlocks: s << "MaxCombinedUniformBlocks"; break;
		case ParameterName::MaxCombinedVertexUniformComponents: s << "MaxCombinedVertexUniformComponents"; break;
		case ParameterName::MaxCubeMapTextureSize: s << "MaxCubeMapTextureSize"; break;
		case ParameterName::MaxDepthTextureSamples: s << "MaxDepthTextureSamples"; break;
		case ParameterName::MaxDrawBuffers: s << "MaxDrawBuffers"; break;
		case ParameterName::MaxDualSourceDrawBuffers: s << "MaxDualSourceDrawBuffers"; break;
		case ParameterName::MaxElementsIndices: s << "MaxElementsIndices"; break;
		case ParameterName::MaxElementsVertices: s << "MaxElementsVertices"; break;
		case ParameterName::MaxFragmentAtomicCounters: s << "MaxFragmentAtomicCounters"; break;
		case ParameterName::MaxFragmentShaderStorageBlocks: s << "MaxFragmentShaderStorageBlocks"; break;
		case ParameterName::MaxFragmentInputComponents: s << "MaxFragmentInputComponents"; break;
		case ParameterName::MaxFragmentUniformComponents: s << "MaxFragmentUniformComponents"; break;
		case ParameterName::MaxFragmentUniformVectors: s << "MaxFragmentUniformVectors"; break;
		case ParameterName::MaxFragmentUniformBlocks: s << "MaxFragmentUniformBlocks"; break;
		case ParameterName::MaxFramebufferWidth: s << "MaxFramebufferWidth"; break;
		case ParameterName::MaxFramebufferHeight: s << "MaxFramebufferHeight"; break;
		case ParameterName::MaxFramebufferLayers: s << "MaxFramebufferLayers"; break;
		case ParameterName::MaxFramebufferSamples: s << "MaxFramebufferSamples"; break;
		case ParameterName::MaxGeometryAtomicCounters: s << "MaxGeometryAtomicCounters"; break;
		case ParameterName::MaxGeometryShaderStorageBlocks: s << "MaxGeometryShaderStorageBlocks"; break;
		case ParameterName::MaxGeometryInputComponents: s << "MaxGeometryInputComponents"; break;
		case ParameterName::MaxGeometryOutputComponents: s << "MaxGeometryOutputComponents"; break;
		case ParameterName::MaxGeometryTextureImageUnits: s << "MaxGeometryTextureImageUnits"; break;
		case ParameterName::MaxGeometryUniformBlocks: s << "MaxGeometryUniformBlocks"; break;
		case ParameterName::MaxGeometryUniformComponents: s << "MaxGeometryUniformComponents"; break;
		case ParameterName::MaxIntegerSamples: s << "MaxIntegerSamples"; break;
		case ParameterName::MinMapBufferAlignment: s << "MinMapBufferAlignment"; break;
		case ParameterName::MaxLabelLength: s << "MaxLabelLength"; break;
		case ParameterName::MaxProgramTexelOffset: s << "MaxProgramTexelOffset"; break;
		case ParameterName::MinProgramTexelOffset: s << "MinProgramTexelOffset"; break;
		case ParameterName::MaxRectangleTextureSize: s << "MaxRectangleTextureSize"; break;
		case ParameterName::MaxRenderbufferSize: s << "MaxRenderbufferSize"; break;
		case ParameterName::MaxSampleMaskWords: s << "MaxSampleMaskWords"; break;
		case ParameterName::MaxServerWaitTimeout: s << "MaxServerWaitTimeout"; break;
		case ParameterName::MaxShaderStorageBufferBindings: s << "MaxShaderStorageBufferBindings"; break;
		case ParameterName::MaxTessControlAtomicCounters: s << "MaxTessControlAtomicCounters"; break;
		case ParameterName::MaxTessEvaluationAtomicCounters: s << "MaxTessEvaluationAtomicCounters"; break;
		case ParameterName::MaxTessControlShaderStorageBlocks: s << "MaxTessControlShaderStorageBlocks"; break;
		case ParameterName::MaxTessEvaluationShaderStorageBlocks: s << "MaxTessEvaluationShaderStorageBlocks:"; break;
		case ParameterName::MaxTextureBufferSize: s << "MaxTextureBufferSize"; break;
		case ParameterName::MaxTextureImageUnits: s << "MaxTextureImageUnits"; break;
		case ParameterName::MaxTextureLodBias: s << "MaxTextureLodBias"; break;
		case ParameterName::MaxTextureSize: s << "MaxTextureSize"; break;
		case ParameterName::MaxUniformBufferBindings: s << "MaxUniformBufferBindings"; break;
		case ParameterName::MaxUniformBlockSize: s << "MaxUniformBlockSize"; break;
		case ParameterName::MaxUniformLocations: s << "MaxUniformLocations"; break;
		//case ParameterName::MaxVaryingComponents: s << "MaxVaryingComponents"; break;
		//case ParameterName::MaxVaryingComponents: s << "MaxVaryingComponents/MaxVaryingFloats"; break;
		case ParameterName::MaxVaryingVectors: s << "MaxVaryingVectors"; break;
		//case ParameterName::MaxVaryingFloats: s << "MaxVaryingFloats"; break; //
		case ParameterName::MaxVertexAtomicCounters: s << "MaxVertexAtomicCounters"; break;
		case ParameterName::MaxVertexAttribs: s << "MaxVertexAttribs"; break;
		case ParameterName::MaxVertexShaderStorageBlocks: s << "MaxVertexShaderStorageBlocks"; break;
		case ParameterName::MaxVertexTextureImageUnits: s << "MaxVertexTextureImageUnits"; break;
		case ParameterName::MaxVertexUniformComponents: s << "MaxVertexUniformComponents"; break;
		case ParameterName::MaxVertexUniformVectors: s << "MaxVertexUniformVectors"; break;
		case ParameterName::MaxVertexOutputComponents: s << "MaxVertexOutputComponents"; break;
		case ParameterName::MaxVertexUniformBlocks: s << "MaxVertexUniformBlocks"; break;
		case ParameterName::MaxViewportDims: s << "MaxViewportDims"; break;
		case ParameterName::MaxViewports: s << "MaxViewports"; break;
		case ParameterName::MinorVersion: s << "MinorVersion"; break;
		case ParameterName::NumCompressedTextureFormats: s << "NumCompressedTextureFormats"; break;
		case ParameterName::NumExtensions: s << "NumExtensions"; break;
		case ParameterName::NumProgramBinaryFormats: s << "NumProgramBinaryFormats"; break;
		case ParameterName::NumShaderBinaryFormats: s << "NumShaderBinaryFormats"; break;
		case ParameterName::PackAlignment: s << "PackAlignment"; break;
		case ParameterName::PackImageHeight: s << "PackImageHeight"; break;
		case ParameterName::PackLsbFirst: s << "PackLsbFirst"; break;
		case ParameterName::PackRowLength: s << "PackRowLength"; break;
		case ParameterName::PackSkipImages: s << "PackSkipImages"; break;
		case ParameterName::PackSkipPixels: s << "PackSkipPixels"; break;
		case ParameterName::PackSkipRows: s << "PackSkipRows"; break;
		case ParameterName::PackSwapBytes: s << "PackSwapBytes"; break;
		case ParameterName::PixelPackBufferBinding: s << "PixelPackBufferBinding"; break;
		case ParameterName::PixelUnpackBufferBinding: s << "PixelUnpackBufferBinding"; break;
		case ParameterName::PointFadeThresholdSize: s << "PointFadeThresholdSize"; break;
		case ParameterName::PrimitiveRestartIndex: s << "PrimitiveRestartIndex"; break;
		case ParameterName::ProgramBinaryFormats: s << "ProgramBinaryFormats"; break;
		case ParameterName::ProgramPipelineBinding: s << "ProgramPipelineBinding"; break;
		case ParameterName::ProgramPointSize: s << "ProgramPointSize"; break;
		case ParameterName::ProvokingVertex: s << "ProvokingVertex"; break;
		case ParameterName::PointSize: s << "PointSize"; break;
		case ParameterName::PointSizeGranularity: s << "PointSizeGranularity"; break;
		case ParameterName::PointSizeRange: s << "PointSizeRange"; break;
		case ParameterName::PolygonOffsetFactor: s << "PolygonOffsetFactor"; break;
		case ParameterName::PolygonOffsetUnits: s << "PolygonOffsetUnits"; break;
		case ParameterName::PolygonOffsetClamp: s << "PolygonOffsetClamp"; break;
		case ParameterName::PolygonOffsetFill: s << "PolygonOffsetFill"; break;
		case ParameterName::PolygonOffsetLine: s << "PolygonOffsetLine"; break;
		case ParameterName::PolygonOffsetPoint: s << "PolygonOffsetPoint"; break;
		case ParameterName::PolygonSmooth: s << "PolygonSmooth"; break;
		case ParameterName::PolygonSmoothHint: s << "PolygonSmoothHint"; break;
		case ParameterName::ReadBuffer: s << "ReadBuffer"; break;
		case ParameterName::RenderbufferBinding: s << "RenderbufferBinding"; break;
		case ParameterName::SampleBuffers: s << "SampleBuffers"; break;
		case ParameterName::SampleCoverageValue: s << "SampleCoverageValue"; break;
		case ParameterName::SampleCoverageInvert: s << "SampleCoverageInvert"; break;
		case ParameterName::SampleMaskValue: s << "SampleMaskValue"; break;
		case ParameterName::SamplerBinding: s << "SamplerBinding"; break;
		case ParameterName::Samples: s << "Samples"; break;
		case ParameterName::ScissorBox: s << "ScissorBox"; break;
		case ParameterName::ScissorTest: s << "ScissorTest"; break;
		case ParameterName::ShaderCompiler: s << "ShaderCompiler"; break;
		case ParameterName::ShaderStorageBufferBinding: s << "ShaderStorageBufferBinding"; break;
		case ParameterName::ShaderStorageBufferOffsetAlignment: s << "ShaderStorageBufferOffsetAlignment"; break;
		case ParameterName::ShaderStorageBufferStart: s << "ShaderStorageBufferStart"; break;
		case ParameterName::ShaderStorageBufferSize: s << "ShaderStorageBufferSize"; break;
		case ParameterName::SmoothLineWidthRange: s << "SmoothLineWidthRange"; break;
		case ParameterName::SmoothLineWidthGranularity: s << "SmoothLineWidthGranularity"; break;
		case ParameterName::StencilBackFail: s << "StencilBackFail"; break;
		case ParameterName::StencilBackFunc: s << "StencilBackFunc"; break;
		case ParameterName::StencilBackPassDepthFail: s << "StencilBackPassDepthFail"; break;
		case ParameterName::StencilBackPassDepthPass: s << "StencilBackPassDepthPass"; break;
		case ParameterName::StencilBackRef: s << "StencilBackRef"; break;
		case ParameterName::StencilBackValueMask: s << "StencilBackValueMask"; break;
		case ParameterName::StencilBackWritemask: s << "StencilBackWritemask"; break;
		case ParameterName::StencilClearValue: s << "StencilClearValue"; break;
		case ParameterName::StencilFail: s << "StencilFail"; break;
		case ParameterName::StencilFunc: s << "StencilFunc"; break;
		case ParameterName::StencilPassDepthFail: s << "StencilPassDepthFail"; break;
		case ParameterName::StencilPassDepthPass: s << "StencilPassDepthPass"; break;
		case ParameterName::StencilRef: s << "StencilRef"; break;
		case ParameterName::StencilTest: s << "StencilTest"; break;
		case ParameterName::StencilValueMask: s << "StencilValueMask"; break;
		case ParameterName::StencilWritemask: s << "StencilWritemask"; break;
		case ParameterName::Stereo: s << "Stereo"; break;
		case ParameterName::SubpixelBits: s << "SubpixelBits"; break;
		case ParameterName::TextureBinding1D: s << "TextureBinding1D"; break;
		case ParameterName::TextureBinding1DArray: s << "TextureBinding1DArray"; break;
		case ParameterName::TextureBinding2D: s << "TextureBinding2D"; break;
		case ParameterName::TextureBinding2DArray: s << "TextureBinding2DArray"; break;
		case ParameterName::TextureBinding2DMultisample: s << "TextureBinding2DMultisample"; break;
		case ParameterName::TextureBinding2DMultisampleArray: s << "TextureBinding2DMultisampleArray"; break;
		case ParameterName::TextureBinding3D: s << "TextureBinding3D"; break;
		case ParameterName::TextureBindingBuffer: s << "TextureBindingBuffer"; break;
		case ParameterName::TextureBindingCubeMap: s << "TextureBindingCubeMap"; break;
		case ParameterName::TextureBindingRectangle: s << "TextureBindingRectangle"; break;
		case ParameterName::TextureCompressionHint: s << "TextureCompressionHint"; break;
		case ParameterName::TextureBufferOffsetAlignment: s << "TextureBufferOffsetAlignment"; break;
		case ParameterName::Timestamp: s << "Timestamp"; break;
		case ParameterName::TransformFeedbackBufferBinding: s << "TransformFeedbackBufferBinding"; break;
		case ParameterName::TransformFeedbackBufferStart: s << "TransformFeedbackBufferStart"; break;
		case ParameterName::TransformFeedbackBufferSize: s << "TransformFeedbackBufferSize"; break;
		case ParameterName::UniformBufferBinding: s << "UniformBufferBinding"; break;
		case ParameterName::UniformBufferOffsetAlignment: s << "UniformBufferOffsetAlignment"; break;
		case ParameterName::UniformBufferSize: s << "UniformBufferSize"; break;
		case ParameterName::UniformBufferStart: s << "UniformBufferStart"; break;
		case ParameterName::UnpackAlignment: s << "UnpackAlignment"; break;
		case ParameterName::UnpackImageHeight: s << "UnpackImageHeight"; break;
		case ParameterName::UnpackLsbFirst: s << "UnpackLsbFirst"; break;
		case ParameterName::UnpackRowLength: s << "UnpackRowLength"; break;
		case ParameterName::UnpackSkipImages: s << "UnpackSkipImages"; break;
		case ParameterName::UnpackSkipPixels: s << "UnpackSkipPixels"; break;
		case ParameterName::UnpackSkipRows: s << "UnpackSkipRows"; break;
		case ParameterName::UnpackSwapBytes: s << "UnpackSwapBytes"; break;
		case ParameterName::VertexArrayBinding: s << "VertexArrayBinding"; break;
		case ParameterName::VertexBindingDivisor: s << "VertexBindingDivisor"; break;
		case ParameterName::VertexBindingOffset: s << "VertexBindingOffset"; break;
		case ParameterName::VertexBindingStride: s << "VertexBindingStride"; break;
		case ParameterName::VertexBindingBuffer: s << "VertexBindingBuffer"; break;
		case ParameterName::MaxVertexAttribRelativeOffset: s << "MaxVertexAttribRelativeOffset"; break;
		case ParameterName::MaxVertexAttribBindings: s << "MaxVertexAttribBindings"; break;
		case ParameterName::Viewport: s << "Viewport"; break;
		case ParameterName::ViewportBoundsRange: s << "ViewportBoundsRange"; break;
		case ParameterName::ViewportIndexProvokingVertex: s << "ViewportIndexProvokingVertex"; break;
		case ParameterName::ViewportSubpixelBits: s << "ViewportSubpixelBits"; break;
		case ParameterName::MaxElementIndex: s << "MaxElementIndex"; break;
		default: s << ": " << ((unsigned int)val); break;
	}
	return s;
}

GL::ClearMask GL::operator|(ClearMask v0, ClearMask v1) { return (ClearMask)((unsigned int)v0 | (unsigned int)v1); }



std::ostream & GL::operator<<(std::ostream & s, ShaderType val)
{
	switch (val)
	{
		case ShaderType::ComputeShader: s << "ComputeShader"; break;
		case ShaderType::VertexShader: s << "VertexShader"; break;
		case ShaderType::TessControlShader: s << "TessControlShader"; break;
		case ShaderType::TessEvaluationShade: s << "TessEvaluationShade"; break;
		case ShaderType::GeometryShader: s << "GeometryShader"; break;
		case ShaderType::FragmentShader: s << "FragmentShader"; break;
		default: s << ": " << ((unsigned int)val); break;
	}
	return s;
}



std::ostream & GL::operator<<(std::ostream & s, AttributeType val)
{
	switch (val)
	{
		case AttributeType::HalfFloat: s << "HalfFloat"; break;
		case AttributeType::Float: s << "Float"; break;
		case AttributeType::Double: s << "Double"; break;
		case AttributeType::Fixed: s << "Fixed"; break;
		case AttributeType::Int2101010Rev: s << "Int2101010Rev"; break;
		case AttributeType::UnsignedInt2101010Rev: s << "UnsignedInt2101010Rev"; break;
		case AttributeType::UnsignedInt10f11f11fRev: s << "UnsignedInt10f11f11fRev"; break;
		case AttributeType::Byte: s << "Byte"; break;
		case AttributeType::UnsignedByte: s << "UnsignedByte"; break;
		case AttributeType::Short: s << "Short"; break;
		case AttributeType::UnsignedShort: s << "UnsignedShort"; break;
		case AttributeType::Int: s << "Int"; break;
		case AttributeType::UnsignedInt: s << "UnsignedInt"; break;
		default: s << "AttributeType: " << ((unsigned int)val); break;
	}
	return s;
}

std::ostream & GL::operator<<(std::ostream & s, AttributeIntType val)
{
	switch (val)
	{
		case AttributeIntType::Byte: s << "Byte"; break;
		case AttributeIntType::UnsignedByte: s << "UnsignedByte"; break;
		case AttributeIntType::Short: s << "Short"; break;
		case AttributeIntType::UnsignedShort: s << "UnsignedShort"; break;
		case AttributeIntType::Int: s << "Int"; break;
		case AttributeIntType::UnsignedInt: s << "UnsignedInt"; break;
		default: s << "AttributeIntType: " << ((unsigned int)val); break;
	}
	return s;
}



std::ostream & GL::operator<<(std::ostream & s, DrawMode val)
{
	switch (val)
	{
		case DrawMode::Points: s << "Points"; break;
		case DrawMode::LineStrip: s << "LineStrip"; break;
		case DrawMode::LineLoop: s << "LineLoop"; break;
		case DrawMode::Lines: s << "Lines"; break;
		case DrawMode::LineStripAdjacency: s << "LineStripAdjacency"; break;
		case DrawMode::LinesAdjacency: s << "LinesAdjacency"; break;
		case DrawMode::TriangleStrip: s << "TriangleStrip"; break;
		case DrawMode::TriangleFan: s << "TriangleFan"; break;
		case DrawMode::Triangles: s << "Triangles"; break;
		case DrawMode::TriangleStripAdjacency: s << "TriangleStripAdjacency"; break;
		case DrawMode::TrianglesAdjacency: s << "TrianglesAdjacency"; break;
		case DrawMode::Patches: s << "Patches"; break;
		default: s << ": " << ((unsigned int)val); break;
	}
	return s;
}



std::ostream & GL::operator<<(std::ostream & s, BufferTarget val)
{
	switch (val)
	{
		case BufferTarget::ArrayBuffer: s << "ArrayBuffer"; break;
		case BufferTarget::AtomicCounterBuffer: s << "AtomicCounterBuffer"; break;
		case BufferTarget::CopyReadBuffer: s << "CopyReadBuffer"; break;
		case BufferTarget::CopyWriteBuffer: s << "CopyWriteBuffer"; break;
		case BufferTarget::DispatchIndirectBuffer: s << "DispatchIndirectBuffer"; break;
		case BufferTarget::DrawIndirectBuffer: s << "DrawIndirectBuffer"; break;
		case BufferTarget::ElementArrayBuffer: s << "ElementArrayBuffer"; break;
		case BufferTarget::PixelPackBuffer: s << "PixelPackBuffer"; break;
		case BufferTarget::PixelUnpackBuffer: s << "PixelUnpackBuffer"; break;
		case BufferTarget::QueryBuffer: s << "QueryBuffer"; break;
		case BufferTarget::ShaderStorageBuffer: s << "ShaderStorageBuffer"; break;
		case BufferTarget::TextureBuffer: s << "TextureBuffer"; break;
		case BufferTarget::TransformFeedbackBuffer: s << "TransformFeedbackBuffer"; break;
		case BufferTarget::UniformBuffer: s << "UniformBuffer"; break;
		default: s << ": " << ((unsigned int)val); break;
	}
	return s;
}
std::ostream & GL::operator<<(std::ostream & s, BufferDataUsage val)
{
	switch (val)
	{
		case BufferDataUsage::StreamDraw: s << "StreamDraw"; break;
		case BufferDataUsage::StreamRead: s << "StreamRead"; break;
		case BufferDataUsage::StreamCopy: s << "StreamCopy"; break;
		case BufferDataUsage::StaticDraw: s << "StaticDraw"; break;
		case BufferDataUsage::StaticRead: s << "StaticRead"; break;
		case BufferDataUsage::StaticCopy: s << "StaticCopy"; break;
		case BufferDataUsage::DynamicDraw: s << "DynamicDraw"; break;
		case BufferDataUsage::DynamicRead: s << "DynamicRead"; break;
		case BufferDataUsage::DynamicCopy: s << "DynamicCopy"; break;
		default: s << ": " << ((unsigned int)val); break;
	}
	return s;
}
