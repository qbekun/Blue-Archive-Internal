#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffect; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DE1D10)
#define MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE1DC0)
#define MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE1E60)
#define MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3C70)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_RemoveLogicEffect_TypeDefinitionIndex = 20663;

	class CCGGameState_RemoveLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGLogicEffect* _logicEffect; // 0x18
		::MX::MinigameCCG::CCGEntity* _attached; // 0x20

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REMOVELOGICEFFECT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

