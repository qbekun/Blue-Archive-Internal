#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA780)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetDistanceDamageModifierData_TypeDefinitionIndex = 13420;

	class TargetDistanceDamageModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Int32 MinDistance; // 0x18
		::System::Int32 MaxDistance; // 0x1C
		::System::Int64 MinMultiplier; // 0x20
		::System::Int64 MaxMultiplier; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

