#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0xF4E950)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E960)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E970)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E980)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0xF4E990)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E9A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyGachaRequest_TypeDefinitionIndex = 12109;

	class ShopBuyGachaRequest : public Il2CppObject
	{
	public:
		::System::Int64 _GoodsId_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48

		::System::Int64 get_GoodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_GET_GOODSID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHAREQUEST_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

	};
}

