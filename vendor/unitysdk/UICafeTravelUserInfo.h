#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UIEmblemParcel;
class MXButton;
class MXDualStateButton;
namespace MX::GameLogic::DBModel { class FriendDB; }
class FriendDBsSyncNetworkResponseMessage;

#define UICAFETRAVELUSERINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2290A30)
#define UICAFETRAVELUSERINFO_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2290B00)
#define UICAFETRAVELUSERINFO_ONCLICKWITHDRAWREQ_OFFSET UNITYSDK_OFFSET(0x2290C90)
#define UICAFETRAVELUSERINFO_ONCLICKSENDREQ_OFFSET UNITYSDK_OFFSET(0x2290D30)
#define UICAFETRAVELUSERINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2290EA0)
#define UICAFETRAVELUSERINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2290F70)
#define UICAFETRAVELUSERINFO_ONCLICKCOPYFURNITURE_OFFSET UNITYSDK_OFFSET(0x2291340)
#define UICAFETRAVELUSERINFO_ONCLICKDISABLE_OFFSET UNITYSDK_OFFSET(0x22913F0)
#define UICAFETRAVELUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2291550)
#define UICAFETRAVELUSERINFO_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x2291560)
#define UICAFETRAVELUSERINFO_ONCLICKDISABLEDCOPYFURNITURE_OFFSET UNITYSDK_OFFSET(0x2291610)
#define UICAFETRAVELUSERINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2291770)
#define UICAFETRAVELUSERINFO_GETLASTCONNECTTIME_OFFSET UNITYSDK_OFFSET(0x2291160)
#define UICAFETRAVELUSERINFO_UPDATEFRIENDBUTTON_OFFSET UNITYSDK_OFFSET(0x2290B10)

	inline static constexpr unsigned int UICafeTravelUserInfo_TypeDefinitionIndex = 4706;

	class UICafeTravelUserInfo : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x18
		UILabel* userName; // 0x20
		UILabel* userAccountLV; // 0x28
		UILabel* friendCount; // 0x30
		UILabel* userGameLoginPeriod; // 0x38
		UIEmblemParcel* emblemParcel; // 0x40
		MXButton* infoButton; // 0x48
		MXButton* sendRequestButton; // 0x50
		MXButton* withdrawRequestButton; // 0x58
		MXButton* disableButton; // 0x60
		MXDualStateButton* copyFurnitureButton; // 0x68
		::MX::GameLogic::DBModel::FriendDB* friendData; // 0x70

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleFriendDBsSyncNetworkResponseMessage(FriendDBsSyncNetworkResponseMessage* arg)
		{
			return ((::System::Boolean(*)(FriendDBsSyncNetworkResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickWithdrawReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONCLICKWITHDRAWREQ_OFFSET))(nullptr);
		}

		::System::Void OnClickSendReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONCLICKSENDREQ_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCopyFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONCLICKCOPYFURNITURE_OFFSET))(nullptr);
		}

		::System::Void OnClickDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONCLICKDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickDisabledCopyFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_ONCLICKDISABLEDCOPYFURNITURE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::String* GetLastConnectTime(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_GETLASTCONNECTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateFriendButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETRAVELUSERINFO_UPDATEFRIENDBUTTON_OFFSET))(nullptr);
		}

	};

