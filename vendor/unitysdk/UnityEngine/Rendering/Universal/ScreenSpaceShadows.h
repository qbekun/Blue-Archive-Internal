#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceShadowsSettings; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA06D490)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_CREATE_OFFSET UNITYSDK_OFFSET(0xA06D4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0xA06D840)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA06DBA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_LOADMATERIAL_OFFSET UNITYSDK_OFFSET(0xA06D6E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenSpaceShadows_TypeDefinitionIndex = 32740;

	class ScreenSpaceShadows : public Il2CppObject
	{
	public:
		::UnityEngine::Shader* m_Shader; // 0x20
		::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* m_Settings; // 0x28
		::UnityEngine::Material* m_Material; // 0x30
		ScreenSpaceShadowsPass* m_SSShadowsPass; // 0x38
		ScreenSpaceShadowsPostPass* m_SSShadowsPostPass; // 0x40
		::System::String* k_ShaderName; // 0x0

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_CREATE_OFFSET))(nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean LoadMaterial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACESHADOWS_LOADMATERIAL_OFFSET))(nullptr);
		}

	};
}

