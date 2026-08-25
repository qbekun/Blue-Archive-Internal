#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class ValueType; }
namespace MX::Core::Expressions::Domain { class LogicalExpressionVisitor; }

#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BA60)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BAA0)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BBD0)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BC10)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BC80)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BCF0)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BD60)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x107BDD0)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x107BDE0)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x107BDF0)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x107BE00)
#define MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x107BE10)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int ValueExpression_TypeDefinitionIndex = 12896;

	class ValueExpression : public Il2CppObject
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10
		::MX::Core::Expressions::Domain::ValueType* _Type_k__BackingField; // 0x18

		::System::Void .ctor(::System::Object* arg, ::MX::Core::Expressions::Domain::ValueType* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Core::Expressions::Domain::ValueType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::ValueType* get_Type()
		{
			return ((::MX::Core::Expressions::Domain::ValueType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::MX::Core::Expressions::Domain::ValueType* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::ValueType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Accept(::MX::Core::Expressions::Domain::LogicalExpressionVisitor* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_VALUEEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

	};
}

