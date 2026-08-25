#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TacticEntityType; }

#define MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA760)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticEntityDamageModifierData_TypeDefinitionIndex = 13418;

	class TacticEntityDamageModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Int64 Multiplier; // 0x18
		::FlatData::TacticEntityType* TacticEntity; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

