#pragma once
#include "unitysdk.h"

#define NODEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B80C80)
#define NODEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B80F30)
#define NODEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x9B80F90)
#define NODEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9B81020)
#define NODEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B81090)
#define NODEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B81100)
#define NODEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B811C0)

	inline static constexpr unsigned int NodeEnumerator_TypeDefinitionIndex = 29561;

	class NodeEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::Specialized::ListDictionary* _list; // 0x10
		DictionaryNode* _current; // 0x18
		::System::Int32 _version; // 0x20
		::System::Boolean _start; // 0x24

		::System::Void .ctor(::System::Collections::Specialized::ListDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::ListDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + NODEENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

