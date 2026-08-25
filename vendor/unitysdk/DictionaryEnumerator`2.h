#pragma once
#include "unitysdk.h"

#define DICTIONARYENUMERATOR`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define DICTIONARYENUMERATOR`2_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define DICTIONARYENUMERATOR`2_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define DICTIONARYENUMERATOR`2_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DICTIONARYENUMERATOR`2_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define DICTIONARYENUMERATOR`2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define DICTIONARYENUMERATOR`2_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int DictionaryEnumerator`2_TypeDefinitionIndex = 31826;

	class DictionaryEnumerator`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _e; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYENUMERATOR`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYENUMERATOR`2_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYENUMERATOR`2_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYENUMERATOR`2_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYENUMERATOR`2_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYENUMERATOR`2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYENUMERATOR`2_RESET_OFFSET))(nullptr);
		}

	};

