#pragma once
#include "unitysdk.h"

#define CACHEDCODEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ADEB30)

	inline static constexpr unsigned int CachedCodeEntry_TypeDefinitionIndex = 29216;

	class CachedCodeEntry : public Il2CppObject
	{
	public:
		CachedCodeEntry* Next; // 0x10
		CachedCodeEntry* Previous; // 0x18
		CachedCodeEntryKey* Key; // 0x20
		::System::Text::RegularExpressions::RegexCode* Code; // 0x38
		::System::Collections::Hashtable* Caps; // 0x40
		::System::Collections::Hashtable* Capnames; // 0x48
		::Il2CppArray<::System::Object*>* Capslist; // 0x50
		::System::Int32 Capsize; // 0x58
		::System::Text::RegularExpressions::ExclusiveReference* Runnerref; // 0x60
		Il2CppObject* ReplRef; // 0x68

		::System::Void .ctor(CachedCodeEntryKey* arg, ::System::Collections::Hashtable* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Text::RegularExpressions::RegexCode* arg, ::System::Collections::Hashtable* arg, ::System::Int32 arg, ::System::Text::RegularExpressions::ExclusiveReference* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(CachedCodeEntryKey*, ::System::Collections::Hashtable*, ::Il2CppArray<::System::Object*>*, ::System::Text::RegularExpressions::RegexCode*, ::System::Collections::Hashtable*, ::System::Int32, ::System::Text::RegularExpressions::ExclusiveReference*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDCODEENTRY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

