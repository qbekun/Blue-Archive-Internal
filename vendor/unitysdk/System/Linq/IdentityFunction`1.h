#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_IDENTITYFUNCTION`1_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int IdentityFunction`1_TypeDefinitionIndex = 32953;

	class IdentityFunction`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_Instance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_IDENTITYFUNCTION`1_GET_INSTANCE_OFFSET))(nullptr);
		}

	};
}

