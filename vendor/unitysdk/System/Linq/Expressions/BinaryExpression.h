#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9632440)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x96324D0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ISOPASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x9632500)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9632510)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x9632520)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9632530)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x9632550)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9632560)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x96333B0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETBINARYOPFROMASSIGNMENTOP_OFFSET UNITYSDK_OFFSET(0x9634270)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEVARIABLE_OFFSET UNITYSDK_OFFSET(0x96340D0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEMEMBER_OFFSET UNITYSDK_OFFSET(0x9633430)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEINDEX_OFFSET UNITYSDK_OFFSET(0x9633A40)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CONVERSION_OFFSET UNITYSDK_OFFSET(0x9632700)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x9634B40)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x9634B50)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x9632BA0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9634CF0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDLOGICAL_OFFSET UNITYSDK_OFFSET(0x9634D20)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISREFERENCECOMPARISON_OFFSET UNITYSDK_OFFSET(0x9632720)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEUSERDEFINEDLIFTED_OFFSET UNITYSDK_OFFSET(0x9634E90)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BinaryExpression_TypeDefinitionIndex = 32973;

	class BinaryExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _Right_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Left_k__BackingField; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CanReduce()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CANREDUCE_OFFSET))(nullptr);
		}

		::System::Boolean IsOpAssignment(::System::Linq::Expressions::ExpressionType* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::ExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ISOPASSIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* get_Right()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Left()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETMETHOD_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::BinaryExpression* Update(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::LambdaExpression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* GetBinaryOpFromAssignmentOp(::System::Linq::Expressions::ExpressionType* arg)
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::System::Linq::Expressions::ExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETBINARYOPFROMASSIGNMENTOP_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ReduceVariable()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEVARIABLE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* ReduceMember()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEMEMBER_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* ReduceIndex()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEINDEX_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::LambdaExpression* get_Conversion()
		{
			return (return (::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CONVERSION_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::LambdaExpression* GetConversion()
		{
			return (return (::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETCONVERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLifted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLiftedToNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLiftedLogical()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDLOGICAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReferenceComparison()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISREFERENCECOMPARISON_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* ReduceUserdefinedLifted()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEUSERDEFINEDLIFTED_OFFSET))(nullptr);
		}

	};
}

