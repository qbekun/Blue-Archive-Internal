#pragma once
#include "unitysdk.h"

#define NODEKEYVALUEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B81530)
#define NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B81590)
#define NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B81610)
#define NODEKEYVALUEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B816D0)

	inline static constexpr unsigned int NodeKeyValueEnumerator_TypeDefinitionIndex = 29562;

	class NodeKeyValueEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::Specialized::ListDictionary* _list; // 0x10
		DictionaryNode* _current; // 0x18
		::System::Int32 _version; // 0x20
		::System::Boolean _isKeys; // 0x24
		::System::Boolean _start; // 0x25

		::System::Void .ctor(::System::Collections::Specialized::ListDictionary* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::ListDictionary*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUEENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUEENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

