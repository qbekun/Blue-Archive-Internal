#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15820)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15830)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15840)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15850)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_SET_GEARDB_OFFSET UNITYSDK_OFFSET(0xF15860)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_GET_GEARDB_OFFSET UNITYSDK_OFFSET(0xF15870)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterGearUnlockResponse_TypeDefinitionIndex = 11457;

	class CharacterGearUnlockResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::GearDB* _GearDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CharacterDB* _CharacterDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_CharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

		::System::Void set_GearDB(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_SET_GEARDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* get_GearDB()
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKRESPONSE_GET_GEARDB_OFFSET))(nullptr);
		}

	};
}

