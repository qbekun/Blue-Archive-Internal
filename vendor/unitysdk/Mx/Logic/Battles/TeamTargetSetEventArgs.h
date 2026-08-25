#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }

#define MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x126FC00)
#define MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_GET_SIDE_OFFSET UNITYSDK_OFFSET(0x126FC10)
#define MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_GET_SOURCETARGETTABLE_OFFSET UNITYSDK_OFFSET(0x126FC20)
#define MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_SET_SOURCETARGETTABLE_OFFSET UNITYSDK_OFFSET(0x126FC30)
#define MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_SET_SIDE_OFFSET UNITYSDK_OFFSET(0x126FC40)
#define MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126FC50)
#define MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_SET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x126FD10)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int TeamTargetSetEventArgs_TypeDefinitionIndex = 14030;

	class TeamTargetSetEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _Side_k__BackingField; // 0x10
		Il2CppObject* _SourceTargetTable_k__BackingField; // 0x18
		::System::Int32 _DurationFrame_k__BackingField; // 0x20

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_Side()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_GET_SIDE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SourceTargetTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_GET_SOURCETARGETTABLE_OFFSET))(nullptr);
		}

		::System::Void set_SourceTargetTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_SET_SOURCETARGETTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Side(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_SET_SIDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, Il2CppObject* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_DurationFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TEAMTARGETSETEVENTARGS_SET_DURATIONFRAME_OFFSET))(arg, nullptr);
		}

	};
}

