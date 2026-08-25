#pragma once
#include "unitysdk.h"

class UIMailBoxTabController;
class ButtonActivator;
class MXButton;
class UISprite;
class UILabel;
namespace UnityEngine { class GameObject; }
class MailBoxScrollController;
class MailBoxSortDisplay;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class MailBoxCategory;

#define UIMAILBOX_AWAKE_OFFSET UNITYSDK_OFFSET(0x26868F0)
#define UIMAILBOX_ONCLICKITEMINVENTORY_OFFSET UNITYSDK_OFFSET(0x2686CB0)
#define UIMAILBOX_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x2686D60)
#define UIMAILBOX_UPDATESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x26872D0)
#define UIMAILBOX_HANDLEMAILRECEIVESEMIPERMANENTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2687510)
#define UIMAILBOX_REFRESH_OFFSET UNITYSDK_OFFSET(0x2687890)
#define UIMAILBOX_REFRESHDISPLAY_OFFSET UNITYSDK_OFFSET(0x2686E60)
#define UIMAILBOX_HANDLEMAILLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2687A20)
#define UIMAILBOX_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2687B20)
#define UIMAILBOX_GET_SORTDISPLAY_OFFSET UNITYSDK_OFFSET(0x26879B0)
#define UIMAILBOX_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2686DF0)
#define UIMAILBOX_UPDATEMAILLIST_OFFSET UNITYSDK_OFFSET(0x26875A0)
#define UIMAILBOX_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2687BB0)
#define UIMAILBOX_HANDLEMAILLISTSEMIPERMANENTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2687DC0)
#define UIMAILBOX_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x2687EC0)
#define UIMAILBOX_ONCLICKRECEIVEALL_OFFSET UNITYSDK_OFFSET(0x2687EE0)
#define UIMAILBOX_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2687F70)
#define UIMAILBOX_SETTABUNREADSEMIPERMANENT_OFFSET UNITYSDK_OFFSET(0x2688260)
#define UIMAILBOX_HANDLEMAILRECEIVERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26882B0)
#define UIMAILBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x2688340)
#define UIMAILBOX___N__0_OFFSET UNITYSDK_OFFSET(0x2688350)
#define UIMAILBOX_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x2688360)

	inline static constexpr unsigned int UIMailBox_TypeDefinitionIndex = 6766;

	class UIMailBox : public Il2CppObject
	{
	public:
		UIMailBoxTabController* tabController; // 0xD8
		ButtonActivator* receiveAllButton; // 0xE0
		MXButton* itemInventoryButton; // 0xE8
		UISprite* itemInventoryReddot; // 0xF0
		MXButton* backButton; // 0xF8
		UILabel* amountLabel; // 0x100
		::UnityEngine::GameObject* empty; // 0x108
		UILabel* noticeMailLabel; // 0x110
		MailBoxScrollController* _scrollController; // 0x118
		MailBoxSortDisplay* _sortDisplay; // 0x120

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickItemInventory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_ONCLICKITEMINVENTORY_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void UpdateScrollView(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_UPDATESCROLLVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleMailReceiveSemiPermanentResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_HANDLEMAILRECEIVESEMIPERMANENTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RefreshDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_REFRESHDISPLAY_OFFSET))(nullptr);
		}

		::System::Boolean HandleMailListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_HANDLEMAILLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_CO_LOADING_OFFSET))(nullptr);
		}

		MailBoxSortDisplay* get_SortDisplay()
		{
			return ((MailBoxSortDisplay*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_GET_SORTDISPLAY_OFFSET))(nullptr);
		}

		MailBoxScrollController* get_ScrollController()
		{
			return ((MailBoxScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void UpdateMailList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_UPDATEMAILLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMailListSemiPermanentResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_HANDLEMAILLISTSEMIPERMANENTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_ONCLICKRECEIVEALL_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetTabUnreadSemiPermanent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_SETTABUNREADSEMIPERMANENT_OFFSET))(nullptr);
		}

		::System::Boolean HandleMailReceiveResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_HANDLEMAILRECEIVERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX___N__0_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, MailBoxCategory* arg2)
		{
			((::System::Void(*)(::System::Boolean, MailBoxCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIMAILBOX_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

