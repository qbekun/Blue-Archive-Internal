#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackboardKeyType_TypeDefinitionIndex = 13510;

	class BlackboardKeyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::BlackboardKeyType* Invalid; // 0x0
		::MX::Logic::Data::BlackboardKeyType* Global; // 0x0
		::MX::Logic::Data::BlackboardKeyType* PerOwner; // 0x0
		::MX::Logic::Data::BlackboardKeyType* PerTarget; // 0x0
		::MX::Logic::Data::BlackboardKeyType* PerOwnerPerTarget; // 0x0

	};
}

