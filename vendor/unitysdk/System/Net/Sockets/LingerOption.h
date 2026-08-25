#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_LINGEROPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA80B0)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AA80E0)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET UNITYSDK_OFFSET(0x9AA80F0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int LingerOption_TypeDefinitionIndex = 29907;

	class LingerOption : public Il2CppObject
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::Int32 lingerTime; // 0x14

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_LingerTime(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET))(arg, nullptr);
		}

	};
}

