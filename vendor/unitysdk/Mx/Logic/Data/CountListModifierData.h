#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_COUNTLISTMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA480)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListModifierData_TypeDefinitionIndex = 13394;

	class CountListModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Int32 CountMin; // 0x18
		::System::Int32 CountMax; // 0x1C
		::MX::Logic::Data::IncludeType* IncludeType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

