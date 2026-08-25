#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffect; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_ATTACHEDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCC900)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC910)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DCC9C0)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFORESOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCC9D0)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFOREBASEPOWER_OFFSET UNITYSDK_OFFSET(0x1DCC9E0)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFORESTACK_OFFSET UNITYSDK_OFFSET(0x1DCC9F0)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERBASEPOWER_OFFSET UNITYSDK_OFFSET(0x1DCCA00)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERSTACK_OFFSET UNITYSDK_OFFSET(0x1DCCA10)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERSOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCA20)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_LOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1DCCA30)
#define MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFOREACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DCCA40)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ChangeLogicEffect_TypeDefinitionIndex = 20535;

	class CCGEvent_ChangeLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGLogicEffect* _LogicEffect_k__BackingField; // 0x10
		::System::Int32 _AttachedEntityId_k__BackingField; // 0x18
		::System::Int32 _BeforeSourceEntityId_k__BackingField; // 0x1C
		::System::Int32 _BeforeStack_k__BackingField; // 0x20
		::System::Int32 _BeforeBasePower_k__BackingField; // 0x24
		::System::Int32 _BeforeActiveCost_k__BackingField; // 0x28
		::System::Int32 _AfterSourceEntityId_k__BackingField; // 0x2C
		::System::Int32 _AfterStack_k__BackingField; // 0x30
		::System::Int32 _AfterBasePower_k__BackingField; // 0x34
		::System::Int32 _AfterActiveCost_k__BackingField; // 0x38

		::System::Int32 get_AttachedEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_ATTACHEDENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGLogicEffect* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffect*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::System::Int32, ::System::Int32, ::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_AfterActiveCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERACTIVECOST_OFFSET))(nullptr);
		}

		::System::Int32 get_BeforeSourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFORESOURCEENTITYID_OFFSET))(nullptr);
		}

		::System::Int32 get_BeforeBasePower()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFOREBASEPOWER_OFFSET))(nullptr);
		}

		::System::Int32 get_BeforeStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFORESTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_AfterBasePower()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERBASEPOWER_OFFSET))(nullptr);
		}

		::System::Int32 get_AfterStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERSTACK_OFFSET))(nullptr);
		}

		::System::Int32 get_AfterSourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_AFTERSOURCEENTITYID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGLogicEffect* get_LogicEffect()
		{
			return (return (::MX::MinigameCCG::CCGLogicEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_LOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Int32 get_BeforeActiveCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGELOGICEFFECT_GET_BEFOREACTIVECOST_OFFSET))(nullptr);
		}

	};
}

