#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class MXButton;
class UIEmblemParcel;
class FriendTab;
namespace MX::GameLogic::DBModel { class FriendDB; }

#define UIFRIENDSLIST_ITEMBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2571C40)
#define UIFRIENDSLIST_ITEMBASE_SETCHARACTERCARD_OFFSET UNITYSDK_OFFSET(0x25726B0)
#define UIFRIENDSLIST_ITEMBASE_SETDATA_OFFSET UNITYSDK_OFFSET(0x25726C0)
#define UIFRIENDSLIST_ITEMBASE_GET_USERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2572A20)
#define UIFRIENDSLIST_ITEMBASE_SET_USERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2572A30)
#define UIFRIENDSLIST_ITEMBASE_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0x2572A40)
#define UIFRIENDSLIST_ITEMBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2571820)
#define UIFRIENDSLIST_ITEMBASE_GET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x2572A50)
#define UIFRIENDSLIST_ITEMBASE_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x2572A60)
#define UIFRIENDSLIST_ITEMBASE_SET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x2572B00)

	inline static constexpr unsigned int UIFriendsList_ItemBase_TypeDefinitionIndex = 6157;

	class UIFriendsList_ItemBase : public ::System::Xml::Res
	{
	public:
		UITexture* representativeThumbnail; // 0x28
		UILabel* userName; // 0x30
		UILabel* userRank; // 0x38
		UILabel* friendCount; // 0x40
		UILabel* lastConnect; // 0x48
		MXButton* deleteButton; // 0x50
		MXButton* withdrawRequestButton; // 0x58
		MXButton* acceptRequestButton; // 0x60
		MXButton* declineRequestButton; // 0x68
		MXButton* sendRequestButton; // 0x70
		MXButton* infoButton; // 0x78
		UIEmblemParcel* emblemParcel; // 0x80
		FriendTab* _CurrentTab_k__BackingField; // 0x88
		::System::Int64 _UserAccountId_k__BackingField; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCharacterCard(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_SETCHARACTERCARD_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UserAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_GET_USERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_UserAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_SET_USERACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_SETBUTTONS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_AWAKE_OFFSET))(nullptr);
		}

		FriendTab* get_CurrentTab()
		{
			return ((FriendTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_GET_CURRENTTAB_OFFSET))(nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTab(FriendTab* arg)
		{
			((::System::Void(*)(FriendTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEMBASE_SET_CURRENTTAB_OFFSET))(arg, nullptr);
		}

	};

