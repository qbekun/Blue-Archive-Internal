#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class UIGrid;
class UIServerSelectClickButton;
class UIMarketStoreSelectListPopup;
class UILanguageSelectListPopup;
class UIGlobalOptionGroupPopup;
class TestButton;
class ToggleSystemOption;
class ClearDataOption;

#define UIGLOBALUTILSELECTLISTPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0xCD1B90)
#define UIGLOBALUTILSELECTLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD1C90)
#define UIGLOBALUTILSELECTLISTPOPUP_ONCLICKLOCALCACHECLEARBUTTON_OFFSET UNITYSDK_OFFSET(0xCD2C20)
#define UIGLOBALUTILSELECTLISTPOPUP_ONCLICKDOWNLOADASSETBUTTON_OFFSET UNITYSDK_OFFSET(0xCD2CA0)
#define UIGLOBALUTILSELECTLISTPOPUP_ONCLICKMARKETSTOREBUTTON_OFFSET UNITYSDK_OFFSET(0xCD2CB0)
#define UIGLOBALUTILSELECTLISTPOPUP_SETGLOBALFUNCTIONBUTTONLIST_OFFSET UNITYSDK_OFFSET(0xCD2DA0)
#define UIGLOBALUTILSELECTLISTPOPUP_ONTOGGLECHAGEDORONCLICKBTN_OFFSET UNITYSDK_OFFSET(0xCD2EC0)
#define UIGLOBALUTILSELECTLISTPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xCD3640)
#define UIGLOBALUTILSELECTLISTPOPUP_CLICKTESTBUTTONS_OFFSET UNITYSDK_OFFSET(0xCD33A0)
#define UIGLOBALUTILSELECTLISTPOPUP_CHAGNEGAMESYSTEMOPTION_OFFSET UNITYSDK_OFFSET(0xCD30F0)
#define UIGLOBALUTILSELECTLISTPOPUP_ONTOGGLETOYLOGIN_OFFSET UNITYSDK_OFFSET(0xCD3730)
#define UIGLOBALUTILSELECTLISTPOPUP_ONCLICKVOICELANGUAGEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD3800)
#define UIGLOBALUTILSELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD3890)
#define UIGLOBALUTILSELECTLISTPOPUP_ONCLICKLANGUAGEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD3940)
#define UIGLOBALUTILSELECTLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD3970)
#define UIGLOBALUTILSELECTLISTPOPUP_CLICKCLEAROPTION_OFFSET UNITYSDK_OFFSET(0xCD3390)
#define UIGLOBALUTILSELECTLISTPOPUP_ONCLICKOPTIONGROUPPOPUP_OFFSET UNITYSDK_OFFSET(0xCD39F0)
#define UIGLOBALUTILSELECTLISTPOPUP_INITOPTIONGROUPPOPUP_OFFSET UNITYSDK_OFFSET(0xCD3B10)

	inline static constexpr unsigned int UIGlobalUtilSelectListPopup_TypeDefinitionIndex = 9148;

	class UIGlobalUtilSelectListPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UIScrollView* scrollView; // 0x20
		UIGrid* grid; // 0x28
		UIServerSelectClickButton* clickButtonPrefab; // 0x30
		UIMarketStoreSelectListPopup* marketStoreSelectListPopup; // 0x38
		UILanguageSelectListPopup* languageSelectListPopup; // 0x40
		UIGlobalOptionGroupPopup* globalOptionGroupPopup; // 0x48
		Il2CppObject* selectClickDic; // 0x50

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickLocalCacheClearButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONCLICKLOCALCACHECLEARBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickDownloadAssetButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONCLICKDOWNLOADASSETBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickMarketStoreButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONCLICKMARKETSTOREBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetGlobalFunctionButtonList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_SETGLOBALFUNCTIONBUTTONLIST_OFFSET))(nullptr);
		}

		::System::Void OnToggleChagedOrOnClickBtn(::System::Type* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONTOGGLECHAGEDORONCLICKBTN_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void OpenPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_OPENPOPUP_OFFSET))(nullptr);
		}

		::System::Void ClickTestButtons(TestButton* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(TestButton*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_CLICKTESTBUTTONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ChagneGameSystemOption(ToggleSystemOption* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(ToggleSystemOption*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_CHAGNEGAMESYSTEMOPTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnToggleToyLogin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONTOGGLETOYLOGIN_OFFSET))(nullptr);
		}

		::System::Void OnClickVoiceLanguageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONCLICKVOICELANGUAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickLanguageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONCLICKLANGUAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClickClearOption(ClearDataOption* arg)
		{
			((::System::Void(*)(ClearDataOption*, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_CLICKCLEAROPTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOptionGroupPopup(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_ONCLICKOPTIONGROUPPOPUP_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitOptionGroupPopup(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALUTILSELECTLISTPOPUP_INITOPTIONGROUPPOPUP_OFFSET))(arg, nullptr);
		}

	};

