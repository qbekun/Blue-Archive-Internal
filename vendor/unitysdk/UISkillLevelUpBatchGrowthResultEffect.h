#pragma once
#include "unitysdk.h"

class UIGrid;
class CharacterObject;

#define UISKILLLEVELUPBATCHGROWTHRESULTEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22ED0B0)
#define UISKILLLEVELUPBATCHGROWTHRESULTEFFECT_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x22E7440)

	inline static constexpr unsigned int UISkillLevelUpBatchGrowthResultEffect_TypeDefinitionIndex = 4884;

	class UISkillLevelUpBatchGrowthResultEffect : public Il2CppObject
	{
	public:
		Il2CppObject* slots; // 0x18
		UIGrid* grid; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPBATCHGROWTHRESULTEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialized(CharacterObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(CharacterObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPBATCHGROWTHRESULTEFFECT_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

	};

