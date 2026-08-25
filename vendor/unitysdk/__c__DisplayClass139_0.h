#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class TemporaryCanUseSkillArea; }

#define <>C__DISPLAYCLASS139_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x138D550)
#define <>C__DISPLAYCLASS139_0__ISINTEMPORARYCANUSESKILLAREA_B__0_OFFSET UNITYSDK_OFFSET(0x13975F0)

	inline static constexpr unsigned int <>c__DisplayClass139_0_TypeDefinitionIndex = 14422;

	class <>c__DisplayClass139_0 : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* position; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS139_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _IsInTemporaryCanUseSkillArea_b__0(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS139_0__ISINTEMPORARYCANUSESKILLAREA_B__0_OFFSET))(arg, nullptr);
		}

	};

