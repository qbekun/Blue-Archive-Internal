#pragma once
#include "unitysdk.h"

class DownloadPopup;
class CompletePopup;
class UIPopup_System;

#define UIPOPUP_CALLNAMEDOWNCONFIRM__ONCLICKCANCELDOWNLOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0x27603A0)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x2760440)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2760590)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_SETDOWNLOADPOPUP_OFFSET UNITYSDK_OFFSET(0x27606A0)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2760700)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x27607A0)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKSOUND_OFFSET UNITYSDK_OFFSET(0x2760830)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2760930)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_SETCOMPLETEPOPUP_OFFSET UNITYSDK_OFFSET(0x2760EF0)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27610A0)
#define UIPOPUP_CALLNAMEDOWNCONFIRM__ONCLICKDOWNLOAD_B__10_0_OFFSET UNITYSDK_OFFSET(0x27610B0)
#define UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKCANCELDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x27605A0)

	inline static constexpr unsigned int UIPopup_CallNameDownConfirm_TypeDefinitionIndex = 7303;

	class UIPopup_CallNameDownConfirm : public Il2CppObject
	{
	public:
		DownloadPopup* downloadPopup; // 0xD8
		CompletePopup* completePopup; // 0xE0
		::System::Action* EndAction; // 0xE8

		::System::Void _OnClickCancelDownload_b__11_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM__ONCLICKCANCELDOWNLOAD_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetDownloadPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_SETDOWNLOADPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickSound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKSOUND_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetCompletePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_SETCOMPLETEPOPUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickDownload_b__10_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM__ONCLICKDOWNLOAD_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancelDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CALLNAMEDOWNCONFIRM_ONCLICKCANCELDOWNLOAD_OFFSET))(nullptr);
		}

	};

