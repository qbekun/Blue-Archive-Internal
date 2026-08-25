#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class EventContentDiceRaceDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_DICERESULTS_OFFSET UNITYSDK_OFFSET(0xF45CD0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_DICERESULTS_OFFSET UNITYSDK_OFFSET(0xF45CE0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_DICERACEDB_OFFSET UNITYSDK_OFFSET(0xF45CF0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF45D00)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF45D10)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45D20)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45D30)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45D40)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_DICERACEDB_OFFSET UNITYSDK_OFFSET(0xF45D50)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45D60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentDiceRaceRollResponse_TypeDefinitionIndex = 11760;

	class EventContentDiceRaceRollResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EventContentDiceRaceDB* _DiceRaceDB_k__BackingField; // 0x58
		Il2CppObject* _DiceResults_k__BackingField; // 0x60
		Il2CppObject* _EventContentCollectionDBs_k__BackingField; // 0x68

		Il2CppObject* get_DiceResults()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_DICERESULTS_OFFSET))(nullptr);
		}

		::System::Void set_DiceResults(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_DICERESULTS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentDiceRaceDB* get_DiceRaceDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentDiceRaceDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_DICERACEDB_OFFSET))(nullptr);
		}

		::System::Void set_EventContentCollectionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EventContentCollectionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_DiceRaceDB(::MX::GameLogic::DBModel::EventContentDiceRaceDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentDiceRaceDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_SET_DICERACEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACEROLLRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

