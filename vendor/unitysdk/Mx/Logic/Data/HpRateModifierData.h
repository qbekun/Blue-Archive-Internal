#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_HPRATEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA6C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HpRateModifierData_TypeDefinitionIndex = 13408;

	class HpRateModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::Data::ComparisonOperator* Operator; // 0x18
		::System::Int64 HpRate; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

