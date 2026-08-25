#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BatchRendererGroup; }
namespace UnityEngine::Rendering { class BatchRendererCullingOutput&; }
namespace UnityEngine::Rendering { class LODParameters&; }

#define UNITYENGINE_RENDERING_BATCHRENDERERGROUP_INVOKEONPERFORMCULLING_OFFSET UNITYSDK_OFFSET(0xA256860)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererGroup_TypeDefinitionIndex = 31536;

	class BatchRendererGroup : public Il2CppObject
	{
	public:
		::System::Int32 m_GroupHandle; // 0x10
		OnPerformCulling* m_PerformCulling; // 0x18

		::System::Void InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* arg, ::UnityEngine::Rendering::BatchRendererCullingOutput&* arg, ::UnityEngine::Rendering::LODParameters&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchRendererCullingOutput&*, ::UnityEngine::Rendering::LODParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHRENDERERGROUP_INVOKEONPERFORMCULLING_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

