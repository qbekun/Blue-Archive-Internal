#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class UnaryExpressionType; }

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int UnaryExpressionType_TypeDefinitionIndex = 12895;

	class UnaryExpressionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::Expressions::Domain::UnaryExpressionType* Not; // 0x0
		::MX::Core::Expressions::Domain::UnaryExpressionType* Negate; // 0x0
		::MX::Core::Expressions::Domain::UnaryExpressionType* BitwiseNot; // 0x0

	};
}

