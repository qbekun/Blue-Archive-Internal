#pragma once
#include "unitysdk.h"

namespace FlatData { class StageTopography; }
namespace FlatData { class TerrainAdaptationStat; }

#define BATTLEADAPTATIONINFO_SET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x275EC30)
#define BATTLEADAPTATIONINFO_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x275EC40)
#define BATTLEADAPTATIONINFO_SET_TERRAINADAPTATIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x275EC50)
#define BATTLEADAPTATIONINFO_GET_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x275EC60)
#define BATTLEADAPTATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275EC70)
#define BATTLEADAPTATIONINFO_GET_TERRAINADAPTATIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x275ECB0)
#define BATTLEADAPTATIONINFO_SET_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x275ECC0)

	inline static constexpr unsigned int BattleAdaptationInfo_TypeDefinitionIndex = 7292;

	class BattleAdaptationInfo : public Il2CppObject
	{
	public:
		::FlatData::StageTopography* _StageTopography_k__BackingField; // 0x10
		::FlatData::TerrainAdaptationStat* _TerrainAdaptationStat_k__BackingField; // 0x14
		::System::String* _TerrainAdaptationDescription_k__BackingField; // 0x18

		::System::Void set_StageTopography(::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEADAPTATIONINFO_SET_STAGETOPOGRAPHY_OFFSET))(arg, nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEADAPTATIONINFO_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Void set_TerrainAdaptationDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEADAPTATIONINFO_SET_TERRAINADAPTATIONDESCRIPTION_OFFSET))(str, nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_TerrainAdaptationStat()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEADAPTATIONINFO_GET_TERRAINADAPTATIONSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::StageTopography* arg, ::FlatData::TerrainAdaptationStat* arg2, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::StageTopography*, ::FlatData::TerrainAdaptationStat*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEADAPTATIONINFO_.CTOR_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::String* get_TerrainAdaptationDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEADAPTATIONINFO_GET_TERRAINADAPTATIONDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_TerrainAdaptationStat(::FlatData::TerrainAdaptationStat* arg)
		{
			((::System::Void(*)(::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEADAPTATIONINFO_SET_TERRAINADAPTATIONSTAT_OFFSET))(arg, nullptr);
		}

	};

