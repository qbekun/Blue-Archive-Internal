#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int IParameterProvider_TypeDefinitionIndex = 33054;

	class IParameterProvider : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::ParameterExpression* GetParameter(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

	};
}

