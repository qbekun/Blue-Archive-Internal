#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE7CF10)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETDAILYQUESTINFOS_OFFSET UNITYSDK_OFFSET(0xE7CF20)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE7D0C0)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETQUESTINFOBYASSETPATH_OFFSET UNITYSDK_OFFSET(0xE7D100)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETQUESTINFO_OFFSET UNITYSDK_OFFSET(0xE7D3B0)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7D410)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE7D4E0)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETQUESTINFOSBYDATE_OFFSET UNITYSDK_OFFSET(0xE7D4F0)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_GETALLQUESTINFOS_OFFSET UNITYSDK_OFFSET(0xE7D690)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE7D6E0)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_GETALLSEASONQUESTINFOS_OFFSET UNITYSDK_OFFSET(0xE7D6F0)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETSEASONQUESTINFO_OFFSET UNITYSDK_OFFSET(0xE7D740)
#define MXFIELD_SHARED_DATA_FIELDQUESTDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE7D860)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldQuestData_TypeDefinitionIndex = 10598;

	class FieldQuestData : public Il2CppObject
	{
	public:
		Il2CppObject* questInfoDict; // 0x18
		Il2CppObject* originalQuestInfoDict; // 0x20

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDailyQuestInfos(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETDAILYQUESTINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean TryGetQuestInfoByAssetPath(::System::String* str, ::MXField::Shared::Data::FieldQuestInfo&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::MXField::Shared::Data::FieldQuestInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETQUESTINFOBYASSETPATH_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetQuestInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldQuestInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldQuestInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETQUESTINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetQuestInfosByDate(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETQUESTINFOSBYDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetAllQuestInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_GETALLQUESTINFOS_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetAllSeasonQuestInfos(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_GETALLSEASONQUESTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSeasonQuestInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldQuestInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldQuestInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_TRYGETSEASONQUESTINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

	};
}

