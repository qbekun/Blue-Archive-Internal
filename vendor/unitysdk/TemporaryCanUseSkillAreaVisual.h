#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class TemporaryCanUseSkillArea; }

#define TEMPORARYCANUSESKILLAREAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1815D30)

	inline static constexpr unsigned int TemporaryCanUseSkillAreaVisual_TypeDefinitionIndex = 1256;

	class TemporaryCanUseSkillAreaVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::TemporaryCanUseSkillArea* Area; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPORARYCANUSESKILLAREAVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

