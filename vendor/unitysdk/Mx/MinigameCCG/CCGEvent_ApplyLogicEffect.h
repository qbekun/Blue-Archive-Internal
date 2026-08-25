#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGBuffType; }
namespace MX::MinigameCCG { class CCGLogicEffectData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGEvent_ApplyLogicEffect; }

#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_LOGICEFFECTID_OFFSET UNITYSDK_OFFSET(0x1DCC510)
#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC520)
#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_TRYMERGE_OFFSET UNITYSDK_OFFSET(0x1DCC710)
#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1DCC7A0)
#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_SOURCEACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DCC7B0)
#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_BASEPOWER_OFFSET UNITYSDK_OFFSET(0x1DCC7C0)
#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_TARGETINFOS_OFFSET UNITYSDK_OFFSET(0x1DCC7D0)
#define MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCC7E0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ApplyLogicEffect_TypeDefinitionIndex = 20534;

	class CCGEvent_ApplyLogicEffect : public Il2CppObject
	{
	public:
		::System::Int64 _LogicEffectId_k__BackingField; // 0x10
		::System::Int32 _SourceEntityId_k__BackingField; // 0x18
		::System::Int32 _SourceActiveCost_k__BackingField; // 0x1C
		Il2CppObject* _TargetInfos_k__BackingField; // 0x20
		::System::Int32 _BasePower_k__BackingField; // 0x28
		::MX::MinigameCCG::CCGBuffType* _BuffType_k__BackingField; // 0x2C

		::System::Int64 get_LogicEffectId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_LOGICEFFECTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGLogicEffectData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffectData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryMerge(::MX::MinigameCCG::CCGEvent_ApplyLogicEffect* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGEvent_ApplyLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_TRYMERGE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGBuffType* get_BuffType()
		{
			return (return (::MX::MinigameCCG::CCGBuffType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_BUFFTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_SourceActiveCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_SOURCEACTIVECOST_OFFSET))(nullptr);
		}

		::System::Int32 get_BasePower()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_BASEPOWER_OFFSET))(nullptr);
		}

		Il2CppObject* get_TargetInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_TARGETINFOS_OFFSET))(nullptr);
		}

		::System::Int32 get_SourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_APPLYLOGICEFFECT_GET_SOURCEENTITYID_OFFSET))(nullptr);
		}

	};
}

