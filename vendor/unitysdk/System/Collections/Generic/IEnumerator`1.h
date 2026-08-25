#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IEnumerator`1_TypeDefinitionIndex = 25140;

	class IEnumerator`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR`1_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

