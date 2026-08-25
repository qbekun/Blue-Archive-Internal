#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B14F0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B1500)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_GET_ADDED_OFFSET UNITYSDK_OFFSET(0x13B1510)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B1520)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_SET_ADDED_OFFSET UNITYSDK_OFFSET(0x13B1530)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int SkillCostAddSnapshot_TypeDefinitionIndex = 14480;

	class SkillCostAddSnapshot : public Il2CppObject
	{
	public:
		::System::Int64 _Frame_k__BackingField; // 0x10
		::System::Single _Added_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_GET_FRAME_OFFSET))(nullptr);
		}

		::System::Single get_Added()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_GET_ADDED_OFFSET))(nullptr);
		}

		::System::Void set_Frame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_SET_FRAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Added(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTADDSNAPSHOT_SET_ADDED_OFFSET))(arg, nullptr);
		}

	};
}

