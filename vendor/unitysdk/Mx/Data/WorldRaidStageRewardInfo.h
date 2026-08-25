#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class WorldRaidStageRewardExcel; }

#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18694F0)
#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1869500)
#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1869510)
#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1869520)
#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_GET_HIDEINUI_OFFSET UNITYSDK_OFFSET(0x1869530)
#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_SET_HIDEINUI_OFFSET UNITYSDK_OFFSET(0x1869540)
#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1869550)
#define MX_DATA_WORLDRAIDSTAGEREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18696E0)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidStageRewardInfo_TypeDefinitionIndex = 15934;

	class WorldRaidStageRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		Il2CppObject* _Rewards_k__BackingField; // 0x18
		::System::Boolean _HideInUI_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideInUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_GET_HIDEINUI_OFFSET))(nullptr);
		}

		::System::Void set_HideInUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_SET_HIDEINUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WorldRaidStageRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WorldRaidStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEREWARDINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

