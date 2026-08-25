#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UIProductDailyRecordScrollViewController;
class MXButton;
namespace MX::NetworkProtocol { class DailyRecordRewardResponse; }

#define UIPOPUP_PRODUCTDAILYRECORDREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x267B690)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_HASDAILYRECORDPRODUCTINMAILPURCHASE_OFFSET UNITYSDK_OFFSET(0x267C3D0)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_SHOWPURCHASENOTICE_OFFSET UNITYSDK_OFFSET(0x267C470)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_SYNCDAILYRECORDDB_OFFSET UNITYSDK_OFFSET(0x267C170)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x267CEF0)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD__ONCLICKPURCHASE_B__28_0_OFFSET UNITYSDK_OFFSET(0x267CF10)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x267CFE0)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x267D000)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x267D390)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_ONCLICKPURCHASE_OFFSET UNITYSDK_OFFSET(0x267D3A0)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD__ONCLICKRECEIVE_B__29_0_OFFSET UNITYSDK_OFFSET(0x267D500)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x267D690)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_ONCLICKRECEIVE_OFFSET UNITYSDK_OFFSET(0x267D720)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x267D890)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD_ONCLICKWAIT_OFFSET UNITYSDK_OFFSET(0x267D920)
#define UIPOPUP_PRODUCTDAILYRECORDREWARD___N__0_OFFSET UNITYSDK_OFFSET(0x267DB10)

	inline static constexpr unsigned int UIPopup_ProductDailyRecordReward_TypeDefinitionIndex = 6732;

	class UIPopup_ProductDailyRecordReward : public Il2CppObject
	{
	public:
		UILabel* _periodLabel; // 0xD8
		::UnityEngine::GameObject* _periodObject; // 0xE0
		UILabel* _periodEndObject; // 0xE8
		Il2CppObject* _directRewardParcels; // 0xF0
		UIProductDailyRecordScrollViewController* _scrollViewController; // 0xF8
		UILabel* _descriptionLabel; // 0x100
		UILabel* _descriptionLabel_global; // 0x108
		UILabel* _priceLabel; // 0x110
		MXButton* _receiveButton; // 0x118
		MXButton* _purchaseButton; // 0x120
		MXButton* _waitButton; // 0x128
		::UnityEngine::GameObject* _receiveButtonObject; // 0x130
		::UnityEngine::GameObject* _receiveButtonDisableObject; // 0x138
		::UnityEngine::GameObject* _purchaseButtonObject; // 0x140
		::UnityEngine::GameObject* _waitButtonObject; // 0x148
		::Il2CppArray<::System::Object*>* costCodeLabels; // 0x150
		::Il2CppArray<::System::Object*>* priceLabels; // 0x158
		::System::Action* _updateLobbyButtonCallback; // 0x160
		::System::Int64 _shopCashId; // 0x168

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasDailyRecordProductInMailPurchase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_HASDAILYRECORDPRODUCTINMAILPURCHASE_OFFSET))(nullptr);
		}

		::System::Void ShowPurchaseNotice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_SHOWPURCHASENOTICE_OFFSET))(nullptr);
		}

		::System::Void SyncDailyRecordDB()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_SYNCDAILYRECORDDB_OFFSET))(nullptr);
		}

		::System::Void SetCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_SETCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPurchase_b__28_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD__ONCLICKPURCHASE_B__28_0_OFFSET))(nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_ONCLICKPURCHASE_OFFSET))(nullptr);
		}

		::System::Void _OnClickReceive_b__29_0(::MX::NetworkProtocol::DailyRecordRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::DailyRecordRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD__ONCLICKRECEIVE_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_ONCLICKRECEIVE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickWait()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD_ONCLICKWAIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PRODUCTDAILYRECORDREWARD___N__0_OFFSET))(nullptr);
		}

	};

