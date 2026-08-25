#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET UNITYSDK_OFFSET(0x96521F0)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET UNITYSDK_OFFSET(0x9652220)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConstantCheck_TypeDefinitionIndex = 33025;

	class ConstantCheck : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::AnalyzeTypeIsResult* AnalyzeTypeIs(::System::Linq::Expressions::TypeBinaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::AnalyzeTypeIsResult*(*)(::System::Linq::Expressions::TypeBinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::AnalyzeTypeIsResult* AnalyzeTypeIs(::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::AnalyzeTypeIsResult*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET))(arg, arg, nullptr);
		}

	};
}

