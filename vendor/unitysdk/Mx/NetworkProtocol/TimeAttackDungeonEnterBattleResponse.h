#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FD90)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_SET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF4FDA0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FDB0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_GET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF4FDC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonEnterBattleResponse_TypeDefinitionIndex = 12161;

	class TimeAttackDungeonEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AssistCharacterDB* _AssistCharacterDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterDB(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_SET_ASSISTCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* get_AssistCharacterDB()
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLERESPONSE_GET_ASSISTCHARACTERDB_OFFSET))(nullptr);
		}

	};
}

