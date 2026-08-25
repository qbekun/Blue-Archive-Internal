#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15D20)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15D30)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15D40)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15D50)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15D60)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15D70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterSkillLevelUpdateResponse_TypeDefinitionIndex = 11469;

	class CharacterSkillLevelUpdateResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CharacterDB* _CharacterDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_CharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATERESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

	};
}

