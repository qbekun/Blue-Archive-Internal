#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }
namespace MXField::Core { class IFieldInteractable; }

#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB2550)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_IGNOREPLAYERDIRECTION_OFFSET UNITYSDK_OFFSET(0xEB3900)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xEB3910)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xEB3920)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xEB3930)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xEB3940)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_ONINTERACTIONEXIT_OFFSET UNITYSDK_OFFSET(0xEB3950)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xEB3970)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_TRYRETRIGGER_OFFSET UNITYSDK_OFFSET(0xEB3980)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xEB3AC0)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0xEB3AD0)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_TRIGGER_TRIGGERBEHAVIOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xEB3050)

namespace MXField::Trigger
{
	inline static constexpr unsigned int TriggerBehavior_TypeDefinitionIndex = 10806;

	class TriggerBehavior : public Il2CppObject
	{
	public:
		::System::Boolean ignorePlayerDirection; // 0x18
		::UnityEngine::Collider* _Collider_k__BackingField; // 0x20
		::UnityEngine::Transform* _Transform_k__BackingField; // 0x28
		::MXField::Core::IFieldInteractable* _Target_k__BackingField; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnorePlayerDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_IGNOREPLAYERDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_Transform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_SET_TRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Collider(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_SET_COLLIDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::MXField::Core::IFieldInteractable* get_Target()
		{
			return ((::MXField::Core::IFieldInteractable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void OnInteractionExit(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_ONINTERACTIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Target(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Void TryRetrigger()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_TRYRETRIGGER_OFFSET))(nullptr);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_COLLIDER_OFFSET))(nullptr);
		}

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_TRIGGERBEHAVIOR_AWAKE_OFFSET))(nullptr);
		}

	};
}

