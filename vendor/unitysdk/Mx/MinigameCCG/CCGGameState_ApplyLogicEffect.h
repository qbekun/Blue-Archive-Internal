#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffectData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGLogicEffect; }

#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DDFA50)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE00E0)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT__ONSTATEENTER_B__6_1_OFFSET UNITYSDK_OFFSET(0x1DE0180)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE01C0)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DE0270)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT__ONSTATE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1DE0320)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT__ONSTATEENTER_B__6_0_OFFSET UNITYSDK_OFFSET(0x1DE0360)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_ApplyLogicEffect_TypeDefinitionIndex = 20656;

	class CCGGameState_ApplyLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGLogicEffectData* _data; // 0x18
		Il2CppObject* _targets; // 0x20
		::MX::MinigameCCG::CCGEntity* _source; // 0x28
		::System::Int32 _stack; // 0x30
		::System::Int32 _basePower; // 0x34

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_ONSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGLogicEffectData* arg, Il2CppObject* arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffectData*, Il2CppObject*, ::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean _OnStateEnter_b__6_1(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT__ONSTATEENTER_B__6_1_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_ONSTATEENTER_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Boolean _OnState_b__7_0(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT__ONSTATE_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnStateEnter_b__6_0(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYLOGICEFFECT__ONSTATEENTER_B__6_0_OFFSET))(arg, nullptr);
		}

	};
}

