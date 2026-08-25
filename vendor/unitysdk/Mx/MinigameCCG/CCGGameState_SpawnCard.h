#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class ICCGCardData; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGEntityLocation; }

#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD3E30)
#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3EE0)
#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_SET_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1DD3F70)
#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD3F80)
#define MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_GET_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1DD4210)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_SpawnCard_TypeDefinitionIndex = 20615;

	class CCGGameState_SpawnCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* _Spawned_k__BackingField; // 0x18
		::MX::MinigameCCG::ICCGCardData* _data; // 0x20
		::MX::MinigameCCG::CCGPlayer* _player; // 0x28
		::MX::MinigameCCG::CCGEntityLocation* _location; // 0x30
		Il2CppObject* _forceDisposal; // 0x34

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::ICCGCardData* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGEntityLocation* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCardData*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGEntityLocation*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_Spawned(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_SET_SPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_ONSTATE_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCard* get_Spawned()
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SPAWNCARD_GET_SPAWNED_OFFSET))(nullptr);
		}

	};
}

