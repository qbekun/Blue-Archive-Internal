#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class CharacterStat; }
namespace MX::MinigameShooting { class ProjectileTargetSkillData; }
namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_PROJECTILETARGET_RELEASE_OFFSET UNITYSDK_OFFSET(0x1468470)
#define MX_MINIGAMESHOOTING_PROJECTILETARGET_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x14686A0)
#define MX_MINIGAMESHOOTING_PROJECTILETARGET_HITCHARACTER_OFFSET UNITYSDK_OFFSET(0x14686B0)
#define MX_MINIGAMESHOOTING_PROJECTILETARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1468770)
#define MX_MINIGAMESHOOTING_PROJECTILETARGET_ARRIVEPROJECTILE_OFFSET UNITYSDK_OFFSET(0x1468780)
#define MX_MINIGAMESHOOTING_PROJECTILETARGET_UPDATE_OFFSET UNITYSDK_OFFSET(0x1468B90)
#define MX_MINIGAMESHOOTING_PROJECTILETARGET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1468FC0)
#define MX_MINIGAMESHOOTING_PROJECTILETARGET_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x14692A0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ProjectileTarget_TypeDefinitionIndex = 15100;

	class ProjectileTarget : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x30
		::System::Boolean isPlayer; // 0x38
		::System::Int64 damage; // 0x40
		::MX::MinigameShooting::Character* owner; // 0x48
		::MX::MinigameShooting::CharacterStat* stat; // 0x50
		::MX::MinigameShooting::ProjectileTargetSkillData* skillData; // 0x58
		::System::Single startYPos; // 0x60
		::UnityEngine::Vector3* start; // 0x64
		::UnityEngine::Vector3* dest; // 0x70
		::System::Single duration; // 0x7C
		::System::Single distance; // 0x80
		::System::Single time; // 0x84

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_RELEASE_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void HitCharacter(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_HITCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ArriveProjectile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_ARRIVEPROJECTILE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::String* str, ::MX::MinigameShooting::Character* arg2, ::MX::MinigameShooting::ProjectileTargetSkillData* arg3, ::UnityEngine::Vector3* arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::MX::MinigameShooting::Character*, ::MX::MinigameShooting::ProjectileTargetSkillData*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_INITIALIZE_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGET_GET_CHARACTER_OFFSET))(nullptr);
		}

	};
}

