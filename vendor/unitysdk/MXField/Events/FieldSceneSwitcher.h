#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Collider; }
namespace MXField::Core { class IFieldInteractable; }
namespace UnityEngine { class Transform; }

#define MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xEC6BF0)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0xEC6C80)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xEC6C90)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xEC6CA0)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_IGNOREPLAYERDIRECTION_OFFSET UNITYSDK_OFFSET(0xEC6CB0)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0xEC6CC0)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_START_OFFSET UNITYSDK_OFFSET(0xEC6E70)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC6E80)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_ONINTERACTIONEXIT_OFFSET UNITYSDK_OFFSET(0xEC6E90)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xEC6E60)
#define MXFIELD_EVENTS_FIELDSCENESWITCHER_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xEC6EB0)

namespace MXField::Events
{
	inline static constexpr unsigned int FieldSceneSwitcher_TypeDefinitionIndex = 10881;

	class FieldSceneSwitcher : public Il2CppObject
	{
	public:
		::System::Int64 sceneId; // 0x18
		::System::Boolean canTrigger; // 0x20
		::UnityEngine::Collider* _collider; // 0x28
		::MXField::Core::IFieldInteractable* _Target_k__BackingField; // 0x30

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_COLLIDER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_AWAKE_OFFSET))(nullptr);
		}

		::MXField::Core::IFieldInteractable* get_Target()
		{
			return ((::MXField::Core::IFieldInteractable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_TARGET_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnorePlayerDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_IGNOREPLAYERDIRECTION_OFFSET))(nullptr);
		}

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnInteractionExit(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_ONINTERACTIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_Target(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDSCENESWITCHER_SET_TARGET_OFFSET))(arg, nullptr);
		}

	};
}

