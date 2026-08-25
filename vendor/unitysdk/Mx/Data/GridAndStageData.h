#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::StageSaveData { class StageSaveData&; }

#define MX_DATA_GRIDANDSTAGEDATA_LOADSTAGE_OFFSET UNITYSDK_OFFSET(0x18DECD0)
#define MX_DATA_GRIDANDSTAGEDATA_TRYGETSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x18DF7D0)
#define MX_DATA_GRIDANDSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18DF830)
#define MX_DATA_GRIDANDSTAGEDATA_TRYGETGROUNDGRIDDATA_OFFSET UNITYSDK_OFFSET(0x18DFC50)
#define MX_DATA_GRIDANDSTAGEDATA_LOADGRID_OFFSET UNITYSDK_OFFSET(0x18DF860)
#define MX_DATA_GRIDANDSTAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DFCB0)
#define MX_DATA_GRIDANDSTAGEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18DFD80)
#define MX_DATA_GRIDANDSTAGEDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18DFD90)
#define MX_DATA_GRIDANDSTAGEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18DFDA0)
#define MX_DATA_GRIDANDSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18DFDB0)

namespace MX::Data
{
	inline static constexpr unsigned int GridAndStageData_TypeDefinitionIndex = 16139;

	class GridAndStageData : public Il2CppObject
	{
	public:
		Il2CppObject* GroundGridDict; // 0x18
		Il2CppObject* StageSaveDataDict; // 0x20

		::System::Void LoadStage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_LOADSTAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetStageSaveData(::System::String* str, ::MX::Logic::Battles::StageSaveData::StageSaveData&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Logic::Battles::StageSaveData::StageSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_TRYGETSTAGESAVEDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetGroundGridData(::System::String* str, GroundGrid&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, GroundGrid&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_TRYGETGROUNDGRIDDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadGrid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_LOADGRID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GRIDANDSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

	};
}

