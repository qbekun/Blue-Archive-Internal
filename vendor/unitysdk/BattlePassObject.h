#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }
class BattlePassTask;

#define BATTLEPASSOBJECT_WEEKLYPASSEXPMAXLIMIT_OFFSET UNITYSDK_OFFSET(0x19AB350)
#define BATTLEPASSOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x19AB500)
#define BATTLEPASSOBJECT_SET_PREVIOUSLEVEL_OFFSET UNITYSDK_OFFSET(0x19AB620)
#define BATTLEPASSOBJECT_GET_PREVIOUSLEVEL_OFFSET UNITYSDK_OFFSET(0x19AB630)
#define BATTLEPASSOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x19AB640)
#define BATTLEPASSOBJECT_SET_PREVIOUSEXP_OFFSET UNITYSDK_OFFSET(0x19AB660)
#define BATTLEPASSOBJECT_GET_TASK_OFFSET UNITYSDK_OFFSET(0x19AB4C0)
#define BATTLEPASSOBJECT_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x19AB670)
#define BATTLEPASSOBJECT_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0x19AB6E0)
#define BATTLEPASSOBJECT_GET_PREVIOUSEXP_OFFSET UNITYSDK_OFFSET(0x19AB710)
#define BATTLEPASSOBJECT_ISMAXWEEKLYPASSEXP_OFFSET UNITYSDK_OFFSET(0x19AB720)

	inline static constexpr unsigned int BattlePassObject_TypeDefinitionIndex = 1328;

	class BattlePassObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::BattlePassInfoDB* Info; // 0x10
		::System::Int32 _PreviousLevel_k__BackingField; // 0x18
		::System::Int64 _PreviousExp_k__BackingField; // 0x20

		::System::Int64 WeeklyPassExpMaxLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_WEEKLYPASSEXPMAXLIMIT_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::BattlePassInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void set_PreviousLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_SET_PREVIOUSLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreviousLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_GET_PREVIOUSLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PreviousExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_SET_PREVIOUSEXP_OFFSET))(arg, nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_GET_TASK_OFFSET))(nullptr);
		}

		::System::Boolean IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_ISMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean IsLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_ISLEVELUP_OFFSET))(nullptr);
		}

		::System::Int64 get_PreviousExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_GET_PREVIOUSEXP_OFFSET))(nullptr);
		}

		::System::Boolean IsMaxWeeklyPassExp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSOBJECT_ISMAXWEEKLYPASSEXP_OFFSET))(nullptr);
		}

	};

