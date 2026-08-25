#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class MailDB; }
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_SET_PURCHASEPRODUCT_OFFSET UNITYSDK_OFFSET(0xF12830)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_MAILDB_OFFSET UNITYSDK_OFFSET(0xF12840)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF12850)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_SET_MAILDB_OFFSET UNITYSDK_OFFSET(0xF12860)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_PURCHASEPRODUCT_OFFSET UNITYSDK_OFFSET(0xF12870)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12880)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF12890)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF128A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingPurchaseFreeProductResponse_TypeDefinitionIndex = 11352;

	class BillingPurchaseFreeProductResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::MailDB* _MailDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::PurchaseCountDB* _PurchaseProduct_k__BackingField; // 0x60

		::System::Void set_PurchaseProduct(::MX::GameLogic::DBModel::PurchaseCountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_SET_PURCHASEPRODUCT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MailDB* get_MailDB()
		{
			return ((::MX::GameLogic::DBModel::MailDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_MAILDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void set_MailDB(::MX::GameLogic::DBModel::MailDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MailDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_SET_MAILDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::PurchaseCountDB* get_PurchaseProduct()
		{
			return ((::MX::GameLogic::DBModel::PurchaseCountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_PURCHASEPRODUCT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTRESPONSE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

	};
}

