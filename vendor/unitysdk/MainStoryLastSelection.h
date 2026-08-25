#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }

#define MAINSTORYLASTSELECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED56F0)
#define MAINSTORYLASTSELECTION_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x1ED5700)
#define MAINSTORYLASTSELECTION_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x1ED5710)
#define MAINSTORYLASTSELECTION_SET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x1ED5720)
#define MAINSTORYLASTSELECTION_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x1ED5730)

	inline static constexpr unsigned int MainStoryLastSelection_TypeDefinitionIndex = 1806;

	class MainStoryLastSelection : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeTypes* _ModeType_k__BackingField; // 0x10
		::System::Int64 _VolumeId_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINSTORYLASTSELECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINSTORYLASTSELECTION_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MAINSTORYLASTSELECTION_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ModeType(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MAINSTORYLASTSELECTION_SET_MODETYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ModeType()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINSTORYLASTSELECTION_GET_MODETYPE_OFFSET))(nullptr);
		}

	};

