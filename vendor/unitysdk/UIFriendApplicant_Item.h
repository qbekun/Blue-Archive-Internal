#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICharacterCard;
class UITexture;
class MXButton;
class UIFriendApplicantListController;
namespace MX::GameLogic::DBModel { class FriendDB; }
class FriendTab;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_System;

#define UIFRIENDAPPLICANT_ITEM__ONCLICKUNBLOCKREQ_B__16_1_OFFSET UNITYSDK_OFFSET(0x257B280)
#define UIFRIENDAPPLICANT_ITEM_SETCHARACTERCARD_OFFSET UNITYSDK_OFFSET(0x257B320)
#define UIFRIENDAPPLICANT_ITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x257B8F0)
#define UIFRIENDAPPLICANT_ITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x257BBC0)
#define UIFRIENDAPPLICANT_ITEM_ONCLICKUNBLOCKREQ_OFFSET UNITYSDK_OFFSET(0x257BD50)
#define UIFRIENDAPPLICANT_ITEM_ONCLICKSENDREQ_OFFSET UNITYSDK_OFFSET(0x257BE30)
#define UIFRIENDAPPLICANT_ITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x257BF90)
#define UIFRIENDAPPLICANT_ITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x257BFA0)
#define UIFRIENDAPPLICANT_ITEM_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0x257C120)
#define UIFRIENDAPPLICANT_ITEM_GET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x257C370)
#define UIFRIENDAPPLICANT_ITEM_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x257C380)
#define UIFRIENDAPPLICANT_ITEM__ONCLICKUNBLOCKREQ_B__16_0_OFFSET UNITYSDK_OFFSET(0x257C400)

	inline static constexpr unsigned int UIFriendApplicant_Item_TypeDefinitionIndex = 6191;

	class UIFriendApplicant_Item : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* friendRoot; // 0x98
		::UnityEngine::GameObject* blockRoot; // 0xA0
		UICharacterCard* characterCard; // 0xA8
		UITexture* blockUserRepresentativeThumbnail; // 0xB0
		::UnityEngine::GameObject* friendCountRoot; // 0xB8
		::UnityEngine::GameObject* requestFinishedButton; // 0xC0
		MXButton* unblockRequestButton; // 0xC8
		UIFriendApplicantListController* applicantListController; // 0xD0

		::System::Void _OnClickUnblockReq_b__16_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM__ONCLICKUNBLOCKREQ_B__16_1_OFFSET))(nullptr);
		}

		::System::Void SetCharacterCard(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_SETCHARACTERCARD_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickUnblockReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_ONCLICKUNBLOCKREQ_OFFSET))(nullptr);
		}

		::System::Void OnClickSendReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_ONCLICKSENDREQ_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_SETBUTTONS_OFFSET))(nullptr);
		}

		FriendTab* get_CurrentTab()
		{
			return ((FriendTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_GET_CURRENTTAB_OFFSET))(nullptr);
		}

		::System::Boolean HandleFriendDBsSyncNetworkResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickUnblockReq_b__16_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDAPPLICANT_ITEM__ONCLICKUNBLOCKREQ_B__16_0_OFFSET))(arg, nullptr);
		}

	};

