#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int KeyValuePair`2_TypeDefinitionIndex = 25148;

	class KeyValuePair`2 : public Il2CppObject
	{
	public:
		Il2CppObject* key; // 0x0
		Il2CppObject* value; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Key()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_GET_KEY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_GET_VALUE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Deconstruct(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR`2_DECONSTRUCT_OFFSET))(arg, arg, nullptr);
		}

	};
}

