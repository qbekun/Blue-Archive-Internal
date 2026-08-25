#pragma once
#include "unitysdk.h"

#define HASHTABLEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D85D0)
#define HASHTABLEENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x92DAEE0)
#define HASHTABLEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x92DAEF0)
#define HASHTABLEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92DAF60)
#define HASHTABLEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x92DB080)
#define HASHTABLEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x92DB120)
#define HASHTABLEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x92DB210)
#define HASHTABLEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x92DB280)

	inline static constexpr unsigned int HashtableEnumerator_TypeDefinitionIndex = 25095;

	class HashtableEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _hashtable; // 0x10
		::System::Int32 _bucket; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Boolean _current; // 0x20
		::System::Int32 _getObjectRetType; // 0x24
		::System::Object* _currentKey; // 0x28
		::System::Object* _currentValue; // 0x30

		::System::Void .ctor(::System::Collections::Hashtable* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HASHTABLEENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

