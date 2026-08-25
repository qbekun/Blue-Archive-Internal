#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalDrawFowardEmissiveSystem; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALFORWARDEMISSIVEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03B1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALFORWARDEMISSIVEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03B400)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalForwardEmissivePass_TypeDefinitionIndex = 32595;

	class DecalForwardEmissivePass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xD8
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0xF0
		Il2CppObject* m_ShaderTagIdList; // 0xF8
		::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* m_DrawSystem; // 0x100

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALFORWARDEMISSIVEPASS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALFORWARDEMISSIVEPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

