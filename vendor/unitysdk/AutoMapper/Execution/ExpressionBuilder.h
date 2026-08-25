#pragma once
#include "../../unitysdk.h"

namespace AutoMapper::Internal { class IGlobalConfiguration; }

#define AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_DEFAULT_OFFSET UNITYSDK_OFFSET(0x4D22A0)
#define AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x4D2E50)
#define AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_TOTYPE_OFFSET UNITYSDK_OFFSET(0x4D21E0)
#define AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4D2F20)

namespace AutoMapper::Execution
{
	inline static constexpr unsigned int ExpressionBuilder_TypeDefinitionIndex = 37645;

	class ExpressionBuilder : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* ObjectToString; // 0x0
		::System::Linq::Expressions::Expression* True; // 0x8
		::System::Linq::Expressions::Expression* Null; // 0x10
		::System::Linq::Expressions::Expression* Empty; // 0x18
		::System::Linq::Expressions::Expression* Zero; // 0x20
		::System::Linq::Expressions::ParameterExpression* ExceptionParameter; // 0x28
		::System::Linq::Expressions::ParameterExpression* ContextParameter; // 0x30
		::System::Reflection::MethodInfo* IListClear; // 0x38
		::System::Reflection::MethodInfo* ContextCreate; // 0x40
		::System::Reflection::MethodInfo* OverTypeDepthMethod; // 0x48
		::System::Linq::Expressions::MethodCallExpression* CheckContextCall; // 0x50
		::System::Reflection::MethodInfo* ContextMapMethod; // 0x58
		::System::Reflection::MethodInfo* ArrayEmptyMethod; // 0x60
		::System::Linq::Expressions::ParameterExpression* Disposable; // 0x68
		Il2CppObject* DisposableArray; // 0x70
		::System::Reflection::MethodInfo* DisposeMethod; // 0x78
		::System::Linq::Expressions::Expression* DisposeCall; // 0x80
		::System::Linq::Expressions::ParameterExpression* Index; // 0x88
		::System::Linq::Expressions::BinaryExpression* ResetIndex; // 0x90
		::System::Linq::Expressions::UnaryExpression* IncrementIndex; // 0x98

		::System::Linq::Expressions::DefaultExpression* Default(::AutoMapper::Internal::IGlobalConfiguration* arg, ::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::DefaultExpression*(*)(::AutoMapper::Internal::IGlobalConfiguration*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_DEFAULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ToObject(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_TOOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ToType(::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_TOTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_EXPRESSIONBUILDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

