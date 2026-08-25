#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CrowdControlGaugeApplyType; }

#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CrowdControlGaugeEffectData_TypeDefinitionIndex = 13573;

	class CrowdControlGaugeEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::CrowdControlGaugeApplyType* ApplyCrowdControlType; // 0x58
		::System::Int32 Duration; // 0x5C
		::System::Int32 MaxGaugeValue; // 0x60
		::System::String* IgnoreLogicEffectTemplateIdList; // 0x68
		::System::String* MaxGaugeLogicEffectGroupIdList; // 0x70
		::System::Int64 GaugeReduceValuePerSecond; // 0x78
		::System::Int64 GaugeReduceStartDelay; // 0x80
		::System::Int32 GaugeFillCap; // 0x88
		::System::Boolean IsCalculateOppression; // 0x8C
		::System::Boolean Dispellable; // 0x8D

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

