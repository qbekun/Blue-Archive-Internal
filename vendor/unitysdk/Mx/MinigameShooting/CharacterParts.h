#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace UnityEngine { class Collider; }

#define MX_MINIGAMESHOOTING_CHARACTERPARTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x145B8B0)
#define MX_MINIGAMESHOOTING_CHARACTERPARTS_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x145B8C0)
#define MX_MINIGAMESHOOTING_CHARACTERPARTS_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x145B8D0)
#define MX_MINIGAMESHOOTING_CHARACTERPARTS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x145B8E0)
#define MX_MINIGAMESHOOTING_CHARACTERPARTS_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x145B960)
#define MX_MINIGAMESHOOTING_CHARACTERPARTS_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x145B970)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterParts_TypeDefinitionIndex = 15037;

	class CharacterParts : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x18
		::UnityEngine::Collider* _Collider_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERPARTS_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERPARTS_GET_COLLIDER_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERPARTS_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERPARTS_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Collider(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERPARTS_SET_COLLIDER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERPARTS_GET_CHARACTER_OFFSET))(nullptr);
		}

	};
}

