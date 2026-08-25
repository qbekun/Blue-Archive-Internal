#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4EF40)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xF4EF50)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4EF60)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4EF70)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EF80)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EF90)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4EFA0)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4EFB0)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xF4EFC0)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4EFD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyEligmaRequest_TypeDefinitionIndex = 12121;

	class ShopBuyEligmaRequest : public Il2CppObject
	{
	public:
		::System::Int64 _GoodsUniqueId_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x50
		::System::Int64 _PurchaseCount_k__BackingField; // 0x58

		::System::Int64 get_GoodsUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_GOODSUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_GoodsUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_GOODSUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMAREQUEST_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

	};
}

