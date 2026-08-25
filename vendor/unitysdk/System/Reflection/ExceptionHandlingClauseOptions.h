#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int ExceptionHandlingClauseOptions_TypeDefinitionIndex = 24853;

	class ExceptionHandlingClauseOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::ExceptionHandlingClauseOptions* Clause; // 0x0
		::System::Reflection::ExceptionHandlingClauseOptions* Filter; // 0x0
		::System::Reflection::ExceptionHandlingClauseOptions* Finally; // 0x0
		::System::Reflection::ExceptionHandlingClauseOptions* Fault; // 0x0

	};
}

