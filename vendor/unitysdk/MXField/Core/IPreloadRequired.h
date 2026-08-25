#pragma once
#include "../../unitysdk.h"

#define MXFIELD_CORE_IPRELOADREQUIRED_PRELOAD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Core
{
	inline static constexpr unsigned int IPreloadRequired_TypeDefinitionIndex = 10969;

	class IPreloadRequired : public Il2CppObject
	{
	public:
		::System::Void Preload(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IPRELOADREQUIRED_PRELOAD_OFFSET))(arg, nullptr);
		}

	};
}

