#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffect; }

#define MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE1620)
#define MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DE16D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1780)
#define MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE17E0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_DecayLogicEffect_TypeDefinitionIndex = 20659;

	class CCGGameState_DecayLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGLogicEffect* _logicEffect; // 0x18
		::System::Int32 _decayAmount; // 0x20

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_ONSTATEENTER_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGLogicEffect* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DECAYLOGICEFFECT_ONSTATE_OFFSET))(nullptr);
		}

	};
}

