#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ScriptableRuntimeReflectionSystemWrapper; }
namespace UnityEngine::Experimental::Rendering { class IScriptableRuntimeReflectionSystem; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SYSTEM_OFFSET UNITYSDK_OFFSET(0xA270970)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_GET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA270B10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SCRIPTINGDIRTYREFLECTIONSYSTEMINSTANCE_OFFSET UNITYSDK_OFFSET(0xA270B60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA270BA0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ScriptableRuntimeReflectionSystemSettings_TypeDefinitionIndex = 31649;

	class ScriptableRuntimeReflectionSystemSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* s_Instance; // 0x0

		::System::Void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SYSTEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
		{
			return (return (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_GET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ScriptingDirtyReflectionSystemInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SCRIPTINGDIRTYREFLECTIONSYSTEMINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

