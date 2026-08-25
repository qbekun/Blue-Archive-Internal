#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_CONCURRENT_IPRODUCERCONSUMERCOLLECTION`1_TRYADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_IPRODUCERCONSUMERCOLLECTION`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int IProducerConsumerCollection`1_TypeDefinitionIndex = 25114;

	class IProducerConsumerCollection`1 : public Il2CppObject
	{
	public:
		::System::Boolean TryAdd(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_IPRODUCERCONSUMERCOLLECTION`1_TRYADD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_IPRODUCERCONSUMERCOLLECTION`1_TOARRAY_OFFSET))(nullptr);
		}

	};
}

