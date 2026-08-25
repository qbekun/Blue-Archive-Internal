#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class IScriptableRuntimeReflectionSystem; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_GET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA270C30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_SET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA270C40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_TICKREALTIMEPROBES_OFFSET UNITYSDK_OFFSET(0xA270C50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA270C20)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ScriptableRuntimeReflectionSystemWrapper_TypeDefinitionIndex = 31650;

	class ScriptableRuntimeReflectionSystemWrapper : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* _implementation_k__BackingField; // 0x10

		::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* get_implementation()
		{
			return (return (::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_GET_IMPLEMENTATION_OFFSET))(nullptr);
		}

		::System::Void set_implementation(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_SET_IMPLEMENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_TICKREALTIMEPROBES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_.CTOR_OFFSET))(nullptr);
		}

	};
}

