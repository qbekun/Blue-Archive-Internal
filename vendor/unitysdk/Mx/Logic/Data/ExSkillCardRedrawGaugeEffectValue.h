#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ExSkillCardRedrawGaugeEffectDAO; }

#define MX_LOGIC_DATA_EXSKILLCARDREDRAWGAUGEEFFECTVALUE_GET_EFFECTDAO_OFFSET UNITYSDK_OFFSET(0x1239BB0)
#define MX_LOGIC_DATA_EXSKILLCARDREDRAWGAUGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239BC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExSkillCardRedrawGaugeEffectValue_TypeDefinitionIndex = 13885;

	class ExSkillCardRedrawGaugeEffectValue : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO* _EffectDAO_k__BackingField; // 0x48

		::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO* get_EffectDAO()
		{
			return ((::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXSKILLCARDREDRAWGAUGEEFFECTVALUE_GET_EFFECTDAO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXSKILLCARDREDRAWGAUGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

