#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIPopup_System;

#define UIASSETDATACLEARMENU__ONCLICKNOTICE_B__20_0_OFFSET UNITYSDK_OFFSET(0xB6E960)
#define UIASSETDATACLEARMENU_ISMENUPOPUPACTIVE_OFFSET UNITYSDK_OFFSET(0xB6E9D0)
#define UIASSETDATACLEARMENU__ONCLICKNOTICE_B__20_1_OFFSET UNITYSDK_OFFSET(0xB6E9F0)
#define UIASSETDATACLEARMENU_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB6EA90)
#define UIASSETDATACLEARMENU_SETVISIBLENOTICE_OFFSET UNITYSDK_OFFSET(0xB6EB50)
#define UIASSETDATACLEARMENU_ISONCACHECLEARPOPUP_OFFSET UNITYSDK_OFFSET(0xB6EB70)
#define UIASSETDATACLEARMENU_ONCLICKNOTICE_OFFSET UNITYSDK_OFFSET(0xB6EBF0)
#define UIASSETDATACLEARMENU_ONOPEN_OFFSET UNITYSDK_OFFSET(0xB6EE20)
#define UIASSETDATACLEARMENU_ONCLICKCACHECLEAR_OFFSET UNITYSDK_OFFSET(0xB6EEE0)
#define UIASSETDATACLEARMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6F040)
#define UIASSETDATACLEARMENU_ONCLICKINITGAMESETTING_OFFSET UNITYSDK_OFFSET(0xB6F050)
#define UIASSETDATACLEARMENU_SETACTIVENOTICEBUTTON_OFFSET UNITYSDK_OFFSET(0xB6F1B0)
#define UIASSETDATACLEARMENU_ONCLICKCOMPLETECACHECLEAR_OFFSET UNITYSDK_OFFSET(0xB6F1D0)
#define UIASSETDATACLEARMENU_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6F330)
#define UIASSETDATACLEARMENU__ONCLICKNOTICE_B__20_2_OFFSET UNITYSDK_OFFSET(0xB701B0)

	inline static constexpr unsigned int UIAssetDataClearMenu_TypeDefinitionIndex = 8461;

	class UIAssetDataClearMenu : public Il2CppObject
	{
	public:
		MXButton* cacheClearButton; // 0x18
		MXButton* completeCacheClearButton; // 0x20
		MXButton* restoreButton; // 0x28
		MXButton* openPopupButton; // 0x30
		MXButton* initGamesettingButton; // 0x38
		MXButton* optionButton; // 0x40
		::UnityEngine::GameObject* menuPressedButton; // 0x48
		MXButton* closePopupButton; // 0x50
		::UnityEngine::GameObject* popup; // 0x58
		::UnityEngine::GameObject* noticeButtonRoot; // 0x60
		MXButton* noticePopupButton; // 0x68
		::UnityEngine::GameObject* noticePopupPressedButton; // 0x70

		::System::Void _OnClickNotice_b__20_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU__ONCLICKNOTICE_B__20_0_OFFSET))(nullptr);
		}

		::System::Boolean IsMenuPopupActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ISMENUPOPUPACTIVE_OFFSET))(nullptr);
		}

		::System::Void _OnClickNotice_b__20_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU__ONCLICKNOTICE_B__20_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetVisibleNotice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_SETVISIBLENOTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOnCacheClearPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ISONCACHECLEARPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickNotice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ONCLICKNOTICE_OFFSET))(nullptr);
		}

		::System::Void OnOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ONOPEN_OFFSET))(nullptr);
		}

		::System::Void OnClickCacheClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ONCLICKCACHECLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickInitGamesetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ONCLICKINITGAMESETTING_OFFSET))(nullptr);
		}

		::System::Void SetActiveNoticeButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_SETACTIVENOTICEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCompleteCacheClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_ONCLICKCOMPLETECACHECLEAR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickNotice_b__20_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETDATACLEARMENU__ONCLICKNOTICE_B__20_2_OFFSET))(nullptr);
		}

	};

