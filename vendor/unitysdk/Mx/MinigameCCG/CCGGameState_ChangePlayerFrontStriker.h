#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGStriker; }

#define MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERFRONTSTRIKER_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE2A30)
#define MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD4E0)
#define MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERFRONTSTRIKER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DE2B00)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_ChangePlayerFrontStriker_TypeDefinitionIndex = 20667;

	class CCGGameState_ChangePlayerFrontStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGStriker* _striker; // 0x18
		::MX::MinigameCCG::CCGStriker* _beforeFrontStriker; // 0x20
		::System::Boolean _forced; // 0x28

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERFRONTSTRIKER_ONSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGStriker* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERFRONTSTRIKER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERFRONTSTRIKER_ONSTATEEXIT_OFFSET))(nullptr);
		}

	};
}

