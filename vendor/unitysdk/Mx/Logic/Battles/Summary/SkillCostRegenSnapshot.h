#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B14A0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_GET_REGEN_OFFSET UNITYSDK_OFFSET(0x13B14B0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_SET_REGEN_OFFSET UNITYSDK_OFFSET(0x13B14C0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B14D0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B14E0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int SkillCostRegenSnapshot_TypeDefinitionIndex = 14479;

	class SkillCostRegenSnapshot : public Il2CppObject
	{
	public:
		::System::Int64 _Frame_k__BackingField; // 0x10
		::System::Single _Regen_k__BackingField; // 0x18

		::System::Int64 get_Frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_GET_FRAME_OFFSET))(nullptr);
		}

		::System::Single get_Regen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_GET_REGEN_OFFSET))(nullptr);
		}

		::System::Void set_Regen(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_SET_REGEN_OFFSET))(arg, nullptr);
		}

		::System::Void set_Frame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_SET_FRAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTREGENSNAPSHOT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

