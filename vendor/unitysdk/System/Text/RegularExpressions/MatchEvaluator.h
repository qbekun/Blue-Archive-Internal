#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AE1DF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AE1F00)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchEvaluator_TypeDefinitionIndex = 29218;

	class MatchEvaluator : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Invoke(::System::Text::RegularExpressions::Match* arg)
		{
			return (return (::System::String*(*)(::System::Text::RegularExpressions::Match*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

