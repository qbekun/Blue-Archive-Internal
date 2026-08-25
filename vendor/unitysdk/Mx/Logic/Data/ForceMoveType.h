#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ForceMoveType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceMoveType_TypeDefinitionIndex = 13742;

	class ForceMoveType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::ForceMoveType* None; // 0x0
		::MX::Logic::Data::ForceMoveType* ToTarget; // 0x0
		::MX::Logic::Data::ForceMoveType* FromTarget; // 0x0
		::MX::Logic::Data::ForceMoveType* EntityDirection; // 0x0
		::MX::Logic::Data::ForceMoveType* TeamDirection; // 0x0
		::MX::Logic::Data::ForceMoveType* InvokerDirection; // 0x0

	};
}

