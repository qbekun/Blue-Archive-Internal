#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentDiceRaceResultType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_GET_DICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0xF45E10)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_SET_DICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0xF45E20)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45E30)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45E40)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45E50)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45E60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentDiceRaceUseItemRequest_TypeDefinitionIndex = 11763;

	class EventContentDiceRaceUseItemRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::EventContentDiceRaceResultType* _DiceRaceResultType_k__BackingField; // 0x48

		::FlatData::EventContentDiceRaceResultType* get_DiceRaceResultType()
		{
			return ((::FlatData::EventContentDiceRaceResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_GET_DICERACERESULTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DiceRaceResultType(::FlatData::EventContentDiceRaceResultType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentDiceRaceResultType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_SET_DICERACERESULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEUSEITEMREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

