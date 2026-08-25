#pragma once
#include "../../unitysdk.h"

namespace MXField::Core { class IFieldInteractable; }
class UIBase;
namespace MXField::Dispatch { class DispatchType; }
namespace UnityEngine { class Transform; }

#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_IGNOREPLAYERDIRECTION_OFFSET UNITYSDK_OFFSET(0xEB9F50)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT__UPDATE_B__16_0_OFFSET UNITYSDK_OFFSET(0xEB9F60)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_HANDLEFIELDINTERACTIONFINISHDISPATCH_OFFSET UNITYSDK_OFFSET(0xEB9FE0)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xEBA050)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEBA060)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0xEBA1B0)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_HANDLEFIELDINTERACTIONSTARTDISPATCH_OFFSET UNITYSDK_OFFSET(0xEBA320)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_START_OFFSET UNITYSDK_OFFSET(0xEBA390)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_ISINSIGHT_OFFSET UNITYSDK_OFFSET(0xEBA5A0)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONINTERACTIONEXIT_OFFSET UNITYSDK_OFFSET(0xEBA950)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xEBA9A0)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEBA9B0)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEBAC20)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xEBACA0)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xEBACB0)
#define MXFIELD_TALK_FIELDPLAYERCONVERSANT_UPDATE_OFFSET UNITYSDK_OFFSET(0xEBACC0)

namespace MXField::Talk
{
	inline static constexpr unsigned int FieldPlayerConversant_TypeDefinitionIndex = 10822;

	class FieldPlayerConversant : public Il2CppObject
	{
	public:
		::System::Single MaxAngle; // 0x0
		Il2CppObject* interactables; // 0x18
		::System::Boolean canTrigger; // 0x20
		::MXField::Core::IFieldInteractable* _Target_k__BackingField; // 0x28

		::System::Boolean get_IgnorePlayerDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_IGNOREPLAYERDIRECTION_OFFSET))(nullptr);
		}

		::System::Void _Update_b__16_0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT__UPDATE_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleFieldInteractionFinishDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_HANDLEFIELDINTERACTIONFINISHDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleFieldInteractionStartDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_HANDLEFIELDINTERACTIONSTARTDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_START_OFFSET))(nullptr);
		}

		::System::Boolean IsInSight(::MXField::Core::IFieldInteractable* arg)
		{
			return ((::System::Boolean(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_ISINSIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void OnInteractionExit(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONINTERACTIONEXIT_OFFSET))(arg, nullptr);
		}

		::MXField::Core::IFieldInteractable* get_Target()
		{
			return ((::MXField::Core::IFieldInteractable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_Target(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDPLAYERCONVERSANT_UPDATE_OFFSET))(nullptr);
		}

	};
}

