#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_CLEARDATE_OFFSET UNITYSDK_OFFSET(0x10030B0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x10030C0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_ACCUMULATEDSCORE_OFFSET UNITYSDK_OFFSET(0x10030D0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x10030E0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_CLEARDATE_OFFSET UNITYSDK_OFFSET(0x10030F0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_ISFULLCOMBO_OFFSET UNITYSDK_OFFSET(0x1003100)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1003110)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003120)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1003130)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x1003140)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_ISFULLCOMBO_OFFSET UNITYSDK_OFFSET(0x1003150)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003160)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_ACCUMULATEDSCORE_OFFSET UNITYSDK_OFFSET(0x1003170)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameHistoryDB_TypeDefinitionIndex = 12657;

	class MiniGameHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int64 _HighScore_k__BackingField; // 0x20
		::System::Int64 _AccumulatedScore_k__BackingField; // 0x28
		::System::DateTime* _ClearDate_k__BackingField; // 0x30
		::System::Boolean _IsFullCombo_k__BackingField; // 0x38

		::System::DateTime* get_ClearDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_CLEARDATE_OFFSET))(nullptr);
		}

		::System::Void set_HighScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_HIGHSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccumulatedScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_ACCUMULATEDSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_CLEARDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFullCombo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_ISFULLCOMBO_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_HighScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_HIGHSCORE_OFFSET))(nullptr);
		}

		::System::Void set_IsFullCombo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_SET_ISFULLCOMBO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_AccumulatedScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEHISTORYDB_GET_ACCUMULATEDSCORE_OFFSET))(nullptr);
		}

	};
}

