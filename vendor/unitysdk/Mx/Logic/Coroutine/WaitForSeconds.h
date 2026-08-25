#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_COROUTINE_WAITFORSECONDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x14252E0)

namespace MX::Logic::Coroutine
{
	inline static constexpr unsigned int WaitForSeconds_TypeDefinitionIndex = 14828;

	class WaitForSeconds : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORSECONDS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

