#pragma once
#include "../unitysdk.h"

#define ANIMANCER_IPOLYMORPHICRESET_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IPolymorphicReset_TypeDefinitionIndex = 35138;

	class IPolymorphicReset : public Il2CppObject
	{
	public:
		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPOLYMORPHICRESET_RESET_OFFSET))(nullptr);
		}

	};
}

