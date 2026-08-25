#pragma once
#include "../../../../unitysdk.h"

class FunctionType;
namespace MX::Core::Expressions::Domain { class LogicalExpressionVisitor; }

#define MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x107A2D0)
#define MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x107A2E0)
#define MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_GET_FUNCTION_OFFSET UNITYSDK_OFFSET(0x107A2F0)
#define MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_ACCEPT_OFFSET UNITYSDK_OFFSET(0x107A300)
#define MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x107A330)
#define MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x107AC50)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int Identifier_TypeDefinitionIndex = 12891;

	class Identifier : public Il2CppObject
	{
	public:
		Il2CppObject* FunctionDefinitions; // 0x0
		::System::String* _Name_k__BackingField; // 0x10
		FunctionType* _Function_k__BackingField; // 0x18

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_SET_NAME_OFFSET))(str, nullptr);
		}

		FunctionType* get_Function()
		{
			return ((FunctionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_GET_FUNCTION_OFFSET))(nullptr);
		}

		::System::Void Accept(::MX::Core::Expressions::Domain::LogicalExpressionVisitor* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_IDENTIFIER_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

