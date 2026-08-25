#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA780)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA7A0)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA7B0)
#define MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA7D0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShiftingCraftRecipeSortingSaveData1_TypeDefinitionIndex = 19938;

	class ShiftingCraftRecipeSortingSaveData1 : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14
		ShiftingCraftRecipeFilter* RecipeFilter; // 0x18

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTRECIPESORTINGSAVEDATA1_CLONE_OFFSET))(nullptr);
		}

	};
}

