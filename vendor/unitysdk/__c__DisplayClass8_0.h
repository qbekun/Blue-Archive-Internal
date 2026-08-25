#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class ProjectileTargetSkillData; }
namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class ProjectileTarget; }

#define <>C__DISPLAYCLASS8_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1475EE0)
#define <>C__DISPLAYCLASS8_0__PROJECTILETARGETSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x1475EF0)

	inline static constexpr unsigned int <>c__DisplayClass8_0_TypeDefinitionIndex = 15146;

	class <>c__DisplayClass8_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::ProjectileTargetSkillData* projectileTargetSkillData; // 0x10
		::MX::MinigameShooting::Character* character; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS8_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ProjectileTargetSkill_b__0(::MX::MinigameShooting::ProjectileTarget* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::ProjectileTarget*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS8_0__PROJECTILETARGETSKILL_B__0_OFFSET))(arg, nullptr);
		}

	};

