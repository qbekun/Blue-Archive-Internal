#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA6E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectTemplateModifierData_TypeDefinitionIndex = 13410;

	class LogicEffectTemplateModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::String* TemplateId; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

