#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_HASHTABLEEXTENSIONS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections
{
	inline static constexpr unsigned int HashtableExtensions_TypeDefinitionIndex = 29555;

	class HashtableExtensions : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(::System::Collections::Hashtable* arg, ::System::Object* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::Hashtable*, ::System::Object*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLEEXTENSIONS_TRYGETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

