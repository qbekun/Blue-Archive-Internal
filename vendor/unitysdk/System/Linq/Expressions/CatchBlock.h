#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9651FC0)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_VARIABLE_OFFSET UNITYSDK_OFFSET(0x9652040)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_TEST_OFFSET UNITYSDK_OFFSET(0x9652050)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_BODY_OFFSET UNITYSDK_OFFSET(0x9652060)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x9652070)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9652080)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x9652160)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CatchBlock_TypeDefinitionIndex = 33022;

	class CatchBlock : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::ParameterExpression* _Variable_k__BackingField; // 0x10
		::System::Type* _Test_k__BackingField; // 0x18
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x20
		::System::Linq::Expressions::Expression* _Filter_k__BackingField; // 0x28

		::System::Void .ctor(::System::Type* arg, ::System::Linq::Expressions::ParameterExpression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::ParameterExpression* get_Variable()
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_VARIABLE_OFFSET))(nullptr);
		}

		::System::Type* get_Test()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_TEST_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_BODY_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Filter()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_FILTER_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_TOSTRING_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::CatchBlock* Update(::System::Linq::Expressions::ParameterExpression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::CatchBlock*(*)(::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

