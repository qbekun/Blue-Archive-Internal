#pragma once
#include "unitysdk.h"

namespace Antlr::Runtime::Collections { class HashList; }

#define HASHLISTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C8A40)
#define HASHLISTENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x4C9330)
#define HASHLISTENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x4C93A0)
#define HASHLISTENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x4C9410)
#define HASHLISTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x4C94A0)
#define HASHLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4C9550)
#define HASHLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4C9630)

	inline static constexpr unsigned int HashListEnumerator_TypeDefinitionIndex = 37401;

	class HashListEnumerator : public Il2CppObject
	{
	public:
		::Antlr::Runtime::Collections::HashList* _hashList; // 0x10
		::System::Collections::ArrayList* _orderList; // 0x18
		EnumerationMode* _mode; // 0x20
		::System::Int32 _index; // 0x24
		::System::Int32 _version; // 0x28
		::System::Object* _key; // 0x30
		::System::Object* _value; // 0x38

		::System::Void .ctor(::Antlr::Runtime::Collections::HashList* arg, EnumerationMode* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::Collections::HashList*, EnumerationMode*, ::PVOID))((::PBYTE)hIl2Cpp + HASHLISTENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHLISTENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHLISTENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHLISTENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHLISTENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHLISTENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHLISTENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};

