#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPREVIEWPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03B770)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPREVIEWPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03B9B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalPreviewPass_TypeDefinitionIndex = 32597;

	class DecalPreviewPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xD8
		Il2CppObject* m_ShaderTagIdList; // 0xF0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0xF8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPREVIEWPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPREVIEWPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

