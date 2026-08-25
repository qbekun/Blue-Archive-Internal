#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ExtraStatDamageEffectDAO; }
namespace MX::Logic::Skills::LogicEffects { class DamageOverTimeEffect; }
namespace MX::GameData::DAO::Battle { class ConfrontationGaugeRecoverEffectDAO; }
namespace MX::Logic::Skills::LogicEffects { class ConfrontationGaugeRecoverOverTimeEffect; }
namespace MX::GameData::DAO::Battle { class HealEffectDAO; }
namespace MX::Logic::Skills::LogicEffects { class HealOverTimeEffect; }
namespace MX::GameData::DAO::Battle { class ShieldHealEffectDAO; }
namespace MX::Logic::Skills::LogicEffects { class ShieldHealOverTimeEffect; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeRecoverEffectDAO; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeRecoverOverTimeEffect; }
namespace MX::Logic::Data { class DummyEffectEmptyDAO; }
namespace MX::Logic::Skills::LogicEffects { class DummyEffect; }
namespace MX::Logic::Skills::LogicEffects { class MaxHPCapGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedMultiplierbyDamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ExSkillCardRedrawGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class NotMoveEffect; }
namespace MX::Logic::Skills::LogicEffects { class ChangeSkillCardToCopiedCardEffect; }
namespace MX::Logic::Skills::LogicEffects { class TargetSlotExSkillCostOverrideEffect; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET UNITYSDK_OFFSET(0x141C5E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET UNITYSDK_OFFSET(0x141CA40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET UNITYSDK_OFFSET(0x141CB60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET UNITYSDK_OFFSET(0x141CD30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET UNITYSDK_OFFSET(0x141CE60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141CF70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D050)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D130)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D210)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D2F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D3D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D4B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D590)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D670)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET UNITYSDK_OFFSET(0x141D750)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_FINDLOGICEFFECTTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x141D830)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x141DBD0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int LogicEffectUtil_TypeDefinitionIndex = 14776;

	class LogicEffectUtil : public Il2CppObject
	{
	public:
		::System::Reflection::Assembly* logicEffectAssembly; // 0x0

		::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO* ReverseToDAO(::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect* arg)
		{
			return ((::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO*(*)(::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET))(arg, nullptr);
		}

		::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO* ReverseToDAO(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect* arg)
		{
			return ((::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO*(*)(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET))(arg, nullptr);
		}

		::MX::GameData::DAO::Battle::HealEffectDAO* ReverseToDAO(::MX::Logic::Skills::LogicEffects::HealOverTimeEffect* arg)
		{
			return ((::MX::GameData::DAO::Battle::HealEffectDAO*(*)(::MX::Logic::Skills::LogicEffects::HealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET))(arg, nullptr);
		}

		::MX::GameData::DAO::Battle::ShieldHealEffectDAO* ReverseToDAO(::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect* arg)
		{
			return ((::MX::GameData::DAO::Battle::ShieldHealEffectDAO*(*)(::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET))(arg, nullptr);
		}

		::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO* ReverseToDAO(::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect* arg)
		{
			return ((::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO*(*)(::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::DummyEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::DummyEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::DamagedLimitEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::DamagedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::HealedLimitEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::HealedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::NotMoveEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::NotMoveEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::DummyEffectEmptyDAO* ReverseToDummyEffectEmptyDAO(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::MX::Logic::Data::DummyEffectEmptyDAO*(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_REVERSETODUMMYEFFECTEMPTYDAO_OFFSET))(arg, nullptr);
		}

		::System::Type* FindLogicEffectTypeByName(::System::String* str)
		{
			return ((::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_FINDLOGICEFFECTTYPEBYNAME_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTUTIL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

