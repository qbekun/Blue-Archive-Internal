#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_HPRATEDAMAGEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA6B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HpRateDamageModifierData_TypeDefinitionIndex = 13407;

	class HpRateDamageModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Int64 MinHpRate; // 0x18
		::System::Int64 MaxHpRate; // 0x20
		::System::Int64 MinDamageMultiplier; // 0x28
		::System::Int64 MaxDamageMultiplier; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEDAMAGEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

