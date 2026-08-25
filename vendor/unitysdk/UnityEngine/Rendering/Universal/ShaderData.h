#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShaderData; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeBuffer&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETADDITIONALLIGHTSHADOWPARAMSSTRUCTUREDBUFFER_OFFSET UNITYSDK_OFFSET(0xA072280)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTDATABUFFER_OFFSET UNITYSDK_OFFSET(0xA0722D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA072320)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETORUPDATEBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETADDITIONALLIGHTSHADOWSLICEMATRICESSTRUCTUREDBUFFER_OFFSET UNITYSDK_OFFSET(0xA072410)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA072460)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA072500)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSEBUFFER_OFFSET UNITYSDK_OFFSET(0xA0723D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTINDICESBUFFER_OFFSET UNITYSDK_OFFSET(0xA072510)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderData_TypeDefinitionIndex = 32748;

	class ShaderData : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::ShaderData* m_Instance; // 0x0
		::UnityEngine::ComputeBuffer* m_LightDataBuffer; // 0x10
		::UnityEngine::ComputeBuffer* m_LightIndicesBuffer; // 0x18
		::UnityEngine::ComputeBuffer* m_AdditionalLightShadowParamsStructuredBuffer; // 0x20
		::UnityEngine::ComputeBuffer* m_AdditionalLightShadowSliceMatricesStructuredBuffer; // 0x28

		::UnityEngine::ComputeBuffer* GetAdditionalLightShadowParamsStructuredBuffer(::System::Int32 arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETADDITIONALLIGHTSHADOWPARAMSSTRUCTUREDBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ComputeBuffer* GetLightDataBuffer(::System::Int32 arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTDATABUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSE_OFFSET))(nullptr);
		}

		::UnityEngine::ComputeBuffer* GetOrUpdateBuffer(::UnityEngine::ComputeBuffer&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::UnityEngine::ComputeBuffer&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETORUPDATEBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ComputeBuffer* GetAdditionalLightShadowSliceMatricesStructuredBuffer(::System::Int32 arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETADDITIONALLIGHTSHADOWSLICEMATRICESSTRUCTUREDBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::ShaderData* get_instance()
		{
			return (return (::UnityEngine::Rendering::Universal::ShaderData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DisposeBuffer(::UnityEngine::ComputeBuffer&* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ComputeBuffer* GetLightIndicesBuffer(::System::Int32 arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTINDICESBUFFER_OFFSET))(arg, nullptr);
		}

	};
}

