#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class DiffOperatorType; }

namespace MX::Core::Math
{
	inline static constexpr unsigned int DiffOperatorType_TypeDefinitionIndex = 12818;

	class DiffOperatorType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::Math::DiffOperatorType* None; // 0x0
		::MX::Core::Math::DiffOperatorType* GreaterOrEqual; // 0x0
		::MX::Core::Math::DiffOperatorType* LessOrEqual; // 0x0
		::MX::Core::Math::DiffOperatorType* Equal; // 0x0
		::MX::Core::Math::DiffOperatorType* NotEqual; // 0x0

	};
}

