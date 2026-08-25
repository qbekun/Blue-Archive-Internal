#pragma once
#include "unitysdk.h"

namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define CLICKSHIFTINGCRAFTRECIPESELECTEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A9540)
#define CLICKSHIFTINGCRAFTRECIPESELECTEDMESSAGE_GET_RECIPEDATA_OFFSET UNITYSDK_OFFSET(0x23A9570)
#define CLICKSHIFTINGCRAFTRECIPESELECTEDMESSAGE_SET_RECIPEDATA_OFFSET UNITYSDK_OFFSET(0x23A9580)

	inline static constexpr unsigned int ClickShiftingCraftRecipeSelectedMessage_TypeDefinitionIndex = 5201;

	class ClickShiftingCraftRecipeSelectedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::Data::ShiftingCraftRecipeExcelInfo* _RecipeData_k__BackingField; // 0x18

		::System::Void .ctor(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CLICKSHIFTINGCRAFTRECIPESELECTEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Data::ShiftingCraftRecipeExcelInfo* get_RecipeData()
		{
			return ((::MX::Data::ShiftingCraftRecipeExcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKSHIFTINGCRAFTRECIPESELECTEDMESSAGE_GET_RECIPEDATA_OFFSET))(nullptr);
		}

		::System::Void set_RecipeData(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CLICKSHIFTINGCRAFTRECIPESELECTEDMESSAGE_SET_RECIPEDATA_OFFSET))(arg, nullptr);
		}

	};

