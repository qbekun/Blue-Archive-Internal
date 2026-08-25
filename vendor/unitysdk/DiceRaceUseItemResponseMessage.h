#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentDiceRaceUseItemResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define DICERACEUSEITEMRESPONSEMESSAGE_GET_DICERACEUSEITEMRESPONSE_OFFSET UNITYSDK_OFFSET(0x1F59020)
#define DICERACEUSEITEMRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F58C90)

	inline static constexpr unsigned int DiceRaceUseItemResponseMessage_TypeDefinitionIndex = 2344;

	class DiceRaceUseItemResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentDiceRaceUseItemResponse* _DiceRaceUseItemResponse_k__BackingField; // 0x20

		::MX::NetworkProtocol::EventContentDiceRaceUseItemResponse* get_DiceRaceUseItemResponse()
		{
			return ((::MX::NetworkProtocol::EventContentDiceRaceUseItemResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMRESPONSEMESSAGE_GET_DICERACEUSEITEMRESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentDiceRaceUseItemResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentDiceRaceUseItemResponse*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

