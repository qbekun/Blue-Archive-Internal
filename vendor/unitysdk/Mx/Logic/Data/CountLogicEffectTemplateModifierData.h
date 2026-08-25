#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountLogicEffectTemplateModifierData_TypeDefinitionIndex = 13398;

	class CountLogicEffectTemplateModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::String* TemplateId; // 0x18
		::System::Int32 CountMin; // 0x20
		::System::Int32 CountMax; // 0x24
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

