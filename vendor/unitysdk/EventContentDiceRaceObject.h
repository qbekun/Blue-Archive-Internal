#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentDiceRaceDB; }
namespace MX::Data { class EventContentDiceRaceLapRewardInfo; }

#define EVENTCONTENTDICERACEOBJECT_DICERACELAPREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1D0FD30)
#define EVENTCONTENTDICERACEOBJECT_GET_EVENTCONTENTDICERACE_OFFSET UNITYSDK_OFFSET(0x1D10070)
#define EVENTCONTENTDICERACEOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1D10080)
#define EVENTCONTENTDICERACEOBJECT_CO_REQUESTEVENTCONTENTDICERACELOBBY_OFFSET UNITYSDK_OFFSET(0x1D10090)
#define EVENTCONTENTDICERACEOBJECT__DICERACELAPREWARDREDDOT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D10110)
#define EVENTCONTENTDICERACEOBJECT_SET_EVENTCONTENTDICERACE_OFFSET UNITYSDK_OFFSET(0x1D10140)
#define EVENTCONTENTDICERACEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D10150)

	inline static constexpr unsigned int EventContentDiceRaceObject_TypeDefinitionIndex = 1610;

	class EventContentDiceRaceObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentDiceRaceDB* _EventContentDiceRace_k__BackingField; // 0x10

		::System::Boolean DiceRaceLapRewardRedDot(::System::Int64 arg, Il2CppObject&* arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDICERACEOBJECT_DICERACELAPREWARDREDDOT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentDiceRaceDB* get_EventContentDiceRace()
		{
			return ((::MX::GameLogic::DBModel::EventContentDiceRaceDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDICERACEOBJECT_GET_EVENTCONTENTDICERACE_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::EventContentDiceRaceDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentDiceRaceDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDICERACEOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestEventContentDiceRaceLobby(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDICERACEOBJECT_CO_REQUESTEVENTCONTENTDICERACELOBBY_OFFSET))(arg, nullptr);
		}

		::System::Boolean _DiceRaceLapRewardRedDot_b__6_0(::MX::Data::EventContentDiceRaceLapRewardInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentDiceRaceLapRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDICERACEOBJECT__DICERACELAPREWARDREDDOT_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentDiceRace(::MX::GameLogic::DBModel::EventContentDiceRaceDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentDiceRaceDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDICERACEOBJECT_SET_EVENTCONTENTDICERACE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDICERACEOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

