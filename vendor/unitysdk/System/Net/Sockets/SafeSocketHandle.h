#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA9560)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA9640)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AA9650)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_REGISTERFORBLOCKINGSYSCALL_OFFSET UNITYSDK_OFFSET(0x9AA9CD0)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_UNREGISTERFORBLOCKINGSYSCALL_OFFSET UNITYSDK_OFFSET(0x9AA9E40)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AAA040)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SafeSocketHandle_TypeDefinitionIndex = 29922;

	class SafeSocketHandle : public Il2CppObject
	{
	public:
		Il2CppObject* blocking_threads; // 0x20
		Il2CppObject* threads_stacktraces; // 0x28
		::System::Boolean in_cleanup; // 0x30
		::System::Int32 SOCKET_CLOSED; // 0x0
		::System::Int32 ABORT_RETRIES; // 0x0
		::System::Boolean THROW_ON_ABORT_RETRIES; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

		::System::Void RegisterForBlockingSyscall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_REGISTERFORBLOCKINGSYSCALL_OFFSET))(nullptr);
		}

		::System::Void UnRegisterForBlockingSyscall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_UNREGISTERFORBLOCKINGSYSCALL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

