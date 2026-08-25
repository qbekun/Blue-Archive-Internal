#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_IRESETTABLEBUFFERWRITER`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Text
{
	inline static constexpr unsigned int IResettableBufferWriter`1_TypeDefinitionIndex = 34677;

	class IResettableBufferWriter`1 : public Il2CppObject
	{
	public:
		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_IRESETTABLEBUFFERWRITER`1_RESET_OFFSET))(nullptr);
		}

	};
}

