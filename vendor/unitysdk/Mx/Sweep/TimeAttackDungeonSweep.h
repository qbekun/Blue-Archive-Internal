#pragma once
#include "../../unitysdk.h"

#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1A1B0)
#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_INITCOST_OFFSET UNITYSDK_OFFSET(0xE1A1D0)
#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0xE1A2E0)
#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE1A6E0)
#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE1A710)
#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE1A7B0)
#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE1A840)
#define MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE1A850)

namespace Mx::Sweep
{
	inline static constexpr unsigned int TimeAttackDungeonSweep_TypeDefinitionIndex = 10339;

	class TimeAttackDungeonSweep : public Il2CppObject
	{
	public:
		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_INITCOST_OFFSET))(nullptr);
		}

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_BEGINSWEEP_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_TIMEATTACKDUNGEONSWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

	};
}

