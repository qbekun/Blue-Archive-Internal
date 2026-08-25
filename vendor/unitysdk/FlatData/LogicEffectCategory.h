#pragma once
#include "../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }

namespace FlatData
{
	inline static constexpr unsigned int LogicEffectCategory_TypeDefinitionIndex = 9397;

	class LogicEffectCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::LogicEffectCategory* None; // 0x0
		::FlatData::LogicEffectCategory* Attack; // 0x0
		::FlatData::LogicEffectCategory* Heal; // 0x0
		::FlatData::LogicEffectCategory* Buff; // 0x0
		::FlatData::LogicEffectCategory* Debuff; // 0x0
		::FlatData::LogicEffectCategory* CrowdControl; // 0x0
		::FlatData::LogicEffectCategory* Boss; // 0x0
		::FlatData::LogicEffectCategory* Dummy; // 0x0

	};
}

