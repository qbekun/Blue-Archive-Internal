#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroundEventOperatorType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundEventOperatorType_TypeDefinitionIndex = 14358;

	class GroundEventOperatorType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::GroundEventOperatorType* AND; // 0x0
		::MX::Logic::Battles::GroundEventOperatorType* OR; // 0x0

	};
}

