#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19897E0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1989820)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1989B40)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1989F40)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x198A0B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyLocationExcelRepository_TypeDefinitionIndex = 16571;

	class AcademyLocationExcelRepository : public ::FlatData::ItemCategory
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

