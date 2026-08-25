#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data::Excel { class InteractiveWorldRaidCarrierRecipeExcel; }

#define MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x184F5E0)
#define MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x184F770)
#define MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x184F780)
#define MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x184F790)
#define MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_RECIPEINGREDIENTIDS_OFFSET UNITYSDK_OFFSET(0x184F7A0)

namespace MX::Data
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierRecipeInfo_TypeDefinitionIndex = 15847;

	class InteractiveWorldRaidCarrierRecipeInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SkillId_k__BackingField; // 0x10
		::System::Int32 _SkillLevel_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x1C
		Il2CppObject* _RecipeIngredientIds_k__BackingField; // 0x20

		::System::Void .ctor(::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_SKILLID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return (return (::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_RecipeIngredientIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCARRIERRECIPEINFO_GET_RECIPEINGREDIENTIDS_OFFSET))(nullptr);
		}

	};
}

