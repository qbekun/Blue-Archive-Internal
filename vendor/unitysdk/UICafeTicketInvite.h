#pragma once
#include "unitysdk.h"

class OpenConditionButtonController;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace MX::GameLogic::DBModel { class ShopProductDB; }
namespace UnityEngine { class Coroutine; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICAFETICKETINVITE_AWAKE_OFFSET UNITYSDK_OFFSET(0x228CC00)
#define UICAFETICKETINVITE_REFRESHTIMELABEL_OFFSET UNITYSDK_OFFSET(0x228CEE0)
#define UICAFETICKETINVITE_ONCLICKOFF_OFFSET UNITYSDK_OFFSET(0x228D250)
#define UICAFETICKETINVITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x228D490)
#define UICAFETICKETINVITE_ONCLICKCANUSE_OFFSET UNITYSDK_OFFSET(0x228D4A0)
#define UICAFETICKETINVITE_SYNCSHOPLIST_OFFSET UNITYSDK_OFFSET(0x228D6B0)
#define UICAFETICKETINVITE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x228D8F0)
#define UICAFETICKETINVITE_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x228D9F0)
#define UICAFETICKETINVITE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x228DA60)
#define UICAFETICKETINVITE_STARTTIMER_OFFSET UNITYSDK_OFFSET(0x228DAF0)
#define UICAFETICKETINVITE_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x228DC20)
#define UICAFETICKETINVITE_HASCURRENTCAFEPURCHASEDTICKET_OFFSET UNITYSDK_OFFSET(0x228E650)
#define UICAFETICKETINVITE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x228E660)
#define UICAFETICKETINVITE_SET_LOADTEXTURECOMPLETE_OFFSET UNITYSDK_OFFSET(0x228E7A0)
#define UICAFETICKETINVITE_REFRESH_OFFSET UNITYSDK_OFFSET(0x228E7B0)
#define UICAFETICKETINVITE_GET_LOADTEXTURECOMPLETE_OFFSET UNITYSDK_OFFSET(0x228E850)
#define UICAFETICKETINVITE_SETTICKETTEXTURE_OFFSET UNITYSDK_OFFSET(0x228E3D0)
#define UICAFETICKETINVITE_TIMER_OFFSET UNITYSDK_OFFSET(0x228DBB0)
#define UICAFETICKETINVITE_HANDLESHOPLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0x228E880)
#define UICAFETICKETINVITE_ONCLICKCANBUY_OFFSET UNITYSDK_OFFSET(0x228EAF0)

	inline static constexpr unsigned int UICafeTicketInvite_TypeDefinitionIndex = 4699;

	class UICafeTicketInvite : public Il2CppObject
	{
	public:
		OpenConditionButtonController* openCondition; // 0x18
		MXButton* canBuyButton; // 0x20
		MXButton* canUseButton; // 0x28
		MXButton* offButton; // 0x30
		UILabel* timeLabel; // 0x38
		::UnityEngine::GameObject* canBuyRoot; // 0x40
		::UnityEngine::GameObject* canUseRoot; // 0x48
		::UnityEngine::GameObject* offRoot; // 0x50
		::Il2CppArray<::System::Object*>* ticketImages; // 0x58
		::System::Boolean _LoadTextureComplete_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::ShopInfoDB* shopInfo; // 0x68
		::MX::GameLogic::DBModel::ShopProductDB* currentCafeTicketProduct; // 0x70
		::UnityEngine::Coroutine* timer; // 0x78
		::System::Boolean hasTicket; // 0x80
		::System::Int64 currentCafeId; // 0x88
		::System::DateTime* nextRefreshDateCache; // 0x90
		::System::Boolean onLoading; // 0x98
		::System::Boolean syncComplete; // 0x99

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshTimeLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_REFRESHTIMELABEL_OFFSET))(nullptr);
		}

		::System::Void OnClickOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_ONCLICKOFF_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCanUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_ONCLICKCANUSE_OFFSET))(nullptr);
		}

		::System::Void SyncShopList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_SYNCSHOPLIST_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void StartTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_STARTTIMER_OFFSET))(nullptr);
		}

		::System::Void RefreshButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_REFRESHBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HasCurrentCafePurchasedTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_HASCURRENTCAFEPURCHASEDTICKET_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_LoadTextureComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_SET_LOADTEXTURECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean get_LoadTextureComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_GET_LOADTEXTURECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void SetTicketTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_SETTICKETTEXTURE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Timer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_TIMER_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopListResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_HANDLESHOPLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCanBuy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETICKETINVITE_ONCLICKCANBUY_OFFSET))(nullptr);
		}

	};

