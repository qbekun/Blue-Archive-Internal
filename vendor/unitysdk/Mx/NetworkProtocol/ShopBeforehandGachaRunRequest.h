#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F320)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0xF4F330)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4F340)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F350)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0xF4F360)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4F370)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBeforehandGachaRunRequest_TypeDefinitionIndex = 12130;

	class ShopBeforehandGachaRunRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x40
		::System::Int64 _GoodsId_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHARUNREQUEST_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

	};
}

