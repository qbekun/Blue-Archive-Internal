#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }

#define MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA600)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CoverStateConditionalModifierData_TypeDefinitionIndex = 13401;

	class CoverStateConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Skills::CoverState* CoverState; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

