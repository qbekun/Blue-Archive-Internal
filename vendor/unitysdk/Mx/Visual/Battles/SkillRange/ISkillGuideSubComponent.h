#pragma once
#include "../../../../unitysdk.h"

#define MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDESUBCOMPONENT_SETMAINTARGET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int ISkillGuideSubComponent_TypeDefinitionIndex = 20399;

	class ISkillGuideSubComponent : public Il2CppObject
	{
	public:
		::System::Void SetMainTarget(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDESUBCOMPONENT_SETMAINTARGET_OFFSET))(arg, nullptr);
		}

	};
}

