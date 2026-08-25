#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestMainStorySummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_SET_CONQUESTMAINSTORYSUMMARY_OFFSET UNITYSDK_OFFSET(0xF41440)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_GET_CONQUESTMAINSTORYSUMMARY_OFFSET UNITYSDK_OFFSET(0xF41450)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41460)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41470)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestMainStoryCheckResponse_TypeDefinitionIndex = 11580;

	class ConquestMainStoryCheckResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestMainStorySummary* _ConquestMainStorySummary_k__BackingField; // 0x50

		::System::Void set_ConquestMainStorySummary(::MX::GameLogic::DBModel::ConquestMainStorySummary* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestMainStorySummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_SET_CONQUESTMAINSTORYSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestMainStorySummary* get_ConquestMainStorySummary()
		{
			return ((::MX::GameLogic::DBModel::ConquestMainStorySummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_GET_CONQUESTMAINSTORYSUMMARY_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

