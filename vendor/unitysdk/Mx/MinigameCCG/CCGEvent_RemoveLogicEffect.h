#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffect; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_REMOVELOGICEFFECT_GET_ATTACHEDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCA50)
#define MX_MINIGAMECCG_CCGEVENT_REMOVELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCA60)
#define MX_MINIGAMECCG_CCGEVENT_REMOVELOGICEFFECT_GET_LOGICEFFECTID_OFFSET UNITYSDK_OFFSET(0x1DCCAD0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_RemoveLogicEffect_TypeDefinitionIndex = 20536;

	class CCGEvent_RemoveLogicEffect : public Il2CppObject
	{
	public:
		::System::Int64 _LogicEffectId_k__BackingField; // 0x10
		::System::Int32 _AttachedEntityId_k__BackingField; // 0x18

		::System::Int32 get_AttachedEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REMOVELOGICEFFECT_GET_ATTACHEDENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGLogicEffect* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffect*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REMOVELOGICEFFECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_LogicEffectId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REMOVELOGICEFFECT_GET_LOGICEFFECTID_OFFSET))(nullptr);
		}

	};
}

