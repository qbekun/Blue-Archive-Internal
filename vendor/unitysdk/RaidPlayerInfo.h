#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidPlayerInfoDB; }
namespace MX::GameLogic::DBModel { class RaidDB; }

#define RAIDPLAYERINFO_SET_RAIDPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0x2785CD0)
#define RAIDPLAYERINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0x2785CE0)
#define RAIDPLAYERINFO_GET_RAIDPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0x2785CF0)
#define RAIDPLAYERINFO_GET_RAIDDB_OFFSET UNITYSDK_OFFSET(0x2785D00)
#define RAIDPLAYERINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x2785D10)
#define RAIDPLAYERINFO_SET_RAIDDB_OFFSET UNITYSDK_OFFSET(0x2785D20)
#define RAIDPLAYERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2785D30)

	inline static constexpr unsigned int RaidPlayerInfo_TypeDefinitionIndex = 7399;

	class RaidPlayerInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidPlayerInfoDB* _RaidPlayerInfoDB_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::RaidDB* _RaidDB_k__BackingField; // 0x18
		::System::Int32 _Rank_k__BackingField; // 0x20

		::System::Void set_RaidPlayerInfoDB(::MX::GameLogic::DBModel::RaidPlayerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidPlayerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDPLAYERINFO_SET_RAIDPLAYERINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDPLAYERINFO_SET_RANK_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidPlayerInfoDB* get_RaidPlayerInfoDB()
		{
			return ((::MX::GameLogic::DBModel::RaidPlayerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDPLAYERINFO_GET_RAIDPLAYERINFODB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidDB* get_RaidDB()
		{
			return ((::MX::GameLogic::DBModel::RaidDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDPLAYERINFO_GET_RAIDDB_OFFSET))(nullptr);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDPLAYERINFO_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_RaidDB(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDPLAYERINFO_SET_RAIDDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDPLAYERINFO_.CTOR_OFFSET))(nullptr);
		}

	};

