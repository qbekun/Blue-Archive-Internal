#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }

#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE78B00)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0xE78B10)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETINTERACTIONINFOSWITHOUTSEASON_OFFSET UNITYSDK_OFFSET(0xE79040)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE79100)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE79110)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE79150)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_TRYGETINTERACTIONINFOWITHOUTSEASON_OFFSET UNITYSDK_OFFSET(0xE795B0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETINTERACTIONINFOS_OFFSET UNITYSDK_OFFSET(0xE79610)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETALLINTERACTIONINFOS_OFFSET UNITYSDK_OFFSET(0xE796E0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_TRYGETINTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xE73690)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE79760)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE79830)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETALLDATEINTERACTIONINFOS_OFFSET UNITYSDK_OFFSET(0xE79840)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETINTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xE79950)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldInteractionData_TypeDefinitionIndex = 10580;

	class FieldInteractionData : public Il2CppObject
	{
	public:
		Il2CppObject* seasonInteractionDict; // 0x18
		Il2CppObject* originalSeasonInteractionDict; // 0x20

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		Il2CppObject* GetInteractionInfosWithoutSeason(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETINTERACTIONINFOSWITHOUTSEASON_OFFSET))(arg, nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetInteractionInfoWithoutSeason(::System::Int64 arg, ::MXField::Shared::Data::FieldInteractionInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldInteractionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_TRYGETINTERACTIONINFOWITHOUTSEASON_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetInteractionInfos(::System::Int64 arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETINTERACTIONINFOS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetAllInteractionInfos(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETALLINTERACTIONINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInteractionInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldInteractionInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldInteractionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_TRYGETINTERACTIONINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllDateInteractionInfos(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETALLDATEINTERACTIONINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Shared::Data::FieldInteractionInfo* GetInteractionInfo(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDATA_GETINTERACTIONINFO_OFFSET))(arg, arg2, nullptr);
		}

	};
}

