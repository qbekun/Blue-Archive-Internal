#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_BINDIPENDPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A681F0)
#define SYSTEM_NET_BINDIPENDPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x9A68300)

namespace System::Net
{
	inline static constexpr unsigned int BindIPEndPoint_TypeDefinitionIndex = 29757;

	class BindIPEndPoint : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::IPEndPoint* Invoke(::System::Net::ServicePoint* arg, ::System::Net::IPEndPoint* arg, ::System::Int32 arg)
		{
			return (return (::System::Net::IPEndPoint*(*)(::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

