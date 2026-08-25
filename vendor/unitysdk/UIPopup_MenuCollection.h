#pragma once
#include "unitysdk.h"

class MXButton;
class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_MENUCOLLECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x276CDC0)
#define UIPOPUP_MENUCOLLECTION_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIPOPUP_MENUCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x276CF30)
#define UIPOPUP_MENUCOLLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x276CF40)
#define UIPOPUP_MENUCOLLECTION_REPOSITIONGRID_OFFSET UNITYSDK_OFFSET(0x276D050)
#define UIPOPUP_MENUCOLLECTION__OPEN_B__26_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIPOPUP_MENUCOLLECTION_ONCLICKDISCORD_OFFSET UNITYSDK_OFFSET(0x276D340)
#define UIPOPUP_MENUCOLLECTION_ONCLICKEQUIPMENTINVENTORY_OFFSET UNITYSDK_OFFSET(0x276D3F0)
#define UIPOPUP_MENUCOLLECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x276D430)
#define UIPOPUP_MENUCOLLECTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x276DCF0)
#define UIPOPUP_MENUCOLLECTION_ONCLICKACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x276E010)
#define UIPOPUP_MENUCOLLECTION_ONCLICKITEMINVENTORY_OFFSET UNITYSDK_OFFSET(0x276E0C0)
#define UIPOPUP_MENUCOLLECTION_ONCLICKGAMESETTINGS_OFFSET UNITYSDK_OFFSET(0x276E100)
#define UIPOPUP_MENUCOLLECTION_ONCLICKSTICKER_OFFSET UNITYSDK_OFFSET(0x276E200)
#define UIPOPUP_MENUCOLLECTION_ONCLICKTITLE_OFFSET UNITYSDK_OFFSET(0x276E240)
#define UIPOPUP_MENUCOLLECTION_ONCLICKFRIEND_OFFSET UNITYSDK_OFFSET(0x276E3A0)
#define UIPOPUP_MENUCOLLECTION_HANDLESHOWUSERCENTERWATCHEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x276E410)
#define UIPOPUP_MENUCOLLECTION_ONCLICKATTENDANCE_OFFSET UNITYSDK_OFFSET(0x276E480)
#define UIPOPUP_MENUCOLLECTION_HANDLEITEMCLOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIPOPUP_MENUCOLLECTION_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0x276DE10)

	inline static constexpr unsigned int UIPopup_MenuCollection_TypeDefinitionIndex = 7337;

	class UIPopup_MenuCollection : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* gameSettingsButton; // 0xE0
		MXButton* equipmentInventoryButton; // 0xE8
		MXButton* itemInventoryButton; // 0xF0
		MXButton* accountSettingsButton; // 0xF8
		MXButton* stickerButton; // 0x100
		MXButton* discordButton; // 0x108
		MXButton* titleButton; // 0x110
		UISprite* accountSettingsReddotSprite; // 0x118
		UISprite* itemInventoryReddot; // 0x120
		UISprite* stickerReddot; // 0x128
		MXButton* attendanceButton; // 0x130
		::Il2CppArray<::System::Object*>* openConditionButtons; // 0x138

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_OPEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RepositionGrid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_REPOSITIONGRID_OFFSET))(nullptr);
		}

		::System::Void _Open_b__26_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION__OPEN_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDiscord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKDISCORD_OFFSET))(nullptr);
		}

		::System::Void OnClickEquipmentInventory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKEQUIPMENTINVENTORY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAccountSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKACCOUNTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void OnClickItemInventory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKITEMINVENTORY_OFFSET))(nullptr);
		}

		::System::Void OnClickGameSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKGAMESETTINGS_OFFSET))(nullptr);
		}

		::System::Void OnClickSticker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKSTICKER_OFFSET))(nullptr);
		}

		::System::Void OnClickTitle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKTITLE_OFFSET))(nullptr);
		}

		::System::Void OnClickFriend()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKFRIEND_OFFSET))(nullptr);
		}

		::System::Boolean HandleShowUserCenterWatchedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_HANDLESHOWUSERCENTERWATCHEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAttendance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_ONCLICKATTENDANCE_OFFSET))(nullptr);
		}

		::System::Boolean HandleItemClosed(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_HANDLEITEMCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MENUCOLLECTION_REFRESHREDDOT_OFFSET))(nullptr);
		}

	};

