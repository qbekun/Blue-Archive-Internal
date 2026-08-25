#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F080)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_SET_SHOPUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF4F090)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F0A0)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_GET_SHOPUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF4F0B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyRefreshMerchandiseRequest_TypeDefinitionIndex = 12124;

	class ShopBuyRefreshMerchandiseRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _ShopUniqueIds_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_SET_SHOPUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISEREQUEST_GET_SHOPUNIQUEIDS_OFFSET))(nullptr);
		}

	};
}

