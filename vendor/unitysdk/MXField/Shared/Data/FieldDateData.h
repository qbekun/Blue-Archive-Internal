#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETNEXTDATEINFO_OFFSET UNITYSDK_OFFSET(0xE74AE0)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETSEASONDATEINFO_OFFSET UNITYSDK_OFFSET(0xE74D90)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE74EE0)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE74EF0)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE75560)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE755A0)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETDATEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0xE74CA0)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETSEASONDATEINFOS_OFFSET UNITYSDK_OFFSET(0xE74C40)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE755B0)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETORIGINALDATEINFO_OFFSET UNITYSDK_OFFSET(0xE755C0)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE75620)
#define MXFIELD_SHARED_DATA_FIELDDATEDATA_GETSEASONDATEINFOS_OFFSET UNITYSDK_OFFSET(0xE756F0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldDateData_TypeDefinitionIndex = 10562;

	class FieldDateData : public Il2CppObject
	{
	public:
		Il2CppObject* seasonDateDict; // 0x18
		Il2CppObject* originalSeasonDateDict; // 0x20

		::System::Boolean TryGetNextDateInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldDateInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldDateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETNEXTDATEINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetSeasonDateInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldDateInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldDateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETSEASONDATEINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDateInfoByIndex(::System::Int64 arg, ::System::Int32 arg2, ::MXField::Shared::Data::FieldDateInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::MXField::Shared::Data::FieldDateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETDATEINFOBYINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetSeasonDateInfos(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETSEASONDATEINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetOriginalDateInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldDateInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldDateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_TRYGETORIGINALDATEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonDateInfos(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEDATA_GETSEASONDATEINFOS_OFFSET))(arg, nullptr);
		}

	};
}

