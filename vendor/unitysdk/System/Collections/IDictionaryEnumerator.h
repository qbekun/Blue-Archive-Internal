#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections
{
	inline static constexpr unsigned int IDictionaryEnumerator_TypeDefinitionIndex = 25055;

	class IDictionaryEnumerator : public Il2CppObject
	{
	public:
		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

	};
}

