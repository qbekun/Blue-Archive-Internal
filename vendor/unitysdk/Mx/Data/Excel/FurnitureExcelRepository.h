#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B2B920)
#define MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BD20)
#define MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B2BD60)
#define MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B2BED0)
#define MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B2C1D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureExcelRepository_TypeDefinitionIndex = 18023;

	class FurnitureExcelRepository : public ::MXUnderCover::UCPropEntity
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

