#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F41D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HPRatioBoundaryGaugeEffectData_TypeDefinitionIndex = 13604;

	class HPRatioBoundaryGaugeEffectData : public Il2CppObject
	{
	public:
		::System::String* HPRatioBoundary; // 0x58
		::System::Int32 UISeparateBoundaryIndex; // 0x60
		::System::String* UIPath; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x70
		::System::Int32 EndConditionArgument; // 0x74
		::System::Boolean Dispellable; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

