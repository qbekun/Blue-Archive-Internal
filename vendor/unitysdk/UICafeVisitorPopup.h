#pragma once
#include "unitysdk.h"

class CafeVisitorPortrait;
class UIGrid;
class MXButton;
class ButtonActivator;

#define UICAFEVISITORPOPUP_CREATEPORTRAITS_OFFSET UNITYSDK_OFFSET(0x2291EC0)
#define UICAFEVISITORPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x22920A0)
#define UICAFEVISITORPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2292190)
#define UICAFEVISITORPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x22921A0)
#define UICAFEVISITORPOPUP_SHOWPORTRAITS_OFFSET UNITYSDK_OFFSET(0x2292320)
#define UICAFEVISITORPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22923B0)
#define UICAFEVISITORPOPUP_SETPORTRAITS_OFFSET UNITYSDK_OFFSET(0x2292440)
#define UICAFEVISITORPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2292620)
#define UICAFEVISITORPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2292710)

	inline static constexpr unsigned int UICafeVisitorPopup_TypeDefinitionIndex = 4708;

	class UICafeVisitorPopup : public Il2CppObject
	{
	public:
		CafeVisitorPortrait* portraitPrefab; // 0xD8
		Il2CppObject* portraits; // 0xE0
		UIGrid* grid; // 0xE8
		::System::Single delayBeforePortrait; // 0xF0
		::System::Single portraitInterval; // 0xF4
		MXButton* closeButton; // 0xF8
		ButtonActivator* confirmButton; // 0x100
		Il2CppObject* CharacterIds; // 0x108
		::System::Action* closeCallback; // 0x110

		::System::Void CreatePortraits()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_CREATEPORTRAITS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowPortraits()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_SHOWPORTRAITS_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPortraits()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_SETPORTRAITS_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEVISITORPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

