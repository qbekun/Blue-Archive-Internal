#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA017540)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA017550)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA017570)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA017610)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PixelPerfectBackgroundPass_TypeDefinitionIndex = 32479;

	class PixelPerfectBackgroundPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingScope; // 0x0
		::System::Boolean m_SavedIsOrthographic; // 0xD8
		::System::Single m_SavedOrthographicSize; // 0xDC

		::System::Void Setup(::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTBACKGROUNDPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

