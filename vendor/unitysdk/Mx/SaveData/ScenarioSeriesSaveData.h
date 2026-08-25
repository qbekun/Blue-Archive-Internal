#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ScenarioModeSubTypes; }

#define MX_SAVEDATA_SCENARIOSERIESSAVEDATA_ISSERIESCHANGENOTICEWATCHED_OFFSET UNITYSDK_OFFSET(0x1D257D0)
#define MX_SAVEDATA_SCENARIOSERIESSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D25820)
#define MX_SAVEDATA_SCENARIOSERIESSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D258A0)
#define MX_SAVEDATA_SCENARIOSERIESSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D25930)
#define MX_SAVEDATA_SCENARIOSERIESSAVEDATA_SAVELASTSELECTEDMAINSERIES_OFFSET UNITYSDK_OFFSET(0x1D259E0)
#define MX_SAVEDATA_SCENARIOSERIESSAVEDATA_SAVESERIESCHANGENOTICEWATCHED_OFFSET UNITYSDK_OFFSET(0x1D25A00)
#define MX_SAVEDATA_SCENARIOSERIESSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D25A70)

namespace MX::SaveData
{
	inline static constexpr unsigned int ScenarioSeriesSaveData_TypeDefinitionIndex = 20006;

	class ScenarioSeriesSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* SeriesChangeNoticeWatchedDic; // 0x10
		::FlatData::ScenarioModeSubTypes* LastSelectedMainSeriesInModeSelect; // 0x18

		::System::Boolean IsSeriesChangeNoticeWatched(::FlatData::ScenarioModeSubTypes* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SCENARIOSERIESSAVEDATA_ISSERIESCHANGENOTICEWATCHED_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SCENARIOSERIESSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SCENARIOSERIESSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SCENARIOSERIESSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SaveLastSelectedMainSeries(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SCENARIOSERIESSAVEDATA_SAVELASTSELECTEDMAINSERIES_OFFSET))(arg, nullptr);
		}

		::System::Void SaveSeriesChangeNoticeWatched(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SCENARIOSERIESSAVEDATA_SAVESERIESCHANGENOTICEWATCHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SCENARIOSERIESSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

