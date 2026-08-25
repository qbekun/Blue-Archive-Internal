#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }

#define MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA740)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatValueDamageModifierData_TypeDefinitionIndex = 13416;

	class StatValueDamageModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::FlatData::StatType* StatType; // 0x18
		::System::Int64 MinStatValue; // 0x20
		::System::Int64 MaxStatValue; // 0x28
		::System::Int64 MinDamageMultiplier; // 0x30
		::System::Int64 MaxDamageMultiplier; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

