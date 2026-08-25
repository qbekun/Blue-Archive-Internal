#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1DCD1B0)
#define MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_EVENTHEALTHCHANGES_OFFSET UNITYSDK_OFFSET(0x1DCD1C0)
#define MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD1D0)
#define MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCD240)
#define MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_FROMLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1DCD250)
#define MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1DCD260)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_DamageStriker_TypeDefinitionIndex = 20547;

	class CCGEvent_DamageStriker : public Il2CppObject
	{
	public:
		::System::Int64 _SkillId_k__BackingField; // 0x10
		::System::Int32 _SourceEntityId_k__BackingField; // 0x18
		::System::Int32 _Damage_k__BackingField; // 0x1C
		Il2CppObject* _EventHealthChanges_k__BackingField; // 0x20
		::System::Boolean _FromLogicEffect_k__BackingField; // 0x28

		::System::Int64 get_SkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_SKILLID_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventHealthChanges()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_EVENTHEALTHCHANGES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_SourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_SOURCEENTITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_FromLogicEffect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_FROMLOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Int32 get_Damage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DAMAGESTRIKER_GET_DAMAGE_OFFSET))(nullptr);
		}

	};
}

