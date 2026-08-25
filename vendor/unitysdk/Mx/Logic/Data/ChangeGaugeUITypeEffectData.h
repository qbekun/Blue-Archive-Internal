#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_CHANGEGAUGEUITYPEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeGaugeUITypeEffectData_TypeDefinitionIndex = 13562;

	class ChangeGaugeUITypeEffectData : public Il2CppObject
	{
	public:
		::System::Int32 UITypeToChange; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEGAUGEUITYPEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

