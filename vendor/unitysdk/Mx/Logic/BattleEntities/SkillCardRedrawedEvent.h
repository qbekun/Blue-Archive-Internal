#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define MX_LOGIC_BATTLEENTITIES_SKILLCARDREDRAWEDEVENT_GET_SKILLCARD_OFFSET UNITYSDK_OFFSET(0x112E2A0)
#define MX_LOGIC_BATTLEENTITIES_SKILLCARDREDRAWEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x112E2B0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillCardRedrawedEvent_TypeDefinitionIndex = 13057;

	class SkillCardRedrawedEvent : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* _SkillCard_k__BackingField; // 0x10

		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* get_SkillCard()
		{
			return ((::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCARDREDRAWEDEVENT_GET_SKILLCARD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCARDREDRAWEDEVENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

