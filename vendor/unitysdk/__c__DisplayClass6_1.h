#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class ProjectileData; }
class <>c__DisplayClass6_0;
namespace MX::MinigameShooting { class Projectile; }

#define <>C__DISPLAYCLASS6_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1475BD0)
#define <>C__DISPLAYCLASS6_1__PROJECTILESKILL_B__1_OFFSET UNITYSDK_OFFSET(0x1475BE0)

	inline static constexpr unsigned int <>c__DisplayClass6_1_TypeDefinitionIndex = 15145;

	class <>c__DisplayClass6_1 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::ProjectileData* projectileData; // 0x10
		<>c__DisplayClass6_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ProjectileSkill_b__1(::MX::MinigameShooting::Projectile* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Projectile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_1__PROJECTILESKILL_B__1_OFFSET))(arg, nullptr);
		}

	};

