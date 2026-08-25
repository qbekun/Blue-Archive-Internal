#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EquipmentOptionType; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }
namespace MX::Logic::Data { class EquipmentOptionChangeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x141BB50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141BB60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x141BBD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141BBE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141BBF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_EVALTYPE_OFFSET UNITYSDK_OFFSET(0x141BC00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x141BC10)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int EquipmentOptionChangeEffect_TypeDefinitionIndex = 14765;

	class EquipmentOptionChangeEffect : public Il2CppObject
	{
	public:
		::FlatData::EquipmentOptionType* _StatType_k__BackingField; // 0xD0
		::MX::Logic::Skills::LogicEffects::StatEvalType* _EvalType_k__BackingField; // 0xD4
		::System::Int64 _Amount_k__BackingField; // 0xD8
		::System::Int32 _DurationFrame_k__BackingField; // 0xE0
		::System::Boolean _Dispellable_k__BackingField; // 0xE4

		::FlatData::EquipmentOptionType* get_StatType()
		{
			return ((::FlatData::EquipmentOptionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_STATTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::EquipmentOptionChangeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::EquipmentOptionChangeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatEvalType* get_EvalType()
		{
			return ((::MX::Logic::Skills::LogicEffects::StatEvalType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_EVALTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EQUIPMENTOPTIONCHANGEEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

	};
}

