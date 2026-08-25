#pragma once
#include "unitysdk.h"

class RetRestorePurchaseProduct;
namespace MX::NetworkProtocol { class BillingPurchaseCashShopVerifyByNexonResponse; }
class RetRestorePurchase;
namespace MX::NetworkProtocol { class ErrorPacket; }
class UIPopup_System;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class RetSearchPurchaseProduct;

#define BILLINGCHECKPURCHASESTATETASK_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET UNITYSDK_OFFSET(0xC53750)
#define BILLINGCHECKPURCHASESTATETASK_SENDNEXONEVENTFORPURCHASE_OFFSET UNITYSDK_OFFSET(0xC538B0)
#define BILLINGCHECKPURCHASESTATETASK_ONRESTOREPURCHASERESPONDED_OFFSET UNITYSDK_OFFSET(0xC53A50)
#define BILLINGCHECKPURCHASESTATETASK_ERRORBILLINGPURCHASELISTBYNEXON_OFFSET UNITYSDK_OFFSET(0xC53F30)
#define BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__SHOWEXISTINVISIBLEGACHATOKENPOPUP|13_1_OFFSET UNITYSDK_OFFSET(0xC54030)
#define BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_B__13_7_OFFSET UNITYSDK_OFFSET(0xC54210)
#define BILLINGCHECKPURCHASESTATETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC542B0)
#define BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__SHOWEXISTERRORORDERPOPUP|13_2_OFFSET UNITYSDK_OFFSET(0xC54120)
#define BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__ISINVISIBLETOKEN|13_0_OFFSET UNITYSDK_OFFSET(0xC54410)
#define BILLINGCHECKPURCHASESTATETASK_REQUESTBILLINGPURCHASECASHSHOPVERIFYBYNEXON_OFFSET UNITYSDK_OFFSET(0xC54500)
#define BILLINGCHECKPURCHASESTATETASK_CHECKPURCHASESTATE_OFFSET UNITYSDK_OFFSET(0xC52200)
#define BILLINGCHECKPURCHASESTATETASK_HANDLEBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC555E0)
#define BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__SHOWEXISTMAILRESULTPOPUP|13_3_OFFSET UNITYSDK_OFFSET(0xC54380)
#define BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_B__13_8_OFFSET UNITYSDK_OFFSET(0xC55D90)
#define BILLINGCHECKPURCHASESTATETASK_ERRORBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC55E30)
#define BILLINGCHECKPURCHASESTATETASK_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC55F30)
#define BILLINGCHECKPURCHASESTATETASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC567C0)
#define BILLINGCHECKPURCHASESTATETASK_RELEASE_OFFSET UNITYSDK_OFFSET(0xC56D30)
#define BILLINGCHECKPURCHASESTATETASK_ONSEARCHPURCHASEPRODUCTRESPONDED_OFFSET UNITYSDK_OFFSET(0xC57260)
#define BILLINGCHECKPURCHASESTATETASK_PROCESSRESULT_OFFSET UNITYSDK_OFFSET(0xC55740)
#define BILLINGCHECKPURCHASESTATETASK_CHECKNEWPRODUCTS_OFFSET UNITYSDK_OFFSET(0xC547B0)
#define BILLINGCHECKPURCHASESTATETASK_HANDLEENDREWARDUI_OFFSET UNITYSDK_OFFSET(0xC57370)

	inline static constexpr unsigned int BillingCheckPurchaseStateTask_TypeDefinitionIndex = 8950;

	class BillingCheckPurchaseStateTask : public Il2CppObject
	{
	public:
		::System::Action* onCheckTransactionFailDone; // 0x10
		Il2CppObject* notreceivedOrderQueue; // 0x18
		RetRestorePurchaseProduct* currentPurchaseOrder; // 0x20
		::System::Boolean existInvisibleGachaToken; // 0x28
		::System::Boolean existErrorOrder; // 0x29
		Il2CppObject* receivedResponseQueue; // 0x30
		::System::Boolean existMailResult; // 0x38
		::System::Boolean shouldUpdatePurchaseList; // 0x39

		::System::Void RequestBillingPurchaseListByNexon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET))(arg, nullptr);
		}

		::System::Void SendNexonEventForPurchase(::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_SENDNEXONEVENTFORPURCHASE_OFFSET))(arg, nullptr);
		}

		::System::Void OnRestorePurchaseResponded(RetRestorePurchase* arg)
		{
			((::System::Void(*)(RetRestorePurchase*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_ONRESTOREPURCHASERESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorBillingPurchaseListByNexon(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_ERRORBILLINGPURCHASELISTBYNEXON_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessResult_g__ShowExistInvisibleGachaTokenPopup|13_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__SHOWEXISTINVISIBLEGACHATOKENPOPUP|13_1_OFFSET))(nullptr);
		}

		::System::Void _ProcessResult_b__13_7(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_B__13_7_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ProcessResult_g__ShowExistErrorOrderPopup|13_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__SHOWEXISTERRORORDERPOPUP|13_2_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessResult_g__IsInvisibleToken|13_0(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__ISINVISIBLETOKEN|13_0_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBillingPurchaseCashShopVerifyByNexon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_REQUESTBILLINGPURCHASECASHSHOPVERIFYBYNEXON_OFFSET))(arg, nullptr);
		}

		::System::Void CheckPurchaseState(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_CHECKPURCHASESTATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HandleBillingPurchaseCashShopVerifyByNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_HANDLEBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessResult_g__ShowExistMailResultPopup|13_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_G__SHOWEXISTMAILRESULTPOPUP|13_3_OFFSET))(nullptr);
		}

		::System::Void _ProcessResult_b__13_8(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK__PROCESSRESULT_B__13_8_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorBillingPurchaseCashShopVerifyByNexonResponseMessage(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_ERRORBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBillingPurchaseListByNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void OnSearchPurchaseProductResponded(RetSearchPurchaseProduct* arg)
		{
			((::System::Void(*)(RetSearchPurchaseProduct*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_ONSEARCHPURCHASEPRODUCTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_PROCESSRESULT_OFFSET))(nullptr);
		}

		::System::Void CheckNewProducts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_CHECKNEWPRODUCTS_OFFSET))(nullptr);
		}

		::System::Boolean HandleEndRewardUI(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCHECKPURCHASESTATETASK_HANDLEENDREWARDUI_OFFSET))(arg, nullptr);
		}

	};

