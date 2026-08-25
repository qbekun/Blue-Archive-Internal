#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4520)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ThermometerChangeByCurrentHPEffectData_TypeDefinitionIndex = 13644;

	class ThermometerChangeByCurrentHPEffectData : public Il2CppObject
	{
	public:
		::System::String* ThermometerRangeSet; // 0x58
		::System::String* UIPath; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x68
		::System::Int32 EndConditionArgument; // 0x6C
		::System::Boolean Dispellable; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

