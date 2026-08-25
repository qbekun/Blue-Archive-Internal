#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UICafeStudentInviteList;
class MXButton;
class MessangerStudentSortingTab;
class SortingRule;

#define UICAFESTUDENTINVITELISTSORTINGPOPUP_HIDE_OFFSET UNITYSDK_OFFSET(0x2289C80)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP__ONCLICKCLOSE_B__13_0_OFFSET UNITYSDK_OFFSET(0x228A400)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x228A430)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_SHOWOPENANI_OFFSET UNITYSDK_OFFSET(0x228A440)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x228A4F0)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_SHOW_OFFSET UNITYSDK_OFFSET(0x2289020)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x228A5E0)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_GET_CURRENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2289B50)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x228A650)
#define UICAFESTUDENTINVITELISTSORTINGPOPUP_GET_OPENANI_OFFSET UNITYSDK_OFFSET(0x228A910)

	inline static constexpr unsigned int UICafeStudentInviteListSortingPopup_TypeDefinitionIndex = 4684;

	class UICafeStudentInviteListSortingPopup : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* openAni; // 0x18
		UICafeStudentInviteList* studentList; // 0x20
		MXButton* closeSort; // 0x28
		MXButton* confirmSort; // 0x30
		MessangerStudentSortingTab* studentTab; // 0x38

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_HIDE_OFFSET))(nullptr);
		}

		::System::Void _OnClickClose_b__13_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP__ONCLICKCLOSE_B__13_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowOpenAni(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_SHOWOPENANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Show(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		SortingRule* get_CurrentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_GET_CURRENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_OpenAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELISTSORTINGPOPUP_GET_OPENANI_OFFSET))(nullptr);
		}

	};

