#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentConcentrationSaveDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF463B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF463C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF463D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_SET_SAVEDBBEFORE_OFFSET UNITYSDK_OFFSET(0xF463E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF463F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46400)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_SAVEDBBEFORE_OFFSET UNITYSDK_OFFSET(0xF46410)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF46420)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentConcentrationRoundCompleteResponse_TypeDefinitionIndex = 11778;

	class EventContentConcentrationRoundCompleteResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* _SaveDBBefore_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* _SaveDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDBBefore(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_SET_SAVEDBBEFORE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* get_SaveDBBefore()
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_SAVEDBBEFORE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDCOMPLETERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

