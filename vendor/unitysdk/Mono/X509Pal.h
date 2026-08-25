#pragma once
#include "../unitysdk.h"

namespace Mono { class X509PalImpl; }

#define MONO_X509PAL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x96C8D10)

namespace Mono
{
	inline static constexpr unsigned int X509Pal_TypeDefinitionIndex = 28990;

	class X509Pal : public Il2CppObject
	{
	public:
		::Mono::X509PalImpl* get_Instance()
		{
			return (return (::Mono::X509PalImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PAL_GET_INSTANCE_OFFSET))(nullptr);
		}

	};
}

