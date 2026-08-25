#pragma once
#include "../unitysdk.h"

#define ANIMANCER_ICOPYABLE`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ICopyable`1_TypeDefinitionIndex = 35147;

	class ICopyable`1 : public Il2CppObject
	{
	public:
		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ICOPYABLE`1_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

