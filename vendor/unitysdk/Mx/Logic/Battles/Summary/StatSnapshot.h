#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }

#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_STAT_OFFSET UNITYSDK_OFFSET(0x13B1870)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_SET_STAT_OFFSET UNITYSDK_OFFSET(0x13B1880)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_START_OFFSET UNITYSDK_OFFSET(0x13B1890)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_SET_START_OFFSET UNITYSDK_OFFSET(0x13B18A0)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_END_OFFSET UNITYSDK_OFFSET(0x13B18B0)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_SET_END_OFFSET UNITYSDK_OFFSET(0x13B18C0)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_DIFF_OFFSET UNITYSDK_OFFSET(0x13B18D0)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B18E0)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B18F0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int StatSnapshot_TypeDefinitionIndex = 14484;

	class StatSnapshot : public Il2CppObject
	{
	public:
		::FlatData::StatType* _Stat_k__BackingField; // 0x10
		::System::Int64 _Start_k__BackingField; // 0x18
		::System::Int64 _End_k__BackingField; // 0x20

		::FlatData::StatType* get_Stat()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_STAT_OFFSET))(nullptr);
		}

		::System::Void set_Stat(::FlatData::StatType* arg)
		{
			((::System::Void(*)(::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_SET_STAT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Start()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_Start(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_SET_START_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_End()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_END_OFFSET))(nullptr);
		}

		::System::Void set_End(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_SET_END_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Diff()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_GET_DIFF_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::StatType* arg)
		{
			((::System::Void(*)(::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

