#pragma once
#include "unitysdk.h"

#define XSODICTIONARYENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E8210)
#define XSODICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x98E8880)
#define XSODICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x98E89D0)
#define XSODICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98E8B00)

	inline static constexpr unsigned int XSODictionaryEnumerator_TypeDefinitionIndex = 28186;

	class XSODictionaryEnumerator : public Il2CppObject
	{
	public:
		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, EnumeratorType* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, EnumeratorType*, ::PVOID))((::PBYTE)hIl2Cpp + XSODICTIONARYENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + XSODICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XSODICTIONARYENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XSODICTIONARYENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

	};

