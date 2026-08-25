#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_GETSEASONKEYWORDCOUNT_OFFSET UNITYSDK_OFFSET(0xE7AA10)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE7AC40)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7AC50)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE7ACD0)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE7ACE0)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_TRYGETSEASONKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xE7AD20)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE7ADC0)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE7ADD0)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_TRYGETSEASONALLKEYWORDINFOS_OFFSET UNITYSDK_OFFSET(0xE7B1A0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldKeywordData_TypeDefinitionIndex = 10585;

	class FieldKeywordData : public Il2CppObject
	{
	public:
		Il2CppObject* fieldKeywordInfos; // 0x18

		::System::Int64 GetSeasonKeywordCount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_GETSEASONKEYWORDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSeasonKeywordInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldKeywordInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldKeywordInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_TRYGETSEASONKEYWORDINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSeasonAllKeywordInfos(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDDATA_TRYGETSEASONALLKEYWORDINFOS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

