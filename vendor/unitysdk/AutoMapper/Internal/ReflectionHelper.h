#pragma once
#include "../../unitysdk.h"

namespace AutoMapper::Internal { class IGlobalConfiguration; }

#define AUTOMAPPER_INTERNAL_REFLECTIONHELPER_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x4D20B0)
#define AUTOMAPPER_INTERNAL_REFLECTIONHELPER_FINDPROPERTY_OFFSET UNITYSDK_OFFSET(0x4D2370)

namespace AutoMapper::Internal
{
	inline static constexpr unsigned int ReflectionHelper_TypeDefinitionIndex = 37642;

	class ReflectionHelper : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* GetDefaultValue(::System::Reflection::ParameterInfo* arg, ::AutoMapper::Internal::IGlobalConfiguration* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Reflection::ParameterInfo*, ::AutoMapper::Internal::IGlobalConfiguration*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_REFLECTIONHELPER_GETDEFAULTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MemberInfo* FindProperty(::System::Linq::Expressions::LambdaExpression* arg)
		{
			return (return (::System::Reflection::MemberInfo*(*)(::System::Linq::Expressions::LambdaExpression*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_REFLECTIONHELPER_FINDPROPERTY_OFFSET))(arg, nullptr);
		}

	};
}

