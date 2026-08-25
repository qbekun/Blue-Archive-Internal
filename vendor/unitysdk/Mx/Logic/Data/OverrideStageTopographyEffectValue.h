#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace FlatData { class StageTopography; }
namespace MX::GameData::DAO::Battle { class OverrideStageTopographyEffectDAO; }

#define MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x123DB20)
#define MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x123DB30)
#define MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123DB40)
#define MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x123DB50)
#define MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123DB60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int OverrideStageTopographyEffectValue_TypeDefinitionIndex = 13913;

	class OverrideStageTopographyEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x48
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0x50
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0x58
		::FlatData::StageTopography* _StageTopography_k__BackingField; // 0x60

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDESTAGETOPOGRAPHYEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

