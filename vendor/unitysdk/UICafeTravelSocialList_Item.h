#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UIEmblemParcel;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class FriendDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
class SocialList;
class CafeSocialUserObject;

#define UICAFETRAVELSOCIALLIST_ITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x226C990)
#define UICAFETRAVELSOCIALLIST_ITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x226C9D0)
#define UICAFETRAVELSOCIALLIST_ITEM_SETCLANMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x226CB10)
#define UICAFETRAVELSOCIALLIST_ITEM_ONCLICKTRAVELBUTTON_OFFSET UNITYSDK_OFFSET(0x226CF70)
#define UICAFETRAVELSOCIALLIST_ITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x226D070)
#define UICAFETRAVELSOCIALLIST_ITEM_GETLASTCONNECTTIME_OFFSET UNITYSDK_OFFSET(0x226CD90)
#define UICAFETRAVELSOCIALLIST_ITEM_SETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x226D0B0)

	inline static constexpr unsigned int UICafeTravelSocialList_Item_TypeDefinitionIndex = 4618;

	class UICafeTravelSocialList_Item : public ::System::Xml::Ucs4Encoding4321
	{
	public:
		UICharacterCard* characterCard; // 0x28
		UILabel* userName; // 0x30
		UILabel* userAccountLV; // 0x38
		UILabel* userGameLoginPeriod; // 0x40
		UIEmblemParcel* emblemParcel; // 0x48
		MXButton* travelButton; // 0x50
		::UnityEngine::GameObject* alreadyHereIndicator; // 0x58
		::MX::GameLogic::DBModel::FriendDB* friendData; // 0x60
		::MX::GameLogic::DBModel::ClanMemberDB* clanMemberData; // 0x68
		SocialList* currentList; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELSOCIALLIST_ITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELSOCIALLIST_ITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetClanMemberData(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELSOCIALLIST_ITEM_SETCLANMEMBERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickTravelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELSOCIALLIST_ITEM_ONCLICKTRAVELBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(CafeSocialUserObject* arg)
		{
			((::System::Void(*)(CafeSocialUserObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELSOCIALLIST_ITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::String* GetLastConnectTime(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELSOCIALLIST_ITEM_GETLASTCONNECTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SetFriendData(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELSOCIALLIST_ITEM_SETFRIENDDATA_OFFSET))(arg, nullptr);
		}

	};

