#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class CharacterStat; }
namespace MX::MinigameShooting { class ProjectileSkillData; }
namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_PROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1466BF0)
#define MX_MINIGAMESHOOTING_PROJECTILE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1466C80)
#define MX_MINIGAMESHOOTING_PROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1466EC0)
#define MX_MINIGAMESHOOTING_PROJECTILE_GETNEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1466F80)
#define MX_MINIGAMESHOOTING_PROJECTILE_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1468150)
#define MX_MINIGAMESHOOTING_PROJECTILE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1468160)
#define MX_MINIGAMESHOOTING_PROJECTILE_HITCHARACTER_OFFSET UNITYSDK_OFFSET(0x1467A60)
#define MX_MINIGAMESHOOTING_PROJECTILE_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x14683F0)
#define MX_MINIGAMESHOOTING_PROJECTILE_GETNEXTSTRAIGHTPOS_OFFSET UNITYSDK_OFFSET(0x1468050)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Projectile_TypeDefinitionIndex = 15098;

	class Projectile : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x30
		Il2CppObject* hitCharacters; // 0x38
		::System::Int64 damage; // 0x40
		::System::Int32 leftReflect; // 0x48
		::System::Boolean isPlayer; // 0x4C
		::MX::MinigameShooting::Character* owner; // 0x50
		::MX::MinigameShooting::CharacterStat* stat; // 0x58
		::MX::MinigameShooting::ProjectileSkillData* skillData; // 0x60
		::UnityEngine::Vector3* prevPos; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetNextPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_GETNEXTPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::String* str, ::MX::MinigameShooting::Character* arg2, ::MX::MinigameShooting::ProjectileSkillData* arg3, ::UnityEngine::Vector3* arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::MX::MinigameShooting::Character*, ::MX::MinigameShooting::ProjectileSkillData*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_INITIALIZE_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void HitCharacter(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_HITCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_GET_CHARACTER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetNextStraightPos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILE_GETNEXTSTRAIGHTPOS_OFFSET))(nullptr);
		}

	};
}

