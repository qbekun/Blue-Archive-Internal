#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class ProjectileSkillData; }

#define <>C__DISPLAYCLASS6_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1475AF0)
#define <>C__DISPLAYCLASS6_0__PROJECTILESKILL_G__GETPROJECTILEPREFAB|0_OFFSET UNITYSDK_OFFSET(0x1475B00)

	inline static constexpr unsigned int <>c__DisplayClass6_0_TypeDefinitionIndex = 15144;

	class <>c__DisplayClass6_0 : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* dir; // 0x10
		::MX::MinigameShooting::Character* character; // 0x20
		::MX::MinigameShooting::ProjectileSkillData* projectileSkillData; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_0_.CTOR_OFFSET))(nullptr);
		}

		::System::String* _ProjectileSkill_g__GetProjectilePrefab|0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_0__PROJECTILESKILL_G__GETPROJECTILEPREFAB|0_OFFSET))(nullptr);
		}

	};

