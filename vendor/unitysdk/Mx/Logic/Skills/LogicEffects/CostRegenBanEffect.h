#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class CostRegenBanEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x140C990)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x140CB50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x140CB60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140CB70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x140CAC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140CBE0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int CostRegenBanEffect_TypeDefinitionIndex = 14722;

	class CostRegenBanEffect : public Il2CppObject
	{
	public:
		::System::Int64 _DurationFrame_k__BackingField; // 0xD0
		::System::Boolean _Dispellable_k__BackingField; // 0xD8

		::System::Void Activate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::CostRegenBanEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::CostRegenBanEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_CHECKEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTREGENBANEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

