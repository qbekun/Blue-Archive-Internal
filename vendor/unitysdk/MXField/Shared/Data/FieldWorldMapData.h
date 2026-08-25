#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_GETWORLDMAPZONEINFOSINDATE_OFFSET UNITYSDK_OFFSET(0xE80EB0)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE80FA0)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE80FB0)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_TRYGETWORLDMAPZONEINFO_OFFSET UNITYSDK_OFFSET(0xE80FC0)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE81020)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_HASGROUPID_OFFSET UNITYSDK_OFFSET(0xE81030)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE81100)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE81410)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE81490)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_GETWORLDMAPZONEINFOS_OFFSET UNITYSDK_OFFSET(0xE814D0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldWorldMapData_TypeDefinitionIndex = 10619;

	class FieldWorldMapData : public Il2CppObject
	{
	public:
		Il2CppObject* fieldWorldMapZoneInfos; // 0x18

		Il2CppObject* GetWorldMapZoneInfosInDate(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_GETWORLDMAPZONEINFOSINDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetWorldMapZoneInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldWorldMapZoneInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldWorldMapZoneInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_TRYGETWORLDMAPZONEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean HasGroupId(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_HASGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldMapZoneInfos(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPDATA_GETWORLDMAPZONEINFOS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

