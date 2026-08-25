#pragma once
#include "unitysdk.h"

#define SORTEDLISTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CD540)
#define SORTEDLISTENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x92CF4C0)
#define SORTEDLISTENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x92CF4D0)
#define SORTEDLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92CF580)
#define SORTEDLISTENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x92CF6A0)
#define SORTEDLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x92CF780)
#define SORTEDLISTENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x92CF870)
#define SORTEDLISTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x92CF920)

	inline static constexpr unsigned int SortedListEnumerator_TypeDefinitionIndex = 25076;

	class SortedListEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::SortedList* _sortedList; // 0x10
		::System::Object* _key; // 0x18
		::System::Object* _value; // 0x20
		::System::Int32 _index; // 0x28
		::System::Int32 _startIndex; // 0x2C
		::System::Int32 _endIndex; // 0x30
		::System::Int32 _version; // 0x34
		::System::Boolean _current; // 0x38
		::System::Int32 _getObjectRetType; // 0x3C

		::System::Void .ctor(::System::Collections::SortedList* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::SortedList*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

