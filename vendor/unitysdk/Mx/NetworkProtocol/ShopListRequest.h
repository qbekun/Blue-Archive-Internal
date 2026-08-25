#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPLISTREQUEST_SET_CATEGORYLIST_OFFSET UNITYSDK_OFFSET(0xF4ED80)
#define MX_NETWORKPROTOCOL_SHOPLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4ED90)
#define MX_NETWORKPROTOCOL_SHOPLISTREQUEST_GET_CATEGORYLIST_OFFSET UNITYSDK_OFFSET(0xF4EDA0)
#define MX_NETWORKPROTOCOL_SHOPLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EDB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopListRequest_TypeDefinitionIndex = 12116;

	class ShopListRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _CategoryList_k__BackingField; // 0x40

		::System::Void set_CategoryList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTREQUEST_SET_CATEGORYLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTREQUEST_GET_CATEGORYLIST_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

