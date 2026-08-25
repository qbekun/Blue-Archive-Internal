#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCharacterData; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNSTRIKER_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DDA8A0)
#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNSTRIKER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DDAA50)
#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAB00)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_SpawnStriker_TypeDefinitionIndex = 20636;

	class CCGGameState_SpawnStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGCharacterData* _data; // 0x18
		::MX::MinigameCCG::CCGPlayer* _player; // 0x20
		::System::Int32 _slotIndex; // 0x28
		Il2CppObject* _initialHealth; // 0x2C
		::System::Boolean _isSpawn; // 0x34

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNSTRIKER_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNSTRIKER_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::ICCGCharacterData* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCharacterData*, ::MX::MinigameCCG::CCGPlayer*, ::System::Int32, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNSTRIKER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

