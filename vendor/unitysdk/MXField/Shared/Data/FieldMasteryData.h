#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE7B940)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETLEVELINFO_OFFSET UNITYSDK_OFFSET(0xE7B950)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYLEVELINFO_OFFSET UNITYSDK_OFFSET(0xE7BB50)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYLEVELINFOS_OFFSET UNITYSDK_OFFSET(0xE7BA80)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_GETEXPDIFF_OFFSET UNITYSDK_OFFSET(0xE7BC10)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYINFO_OFFSET UNITYSDK_OFFSET(0xE7BCB0)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_HASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xE7BE60)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE7BF60)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYINFOWITHINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xE78F00)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE7C990)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYINFOS_OFFSET UNITYSDK_OFFSET(0xE7BE00)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE7C9A0)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYMANAGEINFO_OFFSET UNITYSDK_OFFSET(0xE7BBB0)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7CA10)
#define MXFIELD_SHARED_DATA_FIELDMASTERYDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE7CB30)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldMasteryData_TypeDefinitionIndex = 10593;

	class FieldMasteryData : public Il2CppObject
	{
	public:
		Il2CppObject* masteryManageInfos; // 0x18
		Il2CppObject* masteryInfos; // 0x20
		Il2CppObject* masteryLevelInfos; // 0x28

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetLevelInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldMasteryLevelInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldMasteryLevelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETLEVELINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetMasteryLevelInfo(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYLEVELINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetMasteryLevelInfos(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYLEVELINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetExpDiff(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_GETEXPDIFF_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean TryGetMasteryInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldMasteryInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldMasteryInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasNextLevel(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_HASNEXTLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMasteryInfoWithInteractionId(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldMasteryInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldMasteryInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYINFOWITHINTERACTIONID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMasteryInfos(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMasteryManageInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldMasteryManageInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldMasteryManageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_TRYGETMASTERYMANAGEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

	};
}

