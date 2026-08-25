#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
class MXButton;
class UICafeStudentInvitePopup;

#define UICAFESTUDENTCHANGEPOPUP__ONCLICKINVITE_B__19_0_OFFSET UNITYSDK_OFFSET(0x22879C0)
#define UICAFESTUDENTCHANGEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2287E60)
#define UICAFESTUDENTCHANGEPOPUP_ONCLICKINVITE_OFFSET UNITYSDK_OFFSET(0x2287E70)
#define UICAFESTUDENTCHANGEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2287F50)
#define UICAFESTUDENTCHANGEPOPUP_GET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0x2288230)
#define UICAFESTUDENTCHANGEPOPUP_SET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0x2288240)
#define UICAFESTUDENTCHANGEPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2288250)

	inline static constexpr unsigned int UICafeStudentChangePopup_TypeDefinitionIndex = 4678;

	class UICafeStudentChangePopup : public Il2CppObject
	{
	public:
		UILabel* title; // 0xD8
		UILabel* description; // 0xE0
		UITexture* fromThumbnail; // 0xE8
		::UnityEngine::GameObject* fromCafeObject; // 0xF0
		UILabel* fromCafeName; // 0xF8
		UILabel* fromStudentNameLabel; // 0x100
		UITexture* toThumbnail; // 0x108
		::UnityEngine::GameObject* toCafeObject; // 0x110
		UILabel* toCafeName; // 0x118
		UILabel* toStudentNameLabel; // 0x120
		MXButton* closeButton; // 0x128
		MXButton* inviteButton; // 0x130
		MXButton* inviteButton_Yellow; // 0x138
		::System::Int64 _TargetServerId_k__BackingField; // 0x140

		::System::Void _OnClickInvite_b__19_0(UICafeStudentInvitePopup* arg)
		{
			((::System::Void(*)(UICafeStudentInvitePopup*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTCHANGEPOPUP__ONCLICKINVITE_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTCHANGEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickInvite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTCHANGEPOPUP_ONCLICKINVITE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTCHANGEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTCHANGEPOPUP_GET_TARGETSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TargetServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTCHANGEPOPUP_SET_TARGETSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTCHANGEPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

