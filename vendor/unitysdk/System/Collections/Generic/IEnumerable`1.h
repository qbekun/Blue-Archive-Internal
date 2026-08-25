#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IEnumerable`1_TypeDefinitionIndex = 25139;

	class IEnumerable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

