#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class SortingLayerRange; }
namespace UnityEngine::Rendering::Universal { class LightStats; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class RenderTextureDescriptor; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERBATCH_INITRTIDS_OFFSET UNITYSDK_OFFSET(0xA01DB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERBATCH_RELEASERT_OFFSET UNITYSDK_OFFSET(0xA01B530)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERBATCH_GETRTID_OFFSET UNITYSDK_OFFSET(0xA01A2B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LayerBatch_TypeDefinitionIndex = 32484;

	class LayerBatch : public Il2CppObject
	{
	public:
		::System::Int32 startLayerID; // 0x10
		::System::Int32 endLayerValue; // 0x14
		::UnityEngine::Rendering::SortingLayerRange* layerRange; // 0x18
		::UnityEngine::Rendering::Universal::LightStats* lightStats; // 0x1C
		<renderTargetIds>e__FixedBuffer* renderTargetIds; // 0x30
		<renderTargetUsed>e__FixedBuffer* renderTargetUsed; // 0x40

		::System::Void InitRTIds(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERBATCH_INITRTIDS_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseRT(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERBATCH_RELEASERT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* GetRTId(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERBATCH_GETRTID_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

