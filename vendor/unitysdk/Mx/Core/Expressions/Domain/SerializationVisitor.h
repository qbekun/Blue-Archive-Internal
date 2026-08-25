#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions::Domain { class TernaryExpression; }
namespace MX::Core::Expressions::Domain { class BinaryExpression; }
namespace MX::Core::Expressions::Domain { class UnaryExpression; }
namespace MX::Core::Expressions::Domain { class ValueExpression; }
namespace MX::Core::Expressions::Domain { class Function; }
namespace MX::Core::Expressions::Domain { class Identifier; }

#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x107AD00)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x107ADD0)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x107ADE0)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x107ADF0)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x107AE50)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x107B030)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x107B310)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x107B3C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x107B680)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x107B830)
#define MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_ENCAPSULATENOVALUE_OFFSET UNITYSDK_OFFSET(0x107AEF0)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int SerializationVisitor_TypeDefinitionIndex = 12892;

	class SerializationVisitor : public Il2CppObject
	{
	public:
		::System::Globalization::NumberFormatInfo* _numberFormatInfo; // 0x10
		::System::Text::StringBuilder* _Result_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::StringBuilder* get_Result()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void set_Result(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::TernaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::TernaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::BinaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::BinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::UnaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::UnaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::ValueExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::ValueExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::Function* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Function*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::Identifier* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Identifier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void EncapsulateNoValue(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_SERIALIZATIONVISITOR_ENCAPSULATENOVALUE_OFFSET))(arg, nullptr);
		}

	};
}

