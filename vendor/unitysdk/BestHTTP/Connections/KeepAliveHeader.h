#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8FB860)
#define BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_GET_MAXREQUESTS_OFFSET UNITYSDK_OFFSET(0x8FB870)
#define BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_PARSE_OFFSET UNITYSDK_OFFSET(0x8FB880)
#define BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_SET_MAXREQUESTS_OFFSET UNITYSDK_OFFSET(0x8FBA90)
#define BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x8FBAA0)
#define BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x8FBAB0)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int KeepAliveHeader_TypeDefinitionIndex = 23417;

	class KeepAliveHeader : public Il2CppObject
	{
	public:
		::System::TimeSpan* _TimeOut_k__BackingField; // 0x10
		::System::Int32 _MaxRequests_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxRequests()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_GET_MAXREQUESTS_OFFSET))(nullptr);
		}

		::System::Void Parse(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxRequests(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_SET_MAXREQUESTS_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_TimeOut()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_TimeOut(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_KEEPALIVEHEADER_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

	};
}

