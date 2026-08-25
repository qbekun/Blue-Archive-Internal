#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_IGROUPING`2_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int IGrouping`2_TypeDefinitionIndex = 32955;

	class IGrouping`2 : public Il2CppObject
	{
	public:
		Il2CppObject* get_Key()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_IGROUPING`2_GET_KEY_OFFSET))(nullptr);
		}

	};
}

