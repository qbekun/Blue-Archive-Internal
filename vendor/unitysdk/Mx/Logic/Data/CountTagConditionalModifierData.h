#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Core::Math { class DiffOperatorType; }

#define MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountTagConditionalModifierData_TypeDefinitionIndex = 13400;

	class CountTagConditionalModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		Il2CppObject* TagConstraintsInt; // 0x20
		::System::Int32 Count; // 0x28
		::MX::Core::Math::DiffOperatorType* DiffOperator; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

