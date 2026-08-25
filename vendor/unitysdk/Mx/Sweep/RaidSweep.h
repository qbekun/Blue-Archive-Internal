#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_SWEEP_RAIDSWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE171C0)
#define MX_SWEEP_RAIDSWEEP_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0xE171D0)
#define MX_SWEEP_RAIDSWEEP_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE176D0)
#define MX_SWEEP_RAIDSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE177E0)
#define MX_SWEEP_RAIDSWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE17810)
#define MX_SWEEP_RAIDSWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE178D0)
#define MX_SWEEP_RAIDSWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE178E0)
#define MX_SWEEP_RAIDSWEEP_INITCOST_OFFSET UNITYSDK_OFFSET(0xE17910)

namespace Mx::Sweep
{
	inline static constexpr unsigned int RaidSweep_TypeDefinitionIndex = 10329;

	class RaidSweep : public Il2CppObject
	{
	public:
		::System::Boolean isPlaying; // 0x50

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_BEGINSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2, Il2CppObject* arg3, ::FlatData::ContentType* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, Il2CppObject*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_RAIDSWEEP_INITCOST_OFFSET))(nullptr);
		}

	};
}

