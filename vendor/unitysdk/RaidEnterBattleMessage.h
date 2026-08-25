#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class RaidEnterBattleResponse; }

#define RAIDENTERBATTLEMESSAGE_GET_RAIDDB_OFFSET UNITYSDK_OFFSET(0x1F8DC10)
#define RAIDENTERBATTLEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8DC20)

	inline static constexpr unsigned int RaidEnterBattleMessage_TypeDefinitionIndex = 2693;

	class RaidEnterBattleMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidDB* _RaidDB_k__BackingField; // 0x20

		::MX::GameLogic::DBModel::RaidDB* get_RaidDB()
		{
			return ((::MX::GameLogic::DBModel::RaidDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLEMESSAGE_GET_RAIDDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidEnterBattleResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidEnterBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

