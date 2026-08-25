#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITable;
class MXButton;
class UIScrollView;
class UIPopup_System;

#define UIPOPUP_OPTION_CUSTOMKEY__ONCLICKRESET_B__12_0_OFFSET UNITYSDK_OFFSET(0x2193770)
#define UIPOPUP_OPTION_CUSTOMKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2193890)
#define UIPOPUP_OPTION_CUSTOMKEY_ONCLICKRESET_OFFSET UNITYSDK_OFFSET(0x21938A0)
#define UIPOPUP_OPTION_CUSTOMKEY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2193B50)
#define UIPOPUP_OPTION_CUSTOMKEY__ONCLICKRESET_G__ONCLICKOK|12_1_OFFSET UNITYSDK_OFFSET(0x2193D70)
#define UIPOPUP_OPTION_CUSTOMKEY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2193F40)
#define UIPOPUP_OPTION_CUSTOMKEY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2194E00)
#define UIPOPUP_OPTION_CUSTOMKEY_GET_LISTS_OFFSET UNITYSDK_OFFSET(0x2193A80)
#define UIPOPUP_OPTION_CUSTOMKEY_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2194ED0)

	inline static constexpr unsigned int UIPopup_Option_CustomKey_TypeDefinitionIndex = 4112;

	class UIPopup_Option_CustomKey : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _groupObj; // 0xD8
		UITable* _table; // 0xE0
		MXButton* _resetButton; // 0xE8
		MXButton* _closeButton; // 0xF0
		UIScrollView* _scrollView; // 0xF8
		::System::Boolean _isSet; // 0x100
		::Il2CppArray<::System::Object*>* _lists; // 0x108

		::System::Void _OnClickReset_b__12_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY__ONCLICKRESET_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ONCLICKRESET_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickReset_g__OnClickOk|12_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY__ONCLICKRESET_G__ONCLICKOK|12_1_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ONCLOSED_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Lists()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_GET_LISTS_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

