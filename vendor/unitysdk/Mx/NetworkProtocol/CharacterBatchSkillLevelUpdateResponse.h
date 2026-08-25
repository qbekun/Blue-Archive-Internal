#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF160C0)
#define MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF160D0)
#define MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF160E0)
#define MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF160F0)
#define MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF16100)
#define MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16110)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterBatchSkillLevelUpdateResponse_TypeDefinitionIndex = 11481;

	class CharacterBatchSkillLevelUpdateResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CharacterDB* _CharacterDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::CharacterDB* get_CharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERBATCHSKILLLEVELUPDATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

