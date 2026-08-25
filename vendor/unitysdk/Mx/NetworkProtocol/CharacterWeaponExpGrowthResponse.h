#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15E60)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15E70)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15E80)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15E90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterWeaponExpGrowthResponse_TypeDefinitionIndex = 11473;

	class CharacterWeaponExpGrowthResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONEXPGROWTHRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

