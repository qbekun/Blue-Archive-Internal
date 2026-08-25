#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class ButtonActivator;
namespace UnityEngine { class BoxCollider; }
class UICafeStudentInvitePopup;

#define UICAFESTUDENTINVITEUNIT_ONCLICKINVITE_OFFSET UNITYSDK_OFFSET(0x228BE40)
#define UICAFESTUDENTINVITEUNIT_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x228C2E0)
#define UICAFESTUDENTINVITEUNIT_GET_VISITINGCAFEID_OFFSET UNITYSDK_OFFSET(0x228C2F0)
#define UICAFESTUDENTINVITEUNIT_GET_BUTTONCOLLIDER_OFFSET UNITYSDK_OFFSET(0x228C300)
#define UICAFESTUDENTINVITEUNIT_SET_VISITINGCAFEID_OFFSET UNITYSDK_OFFSET(0x228C3A0)
#define UICAFESTUDENTINVITEUNIT_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x228C3B0)
#define UICAFESTUDENTINVITEUNIT_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x228C3C0)
#define UICAFESTUDENTINVITEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x228C3D0)
#define UICAFESTUDENTINVITEUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x228C410)
#define UICAFESTUDENTINVITEUNIT_SETBUTTONCOLLIDER_OFFSET UNITYSDK_OFFSET(0x228A190)
#define UICAFESTUDENTINVITEUNIT__CONFIRMINVITE_B__30_0_OFFSET UNITYSDK_OFFSET(0x228C550)
#define UICAFESTUDENTINVITEUNIT_CONFIRMINVITE_OFFSET UNITYSDK_OFFSET(0x228C580)
#define UICAFESTUDENTINVITEUNIT_GET_PERSONALITYID_OFFSET UNITYSDK_OFFSET(0x228C650)
#define UICAFESTUDENTINVITEUNIT_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x228C660)
#define UICAFESTUDENTINVITEUNIT_SET_PERSONALITYID_OFFSET UNITYSDK_OFFSET(0x228C670)
#define UICAFESTUDENTINVITEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x228C680)

	inline static constexpr unsigned int UICafeStudentInviteUnit_TypeDefinitionIndex = 4693;

	class UICafeStudentInviteUnit : public ::System::Xml::XmlTokenizedType
	{
	public:
		UITexture* thumbnail; // 0x28
		UILabel* studentNameLabel; // 0x30
		UILabel* favorRankLabel; // 0x38
		::UnityEngine::GameObject* visitingCafeObject; // 0x40
		UILabel* visitingCafeName; // 0x48
		MXButton* inviteButton; // 0x50
		ButtonActivator* inviteButtonActivator; // 0x58
		::UnityEngine::GameObject* favorite; // 0x60
		::System::Int64 _ServerId_k__BackingField; // 0x68
		::System::String* _CharacterName_k__BackingField; // 0x70
		::System::Int64 _PersonalityId_k__BackingField; // 0x78
		::System::Int64 _VisitingCafeId_k__BackingField; // 0x80
		::UnityEngine::BoxCollider* _buttonCollier; // 0x88

		::System::Void OnClickInvite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_ONCLICKINVITE_OFFSET))(nullptr);
		}

		::System::String* get_CharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_GET_CHARACTERNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_VisitingCafeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_GET_VISITINGCAFEID_OFFSET))(nullptr);
		}

		::UnityEngine::BoxCollider* get_ButtonCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_GET_BUTTONCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void set_VisitingCafeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_SET_VISITINGCAFEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_SET_CHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetButtonCollider(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_SETBUTTONCOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void _ConfirmInvite_b__30_0(UICafeStudentInvitePopup* arg)
		{
			((::System::Void(*)(UICafeStudentInvitePopup*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT__CONFIRMINVITE_B__30_0_OFFSET))(arg, nullptr);
		}

		::System::Void ConfirmInvite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_CONFIRMINVITE_OFFSET))(nullptr);
		}

		::System::Int64 get_PersonalityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_GET_PERSONALITYID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PersonalityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_SET_PERSONALITYID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

