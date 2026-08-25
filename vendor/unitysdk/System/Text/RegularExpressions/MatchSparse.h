#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ADCD50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x9ADCE00)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchSparse_TypeDefinitionIndex = 29211;

	class MatchSparse : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _caps; // 0x78

		::System::Void .ctor(::System::Text::RegularExpressions::Regex* arg, ::System::Collections::Hashtable* arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::Regex*, ::System::Collections::Hashtable*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_.CTOR_OFFSET))(arg, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Text::RegularExpressions::GroupCollection* get_Groups()
		{
			return (return (::System::Text::RegularExpressions::GroupCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_GET_GROUPS_OFFSET))(nullptr);
		}

	};
}

