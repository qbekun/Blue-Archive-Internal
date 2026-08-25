#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_STACKDAMAGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4490)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StackDamageEffectData_TypeDefinitionIndex = 13635;

	class StackDamageEffectData : public Il2CppObject
	{
	public:
		::System::String* StackCountGroupId; // 0x58
		::System::Int32 ActuateStackCount; // 0x60
		::System::String* ActuateGroupId; // 0x68
		::System::String* ApplyLogicEffectGroupId01; // 0x70
		::System::Int32 MinApplyStackCount01; // 0x78
		::System::Int64 DefaultDistributeRate01; // 0x80
		::System::Int64 AddDistributeRatePerStackCount01; // 0x88
		::System::String* ApplyLogicEffectGroupId02; // 0x90
		::System::Int32 MinApplyStackCount02; // 0x98
		::System::Int64 DefaultDistributeRate02; // 0xA0
		::System::Int64 AddDistributeRatePerStackCount02; // 0xA8
		::System::String* ApplyLogicEffectGroupId03; // 0xB0
		::System::Int32 MinApplyStackCount03; // 0xB8
		::System::Int64 DefaultDistributeRate03; // 0xC0
		::System::Int64 AddDistributeRatePerStackCount03; // 0xC8
		::System::Int64 Duration; // 0xD0
		::System::Boolean Dispellable; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STACKDAMAGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

