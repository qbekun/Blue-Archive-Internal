#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E7F0)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E800)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xF4E810)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_ISREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xF4E820)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0xF4E830)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E840)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0xF4E850)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xF4E860)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_ISREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xF4E870)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E880)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyMerchandiseRequest_TypeDefinitionIndex = 12107;

	class ShopBuyMerchandiseRequest : public Il2CppObject
	{
	public:
		::System::Boolean _IsRefreshGoods_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48
		::System::Int64 _GoodsId_k__BackingField; // 0x50
		::System::Int64 _PurchaseCount_k__BackingField; // 0x58

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IsRefreshGoods(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_ISREFRESHGOODS_OFFSET))(arg, nullptr);
		}

		::System::Void set_GoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRefreshGoods()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_GET_ISREFRESHGOODS_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISEREQUEST_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

