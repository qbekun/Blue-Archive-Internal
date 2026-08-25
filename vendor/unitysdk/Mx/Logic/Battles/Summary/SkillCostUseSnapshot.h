#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B1540)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_USED_OFFSET UNITYSDK_OFFSET(0x13B1560)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_CHARID_OFFSET UNITYSDK_OFFSET(0x13B1570)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B1580)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_USED_OFFSET UNITYSDK_OFFSET(0x13B1590)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x13B15A0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_CHARID_OFFSET UNITYSDK_OFFSET(0x13B15B0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x13B15C0)
#define MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x13B15D0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int SkillCostUseSnapshot_TypeDefinitionIndex = 14481;

	class SkillCostUseSnapshot : public Il2CppObject
	{
	public:
		::System::Int64 _Frame_k__BackingField; // 0x10
		::System::Single _Used_k__BackingField; // 0x18
		::System::Int64 _CharId_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x28

		::System::Void .ctor(::System::Int64 arg, ::System::Single arg2, ::System::Int64 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single get_Used()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_USED_OFFSET))(nullptr);
		}

		::System::Void set_CharId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_CHARID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_FRAME_OFFSET))(nullptr);
		}

		::System::Void set_Used(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_USED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_CharId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_GET_CHARID_OFFSET))(nullptr);
		}

		::System::Void set_Frame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_FRAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_SKILLCOSTUSESNAPSHOT_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};
}

