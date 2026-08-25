#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15A60)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15A70)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15A80)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15A90)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15AA0)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15AB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterTranscendenceResponse_TypeDefinitionIndex = 11463;

	class CharacterTranscendenceResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CharacterDB* _CharacterDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_CharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

