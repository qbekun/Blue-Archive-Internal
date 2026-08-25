#pragma once
#include "../../unitysdk.h"

#define AUTOMAPPER_INTERNAL_IGLOBALCONFIGURATION_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper::Internal
{
	inline static constexpr unsigned int IGlobalConfiguration_TypeDefinitionIndex = 37635;

	class IGlobalConfiguration : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::DefaultExpression* GetDefault(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::DefaultExpression*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_IGLOBALCONFIGURATION_GETDEFAULT_OFFSET))(arg, nullptr);
		}

	};
}

