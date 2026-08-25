#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_DICTIONARYENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C8230)
#define SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x92C8260)
#define SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x92C8270)

namespace System::Collections
{
	inline static constexpr unsigned int DictionaryEntry_TypeDefinitionIndex = 25050;

	class DictionaryEntry : public Il2CppObject
	{
	public:
		::System::Object* _key; // 0x10
		::System::Object* _value; // 0x18

		::System::Void .ctor(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYENTRY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYENTRY_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

