#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44820)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44830)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_GET_SHOPELIGMAHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF44840)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_SET_SHOPELIGMAHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF44850)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_SET_SHOPINFOS_OFFSET UNITYSDK_OFFSET(0xF44860)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_GET_SHOPINFOS_OFFSET UNITYSDK_OFFSET(0xF44870)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentShopListResponse_TypeDefinitionIndex = 11710;

	class EventContentShopListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ShopInfos_k__BackingField; // 0x50
		Il2CppObject* _ShopEligmaHistoryDBs_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopEligmaHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_GET_SHOPELIGMAHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_ShopEligmaHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_SET_SHOPELIGMAHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_SET_SHOPINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShopInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTRESPONSE_GET_SHOPINFOS_OFFSET))(nullptr);
		}

	};
}

