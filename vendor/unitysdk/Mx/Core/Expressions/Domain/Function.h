#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class Identifier; }
namespace MX::Core::Expressions::Domain { class LogicalExpressionVisitor; }

#define MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1078600)
#define MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_SET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1078610)
#define MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1078620)
#define MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1078630)
#define MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1078640)
#define MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1078670)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int Function_TypeDefinitionIndex = 12886;

	class Function : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::Identifier* _Identifier_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Expressions_k__BackingField; // 0x18

		::System::Void set_Identifier(::MX::Core::Expressions::Domain::Identifier* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Identifier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_SET_IDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Expressions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_SET_EXPRESSIONS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::Identifier* get_Identifier()
		{
			return ((::MX::Core::Expressions::Domain::Identifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_GET_IDENTIFIER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Expressions()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_GET_EXPRESSIONS_OFFSET))(nullptr);
		}

		::System::Void Accept(::MX::Core::Expressions::Domain::LogicalExpressionVisitor* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Core::Expressions::Domain::Identifier* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Identifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_FUNCTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

