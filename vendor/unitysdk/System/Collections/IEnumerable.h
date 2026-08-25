#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections
{
	inline static constexpr unsigned int IEnumerable_TypeDefinitionIndex = 25056;

	class IEnumerable : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

