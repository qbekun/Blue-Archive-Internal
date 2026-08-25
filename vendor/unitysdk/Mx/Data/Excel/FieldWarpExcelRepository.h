#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B1FE10)
#define MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B20110)
#define MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B20430)
#define MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1B205A0)
#define MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B209A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldWarpExcelRepository_TypeDefinitionIndex = 17988;

	class FieldWarpExcelRepository : public ::MXUnderCover::UCEntityCollection
	{
	public:
		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

