#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net
{
	inline static constexpr unsigned int ICloseEx_TypeDefinitionIndex = 29713;

	class ICloseEx : public Il2CppObject
	{
	public:
		::System::Void CloseEx(::System::Net::CloseExState* arg)
		{
			((::System::Void(*)(::System::Net::CloseExState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET))(arg, nullptr);
		}

	};
}

