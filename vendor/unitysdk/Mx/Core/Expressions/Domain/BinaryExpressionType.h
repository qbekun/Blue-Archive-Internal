#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class BinaryExpressionType; }

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int BinaryExpressionType_TypeDefinitionIndex = 12882;

	class BinaryExpressionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::Expressions::Domain::BinaryExpressionType* And; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Or; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* NotEqual; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* LesserOrEqual; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* GreaterOrEqual; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Lesser; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Greater; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Equal; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Minus; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Plus; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Modulo; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Div; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Times; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* BitwiseOr; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* BitwiseAnd; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* BitwiseXOr; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* LeftShift; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* RightShift; // 0x0
		::MX::Core::Expressions::Domain::BinaryExpressionType* Unknown; // 0x0

	};
}

