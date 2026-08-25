#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C4EC00)
#define MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C4EF20)
#define MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C4F320)
#define MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C4F620)
#define MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F790)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeExcelRepository_TypeDefinitionIndex = 19209;

	class RecipeExcelRepository : public Interaction
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

