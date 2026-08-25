#pragma once
#include "../unitysdk.h"

namespace FlatData { class LogicEffectSound; }

namespace FlatData
{
	inline static constexpr unsigned int LogicEffectSound_TypeDefinitionIndex = 9407;

	class LogicEffectSound : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::LogicEffectSound* None; // 0x0
		::FlatData::LogicEffectSound* Damage; // 0x0
		::FlatData::LogicEffectSound* Heal; // 0x0
		::FlatData::LogicEffectSound* Knockback; // 0x0

	};
}

