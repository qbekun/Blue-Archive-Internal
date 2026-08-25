#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_EXPRESSIONS_EVALUATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x106A930)
#define MX_CORE_EXPRESSIONS_EVALUATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x106A940)

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int EvaluationException_TypeDefinitionIndex = 12875;

	class EvaluationException : public ::System::Net::Http::Headers::TryParseDelegate`1
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

