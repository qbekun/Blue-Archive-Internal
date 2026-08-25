#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGGAMESTATE_GET__GAME_OFFSET UNITYSDK_OFFSET(0x1DD56A0)
#define MX_MINIGAMECCG_CCGGAMESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2950)
#define MX_MINIGAMECCG_CCGGAMESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DD56B0)
#define MX_MINIGAMECCG_CCGGAMESTATE_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD5740)
#define MX_MINIGAMECCG_CCGGAMESTATE_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DD5750)
#define MX_MINIGAMECCG_CCGGAMESTATE_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1DD57E0)
#define MX_MINIGAMECCG_CCGGAMESTATE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD5820)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_TypeDefinitionIndex = 20622;

	class CCGGameState : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* __game_k__BackingField; // 0x10

		::MX::MinigameCCG::CCGGame* get__game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GET__GAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Execute()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::String* ToDebugString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_TODEBUGSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ONSTATEENTER_OFFSET))(nullptr);
		}

	};
}

