#pragma once
#include "unitysdk.h"

class TweenPosition;
class MXButton;
class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UITOP_REFRESHCURRENCY_OFFSET UNITYSDK_OFFSET(0xB784A0)
#define UITOP_ONOTHERUIOPENSTART_OFFSET UNITYSDK_OFFSET(0xB78CF0)
#define UITOP_ONCLICKMENU_OFFSET UNITYSDK_OFFSET(0xB78E80)
#define UITOP_HANDLESHOWUSERCENTERWATCHEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xB78F30)
#define UITOP_HANDLEFRIENDCHECKNETWORKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB790B0)
#define UITOP_ONCLICKLOBBYCHARACTERSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0xB79120)
#define UITOP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB792C0)
#define UITOP_ONCLICKMAIL_OFFSET UNITYSDK_OFFSET(0xB79590)
#define UITOP_ONCLICKOPTION_OFFSET UNITYSDK_OFFSET(0xB79710)
#define UITOP_ONCLICKLOBBY_OFFSET UNITYSDK_OFFSET(0xB79810)
#define UITOP_PLAYTWEEN_OFFSET UNITYSDK_OFFSET(0xB78DC0)
#define UITOP_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB798A0)
#define UITOP_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0xB78FA0)
#define UITOP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB798B0)
#define UITOP_ONCURRENCYUPDATE_OFFSET UNITYSDK_OFFSET(0xB79FB0)
#define UITOP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB79FC0)
#define UITOP_GET_DISPLAYLIST_OFFSET UNITYSDK_OFFSET(0xB78930)
#define UITOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7A240)
#define UITOP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB7A250)
#define UITOP_UPDATE_OFFSET UNITYSDK_OFFSET(0xB7A3D0)

	inline static constexpr unsigned int UITop_TypeDefinitionIndex = 8495;

	class UITop : public Il2CppObject
	{
	public:
		TweenPosition* tween; // 0x18
		::System::Single openTweenDelay; // 0x20
		MXButton* menuButton; // 0x28
		MXButton* optionButton; // 0x30
		MXButton* mailButton; // 0x38
		MXButton* lobbyButton; // 0x40
		MXButton* lobbyCharacterSelectButton; // 0x48
		UISprite* menuReddotSprite; // 0x50
		::System::TimeSpan* AutoChargeTime; // 0x58
		::System::DateTime* LastChargeTime; // 0x60
		Il2CppObject* _displayList; // 0x68

		::System::Void RefreshCurrency()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_REFRESHCURRENCY_OFFSET))(nullptr);
		}

		::System::Boolean OnOtherUIOpenStart(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONOTHERUIOPENSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMenu()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONCLICKMENU_OFFSET))(nullptr);
		}

		::System::Boolean HandleShowUserCenterWatchedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITOP_HANDLESHOWUSERCENTERWATCHEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleFriendCheckNetworkResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITOP_HANDLEFRIENDCHECKNETWORKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickLobbyCharacterSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONCLICKLOBBYCHARACTERSELECTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickMail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONCLICKMAIL_OFFSET))(nullptr);
		}

		::System::Void OnClickOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONCLICKOPTION_OFFSET))(nullptr);
		}

		::System::Void OnClickLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONCLICKLOBBY_OFFSET))(nullptr);
		}

		::System::Void PlayTween(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITOP_PLAYTWEEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITOP_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_REFRESHREDDOT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnCurrencyUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONCURRENCYUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_displayList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_GET_DISPLAYLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOP_UPDATE_OFFSET))(nullptr);
		}

	};

