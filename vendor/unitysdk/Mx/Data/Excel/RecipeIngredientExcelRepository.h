#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C50880)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C509F0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C50A30)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C50D30)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C51050)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeIngredientExcelRepository_TypeDefinitionIndex = 19216;

	class RecipeIngredientExcelRepository : public InteractionToggle
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

