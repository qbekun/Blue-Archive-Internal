#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_TRYGETSTORYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xE7FCF0)
#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE7FD50)
#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE7FD60)
#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7FD70)
#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_GETALLSTORYSTAGEINFOS_OFFSET UNITYSDK_OFFSET(0xE7FDF0)
#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE7FE40)
#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE7FE80)
#define MXFIELD_SHARED_DATA_FIELDSTAGEDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE80110)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldStageData_TypeDefinitionIndex = 10612;

	class FieldStageData : public Il2CppObject
	{
	public:
		Il2CppObject* storyStageInfos; // 0x18

		::System::Boolean TryGetStoryStageInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldStoryStageInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldStoryStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_TRYGETSTORYSTAGEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllStoryStageInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_GETALLSTORYSTAGEINFOS_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTAGEDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

	};
}

