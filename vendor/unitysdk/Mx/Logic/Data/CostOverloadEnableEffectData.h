#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_COSTOVERLOADENABLEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CostOverloadEnableEffectData_TypeDefinitionIndex = 13570;

	class CostOverloadEnableEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean Dispellable; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTOVERLOADENABLEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

