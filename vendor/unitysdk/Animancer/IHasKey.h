#pragma once
#include "../unitysdk.h"

#define ANIMANCER_IHASKEY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IHasKey_TypeDefinitionIndex = 35150;

	class IHasKey : public Il2CppObject
	{
	public:
		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IHASKEY_GET_KEY_OFFSET))(nullptr);
		}

	};
}

