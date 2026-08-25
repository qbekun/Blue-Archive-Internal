#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3EC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeEffectData_TypeDefinitionIndex = 13565;

	class ChangeStatLogicApplicationGaugeEffectData : public Il2CppObject
	{
	public:
		::System::Int64 SetGaugeEnergyToTargetHpRatio; // 0x58
		::System::Int64 StartGaugeEnergyRatio; // 0x60
		::System::Boolean Dispellable; // 0x68
		::System::String* LogicEffectTypeReduceGauge; // 0x70
		::System::String* UIPath; // 0x78
		::System::String* GaugeTraceElement; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

