#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class VisualSkillEntityData; }
namespace MX::Visual::Data { class VisualEffectData; }

#define MX_VISUAL_DATA_ENTITYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA30)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int EntityEffect_TypeDefinitionIndex = 20221;

	class EntityEffect : public Il2CppObject
	{
	public:
		::System::String* EntityName; // 0x10
		::MX::Visual::Data::VisualSkillEntityData* SkillEntity; // 0x18
		::MX::Visual::Data::VisualEffectData* FireEffect; // 0x20
		::MX::Visual::Data::VisualEffectData* CreationEffect; // 0x28
		::MX::Visual::Data::VisualEffectData* LoopEffectAfterCreation; // 0x30
		::MX::Visual::Data::VisualEffectData* EndEffectAfterLoop; // 0x38
		::MX::Visual::Data::VisualEffectData* SplashEffect; // 0x40
		::MX::Visual::Data::VisualEffectData* HitWoodEffect; // 0x48
		::MX::Visual::Data::VisualEffectData* HitStoneEffect; // 0x50
		::MX::Visual::Data::VisualEffectData* HitFleshEffect; // 0x58
		::MX::Visual::Data::VisualEffectData* HitMetalEffect; // 0x60
		::MX::Visual::Data::VisualEffectData* MissEffect; // 0x68
		::MX::Visual::Data::VisualEffectData* RemoveEffectAtCancel; // 0x70
		::System::String* AdditionalGuidePrefabPath; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_ENTITYEFFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

