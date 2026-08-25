#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_TRYGETSEASONINFOBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE7F5D0)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE7F6E0)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE7F6F0)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE7F700)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_TRYGETSEASONINFO_OFFSET UNITYSDK_OFFSET(0xE7F740)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7F7A0)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE7F820)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_GETALLSEASONINFOS_OFFSET UNITYSDK_OFFSET(0xE7FAB0)
#define MXFIELD_SHARED_DATA_FIELDSEASONDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE7FB00)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldSeasonData_TypeDefinitionIndex = 10610;

	class FieldSeasonData : public Il2CppObject
	{
	public:
		Il2CppObject* seasonInfos; // 0x18

		::System::Boolean TryGetSeasonInfoByEventContentId(::System::Int64 arg, ::MXField::Shared::Data::FieldSeasonInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_TRYGETSEASONINFOBYEVENTCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSeasonInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldSeasonInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_TRYGETSEASONINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllSeasonInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_GETALLSEASONINFOS_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSEASONDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

	};
}

