#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_OFFSET UNITYSDK_OFFSET(0x96BEDA0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x96BEFA0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x96BF3E0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEONEARGUMENT_OFFSET UNITYSDK_OFFSET(0x96BF470)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET UNITYSDK_OFFSET(0x96BFC40)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET UNITYSDK_OFFSET(0x96BF720)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_TRYQUOTE_OFFSET UNITYSDK_OFFSET(0x96BFB40)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_GETPARAMETERSFORVALIDATION_OFFSET UNITYSDK_OFFSET(0x96BF350)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_SAMEELEMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_SAMEELEMENTSINCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x96BFEC0)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ExpressionUtils_TypeDefinitionIndex = 33575;

	class ExpressionUtils : public Il2CppObject
	{
	public:
		Il2CppObject* ReturnReadOnly(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReturnReadOnly(::System::Linq::Expressions::IArgumentProvider* arg, ::System::Object&* arg)
		{
			return (return (Il2CppObject*(*)(::System::Linq::Expressions::IArgumentProvider*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNREADONLY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReturnObject(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_RETURNOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateArgumentTypes(::System::Reflection::MethodBase* arg, ::System::Linq::Expressions::ExpressionType* arg, Il2CppObject&* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType*, Il2CppObject&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTTYPES_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void ValidateArgumentCount(::System::Reflection::MethodBase* arg, ::System::Linq::Expressions::ExpressionType* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* arg, ::System::Linq::Expressions::ExpressionType* arg, ::System::Linq::Expressions::Expression* arg, ::System::Reflection::ParameterInfo* arg, ::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType*, ::System::Linq::Expressions::Expression*, ::System::Reflection::ParameterInfo*, ::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEONEARGUMENT_OFFSET))(arg, arg, arg, arg, str, str, arg, nullptr);
		}

		::System::Void RequiresCanRead(::System::Linq::Expressions::Expression* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET))(arg, str, nullptr);
		}

		::System::Void RequiresCanRead(::System::Linq::Expressions::Expression* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_REQUIRESCANREAD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean TryQuote(::System::Type* arg, ::System::Linq::Expressions::Expression&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Linq::Expressions::Expression&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_TRYQUOTE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParametersForValidation(::System::Reflection::MethodBase* arg, ::System::Linq::Expressions::ExpressionType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_GETPARAMETERSFORVALIDATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SameElements(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_SAMEELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SameElementsInCollection(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_SAMEELEMENTSINCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateArgumentCount(::System::Linq::Expressions::LambdaExpression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::LambdaExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONUTILS_VALIDATEARGUMENTCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

