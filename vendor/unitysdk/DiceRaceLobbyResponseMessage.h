#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentDiceRaceDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define DICERACELOBBYRESPONSEMESSAGE_GET_DICERACEDB_OFFSET UNITYSDK_OFFSET(0x1F582F0)
#define DICERACELOBBYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F57F70)

	inline static constexpr unsigned int DiceRaceLobbyResponseMessage_TypeDefinitionIndex = 2338;

	class DiceRaceLobbyResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentDiceRaceDB* _DiceRaceDB_k__BackingField; // 0x20

		::MX::GameLogic::DBModel::EventContentDiceRaceDB* get_DiceRaceDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentDiceRaceDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYRESPONSEMESSAGE_GET_DICERACEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::EventContentDiceRaceDB* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::EventContentDiceRaceDB*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

