#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_ENUMERABLEHELPERS_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ENUMERABLEHELPERS_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int EnumerableHelpers_TypeDefinitionIndex = 25153;

	class EnumerableHelpers : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ToArray(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ENUMERABLEHELPERS_TOARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ENUMERABLEHELPERS_TOARRAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

