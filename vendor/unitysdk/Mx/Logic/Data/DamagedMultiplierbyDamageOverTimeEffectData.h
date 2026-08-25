#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamagedMultiplierbyDamageOverTimeEffectData_TypeDefinitionIndex = 13576;

	class DamagedMultiplierbyDamageOverTimeEffectData : public Il2CppObject
	{
	public:
		::System::Int64 AddRate; // 0x58
		::System::String* ApplyLogicEffectTemplateId; // 0x60
		::FlatData::EndCondition* RemoveCondition; // 0x68
		::System::String* RemoveConditionArgument; // 0x70
		::System::Boolean IsDispellable; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

