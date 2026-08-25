#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillProperty; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }
namespace MX::GameData::DAO::Battle { class ModifySkillEffectDAO; }

#define MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123D5F0)
#define MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123D600)
#define MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_TARGETPROPERTY_OFFSET UNITYSDK_OFFSET(0x123D760)
#define MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_EVALTYPE_OFFSET UNITYSDK_OFFSET(0x123D770)
#define MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123D780)
#define MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_APPLYSLOTS_OFFSET UNITYSDK_OFFSET(0x123D790)
#define MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123D7A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ModifySkillEffectValue_TypeDefinitionIndex = 13910;

	class ModifySkillEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillProperty* _TargetProperty_k__BackingField; // 0x48
		::MX::Logic::Skills::LogicEffects::StatEvalType* _EvalType_k__BackingField; // 0x4C
		Il2CppObject* _ApplySlots_k__BackingField; // 0x50
		::System::Int64 _Amount_k__BackingField; // 0x58
		::System::Int32 _DurationFrame_k__BackingField; // 0x60
		::System::Boolean _Dispellable_k__BackingField; // 0x64

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ModifySkillEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ModifySkillEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillProperty* get_TargetProperty()
		{
			return ((::MX::Logic::Skills::SkillProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_TARGETPROPERTY_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatEvalType* get_EvalType()
		{
			return ((::MX::Logic::Skills::LogicEffects::StatEvalType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_EVALTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ApplySlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_APPLYSLOTS_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

