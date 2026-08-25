#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGEntityLocation; }

#define MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD26E0)
#define MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_GET_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1DD2800)
#define MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_SET_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1DD2810)
#define MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD2820)
#define MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD28D0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_CloneCard_TypeDefinitionIndex = 20605;

	class CCGGameState_CloneCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* _Spawned_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGCard* _card; // 0x20
		::MX::MinigameCCG::CCGPlayer* _player; // 0x28
		::MX::MinigameCCG::CCGEntityLocation* _location; // 0x30
		Il2CppObject* _forceDisposal; // 0x34

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_ONSTATE_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCard* get_Spawned()
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_GET_SPAWNED_OFFSET))(nullptr);
		}

		::System::Void set_Spawned(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_SET_SPAWNED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGEntityLocation* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGEntityLocation*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CLONECARD_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

