#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICharacterCard;
class ClanChatText;
class UIWidget;
class ClanChatEmoji;
class UILabel;
class ClanChatNotice;
class UIEmblemParcel;
namespace MX::GameLogic::Chat { class IrcMessageType; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }

#define UICLANSCRIPTCHATUNIT_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x2341810)
#define UICLANSCRIPTCHATUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x2341860)
#define UICLANSCRIPTCHATUNIT_GETTOP_OFFSET UNITYSDK_OFFSET(0x2341A10)
#define UICLANSCRIPTCHATUNIT_GETBOTTOM_OFFSET UNITYSDK_OFFSET(0x2341930)
#define UICLANSCRIPTCHATUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2341A20)
#define UICLANSCRIPTCHATUNIT_SETCHAT_OFFSET UNITYSDK_OFFSET(0x2340C40)

	inline static constexpr unsigned int UIClanScriptChatUnit_TypeDefinitionIndex = 4976;

	class UIClanScriptChatUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* chatObject; // 0x50
		UICharacterCard* clanChatMemberCharacterCard; // 0x58
		ClanChatText* myClanChatText; // 0x60
		UIWidget* myClanChatTextBG; // 0x68
		ClanChatEmoji* myClanChatImage; // 0x70
		ClanChatText* otherClanChatText; // 0x78
		UIWidget* otherClanChatTextBG; // 0x80
		ClanChatEmoji* otherClanChatImage; // 0x88
		UILabel* clanChatMemberNickName; // 0x90
		::UnityEngine::GameObject* clanLocalNotice; // 0x98
		UIWidget* clanLocalNoticeTextBG; // 0xA0
		ClanChatNotice* clanChatNotice; // 0xA8
		UIEmblemParcel* clanChatEmblemParcel; // 0xB0
		::System::Int32 chatHeightChat; // 0xB8
		::System::Int32 chatHeightEmoji; // 0xBC
		::System::Int32 chatHeightNotice; // 0xC0
		::System::Int32 chatHeightLocalNotice; // 0xC4
		::System::Int32 LocalNoticeTextHeightBG; // 0xC8
		::MX::GameLogic::Chat::IrcMessageType* messageType; // 0xCC
		::System::Int32 ChatTextHeightBG; // 0xD0

		::System::Int32 GetHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATUNIT_GETHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		UIWidget* GetTop()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATUNIT_GETTOP_OFFSET))(nullptr);
		}

		UIWidget* GetBottom()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATUNIT_GETBOTTOM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetChat(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATUNIT_SETCHAT_OFFSET))(arg, nullptr);
		}

	};

