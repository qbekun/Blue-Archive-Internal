#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class EchelonExtensionType; }

#define MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA620)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonExtensionTypeModifierData_TypeDefinitionIndex = 13403;

	class EchelonExtensionTypeModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		::FlatData::EchelonExtensionType* EchelonExtensionType; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

