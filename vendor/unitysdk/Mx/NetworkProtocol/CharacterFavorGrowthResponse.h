#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15C00)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_CONSUMESTACKABLEITEMDBRESULT_OFFSET UNITYSDK_OFFSET(0xF15C10)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15C20)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15C30)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_SET_CONSUMESTACKABLEITEMDBRESULT_OFFSET UNITYSDK_OFFSET(0xF15C40)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15C50)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15C60)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15C70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterFavorGrowthResponse_TypeDefinitionIndex = 11467;

	class CharacterFavorGrowthResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CharacterDB* _CharacterDB_k__BackingField; // 0x50
		Il2CppObject* _ConsumeStackableItemDBResult_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumeStackableItemDBResult()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_CONSUMESTACKABLEITEMDBRESULT_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeStackableItemDBResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_SET_CONSUMESTACKABLEITEMDBRESULT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_CharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHRESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

	};
}

