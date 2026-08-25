#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
class UITable;
class MXButton;
namespace UnityEngine { class GameObject; }
class EventDelegate;

#define UITITLEACCOUNTMENU_ONCLICKQR_OFFSET UNITYSDK_OFFSET(0xB71D30)
#define UITITLEACCOUNTMENU_AWAKE_OFFSET UNITYSDK_OFFSET(0xB71DD0)
#define UITITLEACCOUNTMENU_ONDELINK_OFFSET UNITYSDK_OFFSET(0xB71F10)
#define UITITLEACCOUNTMENU_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0xB72070)
#define UITITLEACCOUNTMENU_SETOPTIONBUTTON_OFFSET UNITYSDK_OFFSET(0xB72210)
#define UITITLEACCOUNTMENU_CREATETABLE_OFFSET UNITYSDK_OFFSET(0xB71DE0)
#define UITITLEACCOUNTMENU_ONCLICKSERVICEID_OFFSET UNITYSDK_OFFSET(0xB724F0)
#define UITITLEACCOUNTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xB725A0)
#define UITITLEACCOUNTMENU_SETQRBUTTON_OFFSET UNITYSDK_OFFSET(0xB72880)
#define UITITLEACCOUNTMENU_SETTINGMOBILEACCOUNT_OFFSET UNITYSDK_OFFSET(0xB72950)
#define UITITLEACCOUNTMENU_SETTINGSTEAMACCOUNT_OFFSET UNITYSDK_OFFSET(0xB6FD90)
#define UITITLEACCOUNTMENU_SETSERVICEIDBUTTON_OFFSET UNITYSDK_OFFSET(0xB72BD0)
#define UITITLEACCOUNTMENU_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB72CA0)
#define UITITLEACCOUNTMENU_ONCLICKOPTION_OFFSET UNITYSDK_OFFSET(0xB72F10)
#define UITITLEACCOUNTMENU_SETBUTTON_OFFSET UNITYSDK_OFFSET(0xB722E0)

	inline static constexpr unsigned int UITitleAccountMenu_TypeDefinitionIndex = 8471;

	class UITitleAccountMenu : public Il2CppObject
	{
	public:
		::System::Single _tableY; // 0x18
		::System::Int32 _tableColumn; // 0x1C
		::UnityEngine::Vector2* _tablePadding; // 0x20
		Il2CppObject* _bgBaseHeights; // 0x28
		Il2CppObject* _exceptButtons; // 0x30
		UITable* _topButtonTable; // 0x38
		MXButton* steamAccount; // 0x40
		MXButton* steamDelink; // 0x48
		MXButton* mobileAccount; // 0x50
		MXButton* optionButton; // 0x58
		MXButton* serviceIdButton; // 0x60
		MXButton* QRButton; // 0x68

		::System::Void OnClickQR()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_ONCLICKQR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDelink()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_ONDELINK_OFFSET))(nullptr);
		}

		::System::Void SetHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_SETHEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetOptionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_SETOPTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void CreateTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_CREATETABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickServiceId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_ONCLICKSERVICEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetQRButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_SETQRBUTTON_OFFSET))(nullptr);
		}

		::System::Void SettingMobileAccount(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_SETTINGMOBILEACCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SettingSteamAccount(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_SETTINGSTEAMACCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetServiceIdButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_SETSERVICEIDBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_ONCLICKOPTION_OFFSET))(nullptr);
		}

		::System::Void SetButton(::System::String* str, MXButton&* arg, ::System::String* str2, EventDelegate* arg2)
		{
			((::System::Void(*)(::System::String*, MXButton&*, ::System::String*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEACCOUNTMENU_SETBUTTON_OFFSET))(str, arg, str2, arg2, nullptr);
		}

	};

