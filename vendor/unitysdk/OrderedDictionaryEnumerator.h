#pragma once
#include "unitysdk.h"

#define ORDEREDDICTIONARYENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B83720)
#define ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B83F30)
#define ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x9B840F0)
#define ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9B84280)
#define ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B84350)
#define ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B84420)
#define ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B844C0)

	inline static constexpr unsigned int OrderedDictionaryEnumerator_TypeDefinitionIndex = 29567;

	class OrderedDictionaryEnumerator : public Il2CppObject
	{
	public:
		::System::Int32 _objectReturnType; // 0x10
		::System::Collections::IEnumerator* _arrayEnumerator; // 0x18

		::System::Void .ctor(::System::Collections::ArrayList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

