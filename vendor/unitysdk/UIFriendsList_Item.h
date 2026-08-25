#pragma once
#include "unitysdk.h"

class FriendTab;
class UIPopup_System;
namespace MX::GameLogic::DBModel { class FriendDB; }

#define UIFRIENDSLIST_ITEM__ONCLICKDECLINEREQ_G__SENDDECLINEREQUEST|10_1_OFFSET UNITYSDK_OFFSET(0x2570F90)
#define UIFRIENDSLIST_ITEM__ONCLICKDELETEFRIEND_B__7_0_OFFSET UNITYSDK_OFFSET(0x2571030)
#define UIFRIENDSLIST_ITEM_ONCLICKDECLINEREQ_OFFSET UNITYSDK_OFFSET(0x2571120)
#define UIFRIENDSLIST_ITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2571200)
#define UIFRIENDSLIST_ITEM_SET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x25719A0)
#define UIFRIENDSLIST_ITEM_ONCLICKWITHDRAWREQ_OFFSET UNITYSDK_OFFSET(0x25719B0)
#define UIFRIENDSLIST_ITEM_ONCLICKSENDREQ_OFFSET UNITYSDK_OFFSET(0x2571A50)
#define UIFRIENDSLIST_ITEM_ONCLICKACCEPTREQ_OFFSET UNITYSDK_OFFSET(0x2571B60)
#define UIFRIENDSLIST_ITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2571C00)
#define UIFRIENDSLIST_ITEM_SETCHARACTERCARD_OFFSET UNITYSDK_OFFSET(0x2571C80)
#define UIFRIENDSLIST_ITEM__ONCLICKDECLINEREQ_B__10_0_OFFSET UNITYSDK_OFFSET(0x2571D60)
#define UIFRIENDSLIST_ITEM_GET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x2571E50)
#define UIFRIENDSLIST_ITEM_ONCLICKDELETEFRIEND_OFFSET UNITYSDK_OFFSET(0x2571E60)
#define UIFRIENDSLIST_ITEM_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0x2571F40)
#define UIFRIENDSLIST_ITEM__ONCLICKDELETEFRIEND_G__SENDDELETEREQUEST|7_1_OFFSET UNITYSDK_OFFSET(0x2572540)

	inline static constexpr unsigned int UIFriendsList_Item_TypeDefinitionIndex = 6156;

	class UIFriendsList_Item : public Il2CppObject
	{
	public:
		FriendTab* currentTab; // 0x98

		::System::Void _OnClickDeclineReq_g__SendDeclineRequest|10_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM__ONCLICKDECLINEREQ_G__SENDDECLINEREQUEST|10_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickDeleteFriend_b__7_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM__ONCLICKDELETEFRIEND_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDeclineReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_ONCLICKDECLINEREQ_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTab(FriendTab* arg)
		{
			((::System::Void(*)(FriendTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_SET_CURRENTTAB_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickWithdrawReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_ONCLICKWITHDRAWREQ_OFFSET))(nullptr);
		}

		::System::Void OnClickSendReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_ONCLICKSENDREQ_OFFSET))(nullptr);
		}

		::System::Void OnClickAcceptReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_ONCLICKACCEPTREQ_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCharacterCard(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_SETCHARACTERCARD_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickDeclineReq_b__10_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM__ONCLICKDECLINEREQ_B__10_0_OFFSET))(arg, nullptr);
		}

		FriendTab* get_CurrentTab()
		{
			return ((FriendTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_GET_CURRENTTAB_OFFSET))(nullptr);
		}

		::System::Void OnClickDeleteFriend()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_ONCLICKDELETEFRIEND_OFFSET))(nullptr);
		}

		::System::Void SetButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM_SETBUTTONS_OFFSET))(nullptr);
		}

		::System::Void _OnClickDeleteFriend_g__SendDeleteRequest|7_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLIST_ITEM__ONCLICKDELETEFRIEND_G__SENDDELETEREQUEST|7_1_OFFSET))(nullptr);
		}

	};

