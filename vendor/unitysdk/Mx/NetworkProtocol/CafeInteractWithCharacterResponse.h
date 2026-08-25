#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF139D0)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF139E0)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF139F0)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF13A00)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13A10)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF13A20)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13A30)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF13A40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeInteractWithCharacterResponse_TypeDefinitionIndex = 11375;

	class CafeInteractWithCharacterResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CharacterDB* _CharacterDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_CharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERRESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

	};
}

