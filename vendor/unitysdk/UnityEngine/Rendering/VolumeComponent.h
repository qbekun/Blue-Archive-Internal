#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9FE02E0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FE02F0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE0300)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET UNITYSDK_OFFSET(0x9FE0350)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_OVERRIDE_OFFSET UNITYSDK_OFFSET(0x9FE0730)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FE0870)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FE0880)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FE0940)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETOVERRIDESTO_OFFSET UNITYSDK_OFFSET(0x9FE0360)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_FINDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9FE0CF0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE14A0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9FE1560)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9FE1570)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FE1580)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponent_TypeDefinitionIndex = 34088;

	class VolumeComponent : public Il2CppObject
	{
	public:
		::System::Boolean active; // 0x18
		::System::String* _displayName_k__BackingField; // 0x20
		Il2CppObject* _parameters_k__BackingField; // 0x28

		::System::Void set_parameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_PARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetAllOverridesTo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET))(arg, nullptr);
		}

		::System::Void Override(::UnityEngine::Rendering::VolumeComponent* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeComponent*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_OVERRIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_displayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_RELEASE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetOverridesTo(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETOVERRIDESTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FindParameters(::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_FINDPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GETHASHCODE_OFFSET))(nullptr);
		}

		Il2CppObject* get_parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

