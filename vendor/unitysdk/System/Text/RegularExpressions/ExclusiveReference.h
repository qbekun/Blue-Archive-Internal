#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_GET_OFFSET UNITYSDK_OFFSET(0x9ADDDC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_RELEASE_OFFSET UNITYSDK_OFFSET(0x9ADDE20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ADDF00)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int ExclusiveReference_TypeDefinitionIndex = 29214;

	class ExclusiveReference : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::RegexRunner* _ref; // 0x10
		::System::Text::RegularExpressions::RegexRunner* _obj; // 0x18
		::System::Int32 _locked; // 0x20

		::System::Text::RegularExpressions::RegexRunner* Get()
		{
			return (return (::System::Text::RegularExpressions::RegexRunner*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_GET_OFFSET))(nullptr);
		}

		::System::Void Release(::System::Text::RegularExpressions::RegexRunner* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::RegexRunner*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

