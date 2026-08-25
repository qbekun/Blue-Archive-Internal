#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UIAcademyMessangerStudentPopulator;
class MessangerStudentSortingTab;
class MessangerChatSortingTab;
class MessangerDisplayType;
class ChatSortingRule;
class SortingRule;

#define UIACADEMYMESSANGERSORTINGPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x21A7CD0)
#define UIACADEMYMESSANGERSORTINGPOPUP_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x21A8110)
#define UIACADEMYMESSANGERSORTINGPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x21A8020)
#define UIACADEMYMESSANGERSORTINGPOPUP_HIDE_OFFSET UNITYSDK_OFFSET(0x21A81B0)
#define UIACADEMYMESSANGERSORTINGPOPUP_GET_CURRENTCHATSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x21A81E0)
#define UIACADEMYMESSANGERSORTINGPOPUP__ONCLICKCLOSE_B__20_0_OFFSET UNITYSDK_OFFSET(0x21A8220)
#define UIACADEMYMESSANGERSORTINGPOPUP_SHOW_OFFSET UNITYSDK_OFFSET(0x21A8250)
#define UIACADEMYMESSANGERSORTINGPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A8430)
#define UIACADEMYMESSANGERSORTINGPOPUP_GET_CURRENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x21A8440)
#define UIACADEMYMESSANGERSORTINGPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x21A8480)
#define UIACADEMYMESSANGERSORTINGPOPUP_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x21A87D0)
#define UIACADEMYMESSANGERSORTINGPOPUP_GET_OPENANI_OFFSET UNITYSDK_OFFSET(0x21A8960)
#define UIACADEMYMESSANGERSORTINGPOPUP_SHOWOPENANI_OFFSET UNITYSDK_OFFSET(0x21A8120)
#define UIACADEMYMESSANGERSORTINGPOPUP_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x21A8A10)

	inline static constexpr unsigned int UIAcademyMessangerSortingPopup_TypeDefinitionIndex = 4166;

	class UIAcademyMessangerSortingPopup : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* openAni; // 0x18
		UIAcademyMessangerStudentPopulator* studentPopulator; // 0x20
		::Il2CppArray<::System::Object*>* closeSort; // 0x28
		::Il2CppArray<::System::Object*>* confirmSort; // 0x30
		MessangerStudentSortingTab* studentTab; // 0x38
		MessangerChatSortingTab* chatTab; // 0x40
		MessangerDisplayType* _DisplayType_k__BackingField; // 0x48

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		MessangerDisplayType* get_DisplayType()
		{
			return ((MessangerDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_GET_DISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_HIDE_OFFSET))(nullptr);
		}

		ChatSortingRule* get_CurrentChatSortingRule()
		{
			return ((ChatSortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_GET_CURRENTCHATSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void _OnClickClose_b__20_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP__ONCLICKCLOSE_B__20_0_OFFSET))(nullptr);
		}

		::System::Void Show(MessangerDisplayType* arg, SortingRule* arg2, ChatSortingRule* arg3)
		{
			((::System::Void(*)(MessangerDisplayType*, SortingRule*, ChatSortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_SHOW_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_.CTOR_OFFSET))(nullptr);
		}

		SortingRule* get_CurrentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_GET_CURRENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_ISPLAYINGANIMATION_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_OpenAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_GET_OPENANI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowOpenAni(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_SHOWOPENANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_DisplayType(MessangerDisplayType* arg)
		{
			((::System::Void(*)(MessangerDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSORTINGPOPUP_SET_DISPLAYTYPE_OFFSET))(arg, nullptr);
		}

	};

