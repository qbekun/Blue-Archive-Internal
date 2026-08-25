#pragma once
#include "../unitysdk.h"

namespace FlatData { class ExternalBTTrigger; }

namespace FlatData
{
	inline static constexpr unsigned int ExternalBTTrigger_TypeDefinitionIndex = 9382;

	class ExternalBTTrigger : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ExternalBTTrigger* None; // 0x0
		::FlatData::ExternalBTTrigger* HPUnder; // 0x0
		::FlatData::ExternalBTTrigger* ApplySkillEffectCategory; // 0x0
		::FlatData::ExternalBTTrigger* HaveNextExSkillActiveGauge; // 0x0
		::FlatData::ExternalBTTrigger* UseNormalSkill; // 0x0
		::FlatData::ExternalBTTrigger* UseExSkill; // 0x0
		::FlatData::ExternalBTTrigger* CheckActiveGaugeOver; // 0x0
		::FlatData::ExternalBTTrigger* CheckPeriod; // 0x0
		::FlatData::ExternalBTTrigger* CheckSummonCharacterCountOver; // 0x0
		::FlatData::ExternalBTTrigger* CheckSummonCharacterCountUnder; // 0x0
		::FlatData::ExternalBTTrigger* ApplyGroggy; // 0x0
		::FlatData::ExternalBTTrigger* ApplyLogicEffectTemplateId; // 0x0
		::FlatData::ExternalBTTrigger* OnSpawned; // 0x0
		::FlatData::ExternalBTTrigger* CheckActiveGaugeBetween; // 0x0
		::FlatData::ExternalBTTrigger* DestroyParts; // 0x0
		::FlatData::ExternalBTTrigger* CheckHallucinationCountOver; // 0x0
		::FlatData::ExternalBTTrigger* CheckHallucinationCountUnder; // 0x0
		::FlatData::ExternalBTTrigger* UseSkillEndGroupId; // 0x0

	};
}

