#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class ForceApplyStatChangeToAllyEffectDAO; }

#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123A690)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x123A6A0)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123A6B0)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x123A820)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x123A830)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123A840)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_UPDATESTATCHANGEALWAYS_OFFSET UNITYSDK_OFFSET(0x123A850)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_APPLYSTATCHANGELAYER_OFFSET UNITYSDK_OFFSET(0x123A860)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_SHOWFORCEAPPLIEDEFFECTSKILLVISUAL_OFFSET UNITYSDK_OFFSET(0x123A870)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_SHOWFORCEAPPLIEDEFFECTCOMMONVISUAL_OFFSET UNITYSDK_OFFSET(0x123A880)
#define MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_CATEGORYCONDITION_OFFSET UNITYSDK_OFFSET(0x123A890)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceApplyStatChangeToAllyEffectValue_TypeDefinitionIndex = 13889;

	class ForceApplyStatChangeToAllyEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Range_k__BackingField; // 0x48
		::FlatData::LogicEffectCategory* _CategoryCondition_k__BackingField; // 0x50
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x54
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0x58
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0x60
		::System::Boolean _Dispellable_k__BackingField; // 0x68
		::System::Boolean _UpdateStatChangeAlways_k__BackingField; // 0x69
		::System::Boolean _ApplyStatChangeLayer_k__BackingField; // 0x6A
		::System::Boolean _ShowForceAppliedEffectSkillVisual_k__BackingField; // 0x6B
		::System::Boolean _ShowForceAppliedEffectCommonVisual_k__BackingField; // 0x6C

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::Int64 get_Range()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_RANGE_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_UpdateStatChangeAlways()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_UPDATESTATCHANGEALWAYS_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyStatChangeLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_APPLYSTATCHANGELAYER_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowForceAppliedEffectSkillVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_SHOWFORCEAPPLIEDEFFECTSKILLVISUAL_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowForceAppliedEffectCommonVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_SHOWFORCEAPPLIEDEFFECTCOMMONVISUAL_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_CategoryCondition()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEAPPLYSTATCHANGETOALLYEFFECTVALUE_GET_CATEGORYCONDITION_OFFSET))(nullptr);
		}

	};
}

