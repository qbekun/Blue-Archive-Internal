#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentDiceRaceLapRewardResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define DICERACELAPREWARDRESPONSEMESSAGE_GET_DICERACELAPREWARDRESPONSE_OFFSET UNITYSDK_OFFSET(0x1F57D20)
#define DICERACELAPREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F579C0)

	inline static constexpr unsigned int DiceRaceLapRewardResponseMessage_TypeDefinitionIndex = 2335;

	class DiceRaceLapRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentDiceRaceLapRewardResponse* _DiceRaceLapRewardResponse_k__BackingField; // 0x20

		::MX::NetworkProtocol::EventContentDiceRaceLapRewardResponse* get_DiceRaceLapRewardResponse()
		{
			return ((::MX::NetworkProtocol::EventContentDiceRaceLapRewardResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACELAPREWARDRESPONSEMESSAGE_GET_DICERACELAPREWARDRESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentDiceRaceLapRewardResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentDiceRaceLapRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACELAPREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

