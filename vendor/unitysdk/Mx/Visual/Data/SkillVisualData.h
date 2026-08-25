#pragma once
#include "../../../unitysdk.h"

#define MX_VISUAL_DATA_SKILLVISUALDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BAB0)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int SkillVisualData_TypeDefinitionIndex = 20229;

	class SkillVisualData : public Il2CppObject
	{
	public:
		::System::String* VisualDataKey; // 0x10
		::System::String* GuidePrefabPath; // 0x18
		Il2CppObject* ActionEffects; // 0x20
		Il2CppObject* EntityEffects; // 0x28
		Il2CppObject* EntityEffectTable; // 0x30
		Il2CppObject* LogicEffectVisuals; // 0x38
		Il2CppObject* LogicEffectVisualTable; // 0x40
		Il2CppObject* BattleItems; // 0x48
		Il2CppObject* BattleItemTable; // 0x50
		Il2CppObject* ParticleEffectDatas; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_SKILLVISUALDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

