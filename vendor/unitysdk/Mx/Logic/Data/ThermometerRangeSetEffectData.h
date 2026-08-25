#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4530)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ThermometerRangeSetEffectData_TypeDefinitionIndex = 13645;

	class ThermometerRangeSetEffectData : public Il2CppObject
	{
	public:
		::System::Int32 ThermometerUIIndex; // 0x58
		::System::Int32 MinHPRatioBoundary; // 0x5C
		::System::Int32 MaxHPRatioBoundary; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x64
		::System::Int32 EndConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

