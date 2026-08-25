#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_SET_SHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xF4EE20)
#define MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EE30)
#define MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EE40)
#define MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_GET_SHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xF4EE50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopRefreshRequest_TypeDefinitionIndex = 12118;

	class ShopRefreshRequest : public Il2CppObject
	{
	public:
		::FlatData::ShopCategoryType* _ShopCategoryType_k__BackingField; // 0x40

		::System::Void set_ShopCategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_SET_SHOPCATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_ShopCategoryType()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHREQUEST_GET_SHOPCATEGORYTYPE_OFFSET))(nullptr);
		}

	};
}

