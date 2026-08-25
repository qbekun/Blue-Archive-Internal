#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_GET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0xF15DC0)
#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15DD0)
#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_SET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0xF15DE0)
#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15DF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterUnlockWeaponResponse_TypeDefinitionIndex = 11471;

	class CharacterUnlockWeaponResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WeaponDB* _WeaponDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::WeaponDB* get_WeaponDB()
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_GET_WEAPONDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WeaponDB(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_SET_WEAPONDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

