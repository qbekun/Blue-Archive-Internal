#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_GET_CARDSHOPELEMENTDBS_OFFSET UNITYSDK_OFFSET(0xF45070)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45080)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45090)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_SET_CARDSHOPELEMENTDBS_OFFSET UNITYSDK_OFFSET(0xF450A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentCardShopShuffleResponse_TypeDefinitionIndex = 11726;

	class EventContentCardShopShuffleResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CardShopElementDBs_k__BackingField; // 0x50

		Il2CppObject* get_CardShopElementDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_GET_CARDSHOPELEMENTDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CardShopElementDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPSHUFFLERESPONSE_SET_CARDSHOPELEMENTDBS_OFFSET))(arg, nullptr);
		}

	};
}

