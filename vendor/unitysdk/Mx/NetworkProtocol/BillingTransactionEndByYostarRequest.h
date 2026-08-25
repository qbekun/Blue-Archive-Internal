#pragma once
#include "../../unitysdk.h"

namespace FlatData { class BillingTransactionEndType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12570)
#define MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_SET_PURCHASEORDERID_OFFSET UNITYSDK_OFFSET(0xF12590)
#define MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF125A0)
#define MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_GET_ENDTYPE_OFFSET UNITYSDK_OFFSET(0xF125B0)
#define MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_GET_PURCHASEORDERID_OFFSET UNITYSDK_OFFSET(0xF125C0)
#define MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_SET_ENDTYPE_OFFSET UNITYSDK_OFFSET(0xF125D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingTransactionEndByYostarRequest_TypeDefinitionIndex = 11349;

	class BillingTransactionEndByYostarRequest : public Il2CppObject
	{
	public:
		::System::Int64 _PurchaseOrderId_k__BackingField; // 0x40
		::FlatData::BillingTransactionEndType* _EndType_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseOrderId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_SET_PURCHASEORDERID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::FlatData::BillingTransactionEndType* get_EndType()
		{
			return ((::FlatData::BillingTransactionEndType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_GET_ENDTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseOrderId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_GET_PURCHASEORDERID_OFFSET))(nullptr);
		}

		::System::Void set_EndType(::FlatData::BillingTransactionEndType* arg)
		{
			((::System::Void(*)(::FlatData::BillingTransactionEndType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGTRANSACTIONENDBYYOSTARREQUEST_SET_ENDTYPE_OFFSET))(arg, nullptr);
		}

	};
}

