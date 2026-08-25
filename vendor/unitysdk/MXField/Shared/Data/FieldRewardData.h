#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7DF30)
#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE7DFB0)
#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE7DFF0)
#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE7E000)
#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_TRYGETREWARDINFO_OFFSET UNITYSDK_OFFSET(0xE7E010)
#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE7E070)
#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_TRYGETALLREWARDINFOS_OFFSET UNITYSDK_OFFSET(0xE7E080)
#define MXFIELD_SHARED_DATA_FIELDREWARDDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE7E110)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldRewardData_TypeDefinitionIndex = 10600;

	class FieldRewardData : public Il2CppObject
	{
	public:
		Il2CppObject* fieldRewardInfos; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetRewardInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldRewardInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_TRYGETREWARDINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAllRewardInfos(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_TRYGETALLREWARDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

	};
}

