#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RECIPEINGREDIENTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C50850)
#define MX_DATA_EXCEL_RECIPEINGREDIENTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C50860)
#define MX_DATA_EXCEL_RECIPEINGREDIENTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C50870)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeIngredientDBSchema_TypeDefinitionIndex = 19211;

	class RecipeIngredientDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

