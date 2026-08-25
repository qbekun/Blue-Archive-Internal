#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class GraphicsDeviceType; }
class DeviceTier;

	inline static constexpr unsigned int GPUCapabilities_TypeDefinitionIndex = 3568;

	class GPUCapabilities : public Il2CppObject
	{
	public:
		::System::Int32 MaxTextureSize; // 0x10
		::System::Int32 ShaderLevel; // 0x14
		::System::Int32 GraphicsMemorySize; // 0x18
		::System::Boolean SupportsComputeShaders; // 0x1C
		::System::Boolean Supports32BitIndexBuffer; // 0x1D
		::System::Boolean SupportsInstancing; // 0x1E
		::System::Boolean SupportsHDR; // 0x1F
		::System::Boolean SupportsShadows; // 0x20
		::System::Int32 SupportedRenderTargetCount; // 0x24
		::UnityEngine::Rendering::GraphicsDeviceType* GraphicsAPI; // 0x28
		::System::Boolean GraphicsMultiThreaded; // 0x2C
		::System::Int32 MaxCubemapSize; // 0x30
		::System::Int32 SystemMemorySize; // 0x34
		::System::Int32 TextureScore; // 0x38
		::System::Int32 ShaderScore; // 0x3C
		::System::Int32 MemoryScore; // 0x40
		::System::Int32 FeatureScore; // 0x44
		::System::Int32 ApiScore; // 0x48
		::System::Int32 TotalScore; // 0x4C
		::System::Int32 FinalScoreWithRam; // 0x50
		DeviceTier* DeviceTier; // 0x54

	};

