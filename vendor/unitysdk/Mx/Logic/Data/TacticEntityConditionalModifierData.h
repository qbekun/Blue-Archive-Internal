#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TacticEntityConstraint; }

#define MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA750)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticEntityConditionalModifierData_TypeDefinitionIndex = 13417;

	class TacticEntityConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::TacticEntityConstraint* Constraint; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

