#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_RECEIVESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B95E50)

namespace System::Net
{
	inline static constexpr unsigned int ReceiveState_TypeDefinitionIndex = 29654;

	class ReceiveState : public Il2CppObject
	{
	public:
		::System::Net::ResponseDescription* Resp; // 0x10
		::System::Int32 ValidThrough; // 0x18
		::Il2CppArray<::System::Object*>* Buffer; // 0x20
		::System::Net::CommandStream* Connection; // 0x28

		::System::Void .ctor(::System::Net::CommandStream* arg)
		{
			((::System::Void(*)(::System::Net::CommandStream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RECEIVESTATE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

