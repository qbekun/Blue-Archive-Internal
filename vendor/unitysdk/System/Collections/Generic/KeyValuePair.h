#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_PAIRTOSTRING_OFFSET UNITYSDK_OFFSET(0x92DB510)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int KeyValuePair_TypeDefinitionIndex = 25147;

	class KeyValuePair : public Il2CppObject
	{
	public:
		::System::String* PairToString(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_PAIRTOSTRING_OFFSET))(arg, arg, nullptr);
		}

	};
}

