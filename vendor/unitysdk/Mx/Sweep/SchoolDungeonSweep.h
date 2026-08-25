#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace MX::GameLogic::DBModel { class SchoolDungeonStageHistoryDB; }

#define MX_SWEEP_SCHOOLDUNGEONSWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE180B0)
#define MX_SWEEP_SCHOOLDUNGEONSWEEP_INITCOST_OFFSET UNITYSDK_OFFSET(0xE180C0)
#define MX_SWEEP_SCHOOLDUNGEONSWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE18320)
#define MX_SWEEP_SCHOOLDUNGEONSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE183E0)
#define MX_SWEEP_SCHOOLDUNGEONSWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE18410)
#define MX_SWEEP_SCHOOLDUNGEONSWEEP_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0xE184D0)
#define MX_SWEEP_SCHOOLDUNGEONSWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE18810)
#define MX_SWEEP_SCHOOLDUNGEONSWEEP_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE188F0)

namespace Mx::Sweep
{
	inline static constexpr unsigned int SchoolDungeonSweep_TypeDefinitionIndex = 10333;

	class SchoolDungeonSweep : public Il2CppObject
	{
	public:
		::MX::Data::Excel::SchoolDungeonStageExcel* schoolDungeonExcel; // 0x50
		::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* history; // 0x60

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_INITCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_BEGINSWEEP_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SCHOOLDUNGEONSWEEP_ISOPEN_OFFSET))(nullptr);
		}

	};
}

