#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_FORMINDEXCHECKMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA6A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FormIndexCheckModifierData_TypeDefinitionIndex = 13406;

	class FormIndexCheckModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Int32 FormIndex; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMINDEXCHECKMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

