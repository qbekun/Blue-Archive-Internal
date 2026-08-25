#pragma once
#include "unitysdk.h"

#define RESOURCEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92353B0)
#define RESOURCEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x922DBE0)
#define RESOURCEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x922DB30)
#define RESOURCEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x92386F0)
#define RESOURCEENUMERATOR_GET_DATAPOSITION_OFFSET UNITYSDK_OFFSET(0x9238BC0)
#define RESOURCEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x9238750)
#define RESOURCEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9238BD0)
#define RESOURCEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9238C80)

	inline static constexpr unsigned int ResourceEnumerator_TypeDefinitionIndex = 24824;

	class ResourceEnumerator : public Il2CppObject
	{
	public:
		::System::Resources::ResourceReader* _reader; // 0x10
		::System::Boolean _currentIsValid; // 0x18
		::System::Int32 _currentName; // 0x1C
		::System::Int32 _dataPosition; // 0x20

		::System::Void .ctor(::System::Resources::ResourceReader* arg)
		{
			((::System::Void(*)(::System::Resources::ResourceReader*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_DataPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_GET_DATAPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

