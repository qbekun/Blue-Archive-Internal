#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SchoolConstraint; }
namespace MX::Logic::Data { class CountConstraint; }

#define MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA710)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SchoolConditionalModifierData_TypeDefinitionIndex = 13413;

	class SchoolConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::SchoolConstraint* SchoolConstraint; // 0x18
		::MX::Logic::Data::CountConstraint* CountConstraint; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

