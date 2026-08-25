#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xF4F180)
#define MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F190)
#define MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xF4F1A0)
#define MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4F1B0)
#define MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4F1C0)
#define MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F1D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyAPRequest_TypeDefinitionIndex = 12126;

	class ShopBuyAPRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x40
		::System::Int64 _PurchaseCount_k__BackingField; // 0x48

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYAPREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

