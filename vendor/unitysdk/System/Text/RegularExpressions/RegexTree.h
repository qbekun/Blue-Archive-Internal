#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AF5180)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexTree_TypeDefinitionIndex = 29236;

	class RegexTree : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::RegexNode* Root; // 0x10
		::System::Collections::Hashtable* Caps; // 0x18
		::Il2CppArray<::System::Object*>* CapNumList; // 0x20
		::System::Int32 CapTop; // 0x28
		::System::Collections::Hashtable* CapNames; // 0x30
		::Il2CppArray<::System::Object*>* CapsList; // 0x38
		::System::Text::RegularExpressions::RegexOptions* Options; // 0x40

		::System::Void .ctor(::System::Text::RegularExpressions::RegexNode* arg, ::System::Collections::Hashtable* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Collections::Hashtable* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Text::RegularExpressions::RegexOptions* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Collections::Hashtable*, ::Il2CppArray<::System::Object*>*, ::System::Text::RegularExpressions::RegexOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXTREE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

