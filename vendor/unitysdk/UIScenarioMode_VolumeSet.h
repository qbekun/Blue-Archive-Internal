#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }

#define UISCENARIOMODE_VOLUMESET_BLOCKUNITSINPUT_OFFSET UNITYSDK_OFFSET(0x2812670)
#define UISCENARIOMODE_VOLUMESET_SETDATA_OFFSET UNITYSDK_OFFSET(0x2812FA0)
#define UISCENARIOMODE_VOLUMESET_GET_EVENTUNITS_OFFSET UNITYSDK_OFFSET(0x28147D0)
#define UISCENARIOMODE_VOLUMESET_GETUNITCOUNT_OFFSET UNITYSDK_OFFSET(0x2811710)
#define UISCENARIOMODE_VOLUMESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2815160)
#define UISCENARIOMODE_VOLUMESET_GET_UNITS_OFFSET UNITYSDK_OFFSET(0x2814560)
#define UISCENARIOMODE_VOLUMESET_GET_FAVORUNITS_OFFSET UNITYSDK_OFFSET(0x2814720)

	inline static constexpr unsigned int UIScenarioMode_VolumeSet_TypeDefinitionIndex = 7803;

	class UIScenarioMode_VolumeSet : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeTypes* Type; // 0x18
		Il2CppObject* units; // 0x20
		Il2CppObject* favorUnits; // 0x28
		Il2CppObject* eventUnits; // 0x30

		::System::Void BlockUnitsInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMESET_BLOCKUNITSINPUT_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeReplayTypes* arg, Il2CppObject* arg2, ::System::Int32 arg3, ::System::DateTime* arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, Il2CppObject*, ::System::Int32, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMESET_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* get_EventUnits()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMESET_GET_EVENTUNITS_OFFSET))(nullptr);
		}

		::System::Int32 GetUnitCount(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2)
		{
			return ((::System::Int32(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMESET_GETUNITCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMESET_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Units()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMESET_GET_UNITS_OFFSET))(nullptr);
		}

		Il2CppObject* get_FavorUnits()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMESET_GET_FAVORUNITS_OFFSET))(nullptr);
		}

	};

