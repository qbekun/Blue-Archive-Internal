#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class LightStats; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_ISSCENELIT_OFFSET UNITYSDK_OFFSET(0xA0147B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA014890)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_GET_VISIBLELIGHTS_OFFSET UNITYSDK_OFFSET(0xA014910)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_GETLIGHTSTATSBYLAYER_OFFSET UNITYSDK_OFFSET(0xA014920)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_SETUPCULLING_OFFSET UNITYSDK_OFFSET(0xA014BA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Light2DCullResult_TypeDefinitionIndex = 32471;

	class Light2DCullResult : public Il2CppObject
	{
	public:
		Il2CppObject* m_VisibleLights; // 0x10

		::System::Boolean IsSceneLit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_ISSCENELIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_visibleLights()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_GET_VISIBLELIGHTS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::LightStats* GetLightStatsByLayer(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::Universal::LightStats*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_GETLIGHTSTATSBYLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetupCulling(::UnityEngine::Rendering::ScriptableCullingParameters&* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DCULLRESULT_SETUPCULLING_OFFSET))(arg, arg, nullptr);
		}

	};
}

