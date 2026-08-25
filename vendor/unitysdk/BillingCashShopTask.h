#pragma once
#include "unitysdk.h"

namespace FlatData { class ProductCategory; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
class RetPurchase;
class RetSearchPurchaseProduct;
namespace MX::NetworkProtocol { class BillingPurchaseCashShopVerifyByNexonResponse; }

#define BILLINGCASHSHOPTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC4FB30)
#define BILLINGCASHSHOPTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0xC500C0)
#define BILLINGCASHSHOPTASK_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC50610)
#define BILLINGCASHSHOPTASK_ERRORBILLINGPURCHASELISTBYNEXON_OFFSET UNITYSDK_OFFSET(0xC50800)
#define BILLINGCASHSHOPTASK_HANDLEBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC50970)
#define BILLINGCASHSHOPTASK_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET UNITYSDK_OFFSET(0xC51660)
#define BILLINGCASHSHOPTASK_ERRORBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC51C40)
#define BILLINGCASHSHOPTASK_ONPURCHASERESPONDED_OFFSET UNITYSDK_OFFSET(0xC51CE0)
#define BILLINGCASHSHOPTASK_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET UNITYSDK_OFFSET(0xC523F0)
#define BILLINGCASHSHOPTASK_REQUESTBILLINGPURCHASECASHSHOPVERIFYBYNEXON_OFFSET UNITYSDK_OFFSET(0xC52040)
#define BILLINGCASHSHOPTASK_REQUESTBILLINGPURCHASECASHSHOPVERIFYBYNEXON_OFFSET UNITYSDK_OFFSET(0xC52550)
#define BILLINGCASHSHOPTASK_OPENSHOPCASH_OFFSET UNITYSDK_OFFSET(0xC52560)
#define BILLINGCASHSHOPTASK_STARTBILLINGTRANSACTION_OFFSET UNITYSDK_OFFSET(0xC528E0)
#define BILLINGCASHSHOPTASK_ONSEARCHPURCHASEPRODUCTRESPONDED_OFFSET UNITYSDK_OFFSET(0xC52A60)
#define BILLINGCASHSHOPTASK_SENDNEXONEVENTFORPURCHASE_OFFSET UNITYSDK_OFFSET(0xC514C0)
#define BILLINGCASHSHOPTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC52B10)

	inline static constexpr unsigned int BillingCashShopTask_TypeDefinitionIndex = 8944;

	class BillingCashShopTask : public Il2CppObject
	{
	public:
		::System::Boolean showRewardUI; // 0x10
		::System::Boolean refreshUI; // 0x11
		::System::Action* purchasedCallback; // 0x18
		::FlatData::ProductCategory* productCategory; // 0x20

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean HandleBillingPurchaseListByNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorBillingPurchaseListByNexon(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_ERRORBILLINGPURCHASELISTBYNEXON_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBillingPurchaseCashShopVerifyByNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_HANDLEBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowParticularThreeGachaTicketInfoPopup(::MX::GameLogic::Parcel::ParcelResultDB* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ErrorBillingPurchaseCashShopVerifyByNexonResponseMessage(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_ERRORBILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPurchaseResponded(RetPurchase* arg)
		{
			((::System::Void(*)(RetPurchase*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_ONPURCHASERESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBillingPurchaseListByNexon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBillingPurchaseCashShopVerifyByNexon(::System::Int64 arg, ::System::String* str, ::System::Int64 arg2, ::System::Int64 arg3, ::System::String* str2, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::Int64, ::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_REQUESTBILLINGPURCHASECASHSHOPVERIFYBYNEXON_OFFSET))(arg, str, arg2, arg3, str2, arg4, nullptr);
		}

		::System::Void RequestBillingPurchaseCashShopVerifyByNexon(::System::Int64 arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_REQUESTBILLINGPURCHASECASHSHOPVERIFYBYNEXON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenShopCash(::FlatData::ProductCategory* arg)
		{
			((::System::Void(*)(::FlatData::ProductCategory*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_OPENSHOPCASH_OFFSET))(arg, nullptr);
		}

		::System::Void StartBillingTransaction(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Action* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_STARTBILLINGTRANSACTION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void OnSearchPurchaseProductResponded(RetSearchPurchaseProduct* arg)
		{
			((::System::Void(*)(RetSearchPurchaseProduct*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_ONSEARCHPURCHASEPRODUCTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void SendNexonEventForPurchase(::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_SENDNEXONEVENTFORPURCHASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGCASHSHOPTASK_.CTOR_OFFSET))(nullptr);
		}

	};

