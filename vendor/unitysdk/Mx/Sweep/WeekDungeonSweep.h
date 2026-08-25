#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }

#define MX_SWEEP_WEEKDUNGEONSWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE1AB80)
#define MX_SWEEP_WEEKDUNGEONSWEEP_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0xE1AC60)
#define MX_SWEEP_WEEKDUNGEONSWEEP_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE1AF70)
#define MX_SWEEP_WEEKDUNGEONSWEEP_INITCOST_OFFSET UNITYSDK_OFFSET(0xE1B020)
#define MX_SWEEP_WEEKDUNGEONSWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE1B280)
#define MX_SWEEP_WEEKDUNGEONSWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE1B340)
#define MX_SWEEP_WEEKDUNGEONSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE1B350)
#define MX_SWEEP_WEEKDUNGEONSWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1B380)

namespace Mx::Sweep
{
	inline static constexpr unsigned int WeekDungeonSweep_TypeDefinitionIndex = 10343;

	class WeekDungeonSweep : public Il2CppObject
	{
	public:
		::MX::Data::Excel::WeekDungeonExcel* weekDungeonExcel; // 0x50
		::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* history; // 0x60

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_BEGINSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_INITCOST_OFFSET))(nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_WEEKDUNGEONSWEEP_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

