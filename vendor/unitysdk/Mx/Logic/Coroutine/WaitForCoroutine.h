#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_COROUTINE_WAITFORCOROUTINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x14251F0)

namespace MX::Logic::Coroutine
{
	inline static constexpr unsigned int WaitForCoroutine_TypeDefinitionIndex = 14826;

	class WaitForCoroutine : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* Coroutine; // 0x18

		::System::Void .ctor(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORCOROUTINE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

