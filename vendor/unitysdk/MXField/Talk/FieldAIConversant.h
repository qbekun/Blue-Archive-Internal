#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Collider; }
namespace MXField::Core { class IFieldInteractable; }
namespace UnityEngine { class Transform; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_TALK_FIELDAICONVERSANT_ISROTATEFIXED_OFFSET UNITYSDK_OFFSET(0xEB6DB0)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_INTERACTIONIDS_OFFSET UNITYSDK_OFFSET(0xEB6E00)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_ROTATEFIXEDINTERACTIONIDS_OFFSET UNITYSDK_OFFSET(0xEB6E10)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_RANDOMINTERACTIONIDS_OFFSET UNITYSDK_OFFSET(0xEB6E20)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xEB6FA0)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_IGNOREPLAYERDIRECTION_OFFSET UNITYSDK_OFFSET(0xEB6FB0)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xEB6FC0)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xEB7120)
#define MXFIELD_TALK_FIELDAICONVERSANT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xEB71B0)
#define MXFIELD_TALK_FIELDAICONVERSANT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xEB71C0)
#define MXFIELD_TALK_FIELDAICONVERSANT_START_OFFSET UNITYSDK_OFFSET(0xEB71D0)
#define MXFIELD_TALK_FIELDAICONVERSANT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEB7260)
#define MXFIELD_TALK_FIELDAICONVERSANT_INITTALKSTATUSES_OFFSET UNITYSDK_OFFSET(0xEB73A0)
#define MXFIELD_TALK_FIELDAICONVERSANT_ISALLINTERACTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xEB7A10)
#define MXFIELD_TALK_FIELDAICONVERSANT_CHECKSHOWINTERACTIONEMOJI_OFFSET UNITYSDK_OFFSET(0xEB7CC0)
#define MXFIELD_TALK_FIELDAICONVERSANT_GETACTIVEINTERACTIONSTATUSES_OFFSET UNITYSDK_OFFSET(0xEB8140)
#define MXFIELD_TALK_FIELDAICONVERSANT_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0xEB8250)
#define MXFIELD_TALK_FIELDAICONVERSANT_HANDLEUIOPENMESSAGE_OFFSET UNITYSDK_OFFSET(0xEB8380)
#define MXFIELD_TALK_FIELDAICONVERSANT_ONINTERACTIONEXIT_OFFSET UNITYSDK_OFFSET(0xEB8520)
#define MXFIELD_TALK_FIELDAICONVERSANT_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xEB85D0)
#define MXFIELD_TALK_FIELDAICONVERSANT_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xEB89C0)
#define MXFIELD_TALK_FIELDAICONVERSANT_HASTRIGGER_OFFSET UNITYSDK_OFFSET(0xEB8DB0)
#define MXFIELD_TALK_FIELDAICONVERSANT_HASTRIGGER_OFFSET UNITYSDK_OFFSET(0xEB8DC0)
#define MXFIELD_TALK_FIELDAICONVERSANT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB8E20)

namespace MXField::Talk
{
	inline static constexpr unsigned int FieldAIConversant_TypeDefinitionIndex = 10817;

	class FieldAIConversant : public Il2CppObject
	{
	public:
		::System::Boolean ignorePlayerDirection; // 0x18
		::Il2CppArray<::System::Object*>* interactionIds; // 0x20
		::Il2CppArray<::System::Object*>* rotateFixedInteractionIds; // 0x28
		Il2CppObject* interactionStatuses; // 0x30
		::Il2CppArray<::System::Object*>* randomInteractionList; // 0x38
		::System::Boolean canTrigger; // 0x40
		::UnityEngine::Collider* _collider; // 0x48
		::MXField::Core::IFieldInteractable* _Target_k__BackingField; // 0x50

		::System::Boolean IsRotateFixed(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_ISROTATEFIXED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InteractionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_INTERACTIONIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RotateFixedInteractionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_ROTATEFIXEDINTERACTIONIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RandomInteractionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_RANDOMINTERACTIONIDS_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnorePlayerDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_IGNOREPLAYERDIRECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_COLLIDER_OFFSET))(nullptr);
		}

		::MXField::Core::IFieldInteractable* get_Target()
		{
			return ((::MXField::Core::IFieldInteractable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Start()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void InitTalkStatuses()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_INITTALKSTATUSES_OFFSET))(nullptr);
		}

		::System::Boolean IsAllInteractionHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_ISALLINTERACTIONHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean CheckShowInteractionEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_CHECKSHOWINTERACTIONEMOJI_OFFSET))(nullptr);
		}

		Il2CppObject* GetActiveInteractionStatuses()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_GETACTIVEINTERACTIONSTATUSES_OFFSET))(nullptr);
		}

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleUIOpenMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_HANDLEUIOPENMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnInteractionExit(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_ONINTERACTIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasTrigger(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_HASTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasTrigger(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_HASTRIGGER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDAICONVERSANT_.CTOR_OFFSET))(nullptr);
		}

	};
}

