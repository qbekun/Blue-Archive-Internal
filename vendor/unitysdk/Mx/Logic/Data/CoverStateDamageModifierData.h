#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }

#define MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA610)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CoverStateDamageModifierData_TypeDefinitionIndex = 13402;

	class CoverStateDamageModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Int64 Multiplier; // 0x18
		::MX::Logic::Skills::CoverState* CoverState; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

