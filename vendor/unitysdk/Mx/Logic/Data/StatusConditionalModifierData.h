#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_STATUSCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA730)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusConditionalModifierData_TypeDefinitionIndex = 13415;

	class StatusConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* StatusToCheck; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

