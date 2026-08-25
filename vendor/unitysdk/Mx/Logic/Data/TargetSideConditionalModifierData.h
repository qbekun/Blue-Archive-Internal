#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA790)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetSideConditionalModifierData_TypeDefinitionIndex = 13421;

	class TargetSideConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Skills::TargetSideId* TargetSide; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

