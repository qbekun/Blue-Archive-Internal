#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentDiceRaceRollResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define DICERACEROLLRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F58600)
#define DICERACEROLLRESPONSEMESSAGE_GET_DICERACEROLLRESPONSE_OFFSET UNITYSDK_OFFSET(0x1F58970)

	inline static constexpr unsigned int DiceRaceRollResponseMessage_TypeDefinitionIndex = 2341;

	class DiceRaceRollResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentDiceRaceRollResponse* _DiceRaceRollResponse_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentDiceRaceRollResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentDiceRaceRollResponse*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EventContentDiceRaceRollResponse* get_DiceRaceRollResponse()
		{
			return ((::MX::NetworkProtocol::EventContentDiceRaceRollResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLRESPONSEMESSAGE_GET_DICERACEROLLRESPONSE_OFFSET))(nullptr);
		}

	};

