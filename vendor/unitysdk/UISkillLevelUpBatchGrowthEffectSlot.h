#pragma once
#include "unitysdk.h"

class UISkillInfo;
class UILabel;
namespace MX::Logic::BattleEntities { class SkillSlot; }
class CharacterObject;

#define UISKILLLEVELUPBATCHGROWTHEFFECTSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22ECF60)
#define UISKILLLEVELUPBATCHGROWTHEFFECTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22ED0A0)

	inline static constexpr unsigned int UISkillLevelUpBatchGrowthEffectSlot_TypeDefinitionIndex = 4882;

	class UISkillLevelUpBatchGrowthEffectSlot : public Il2CppObject
	{
	public:
		UISkillInfo* skillInfo; // 0x18
		UILabel* curLevelLabel; // 0x20

		::System::Void SetData(::MX::Logic::BattleEntities::SkillSlot* arg, CharacterObject* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPBATCHGROWTHEFFECTSLOT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPBATCHGROWTHEFFECTSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

