#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class FieldStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6EDD0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xE6EDE0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EDF0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xE6EE00)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE6EE10)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE6EE20)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldEnterStageResponse_TypeDefinitionIndex = 10535;

	class FieldEnterStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::FieldStageSaveDB* _SaveDataDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::FieldStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FieldStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FieldStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::FieldStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENTERSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

