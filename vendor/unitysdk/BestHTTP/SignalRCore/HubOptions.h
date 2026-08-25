#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class TransportTypes; }

#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_PINGTIMEOUTINTERVAL_OFFSET UNITYSDK_OFFSET(0x644830)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_CONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x644840)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x644850)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_PREFEREDTRANSPORT_OFFSET UNITYSDK_OFFSET(0x6448F0)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_MAXREDIRECTS_OFFSET UNITYSDK_OFFSET(0x644900)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_PINGTIMEOUTINTERVAL_OFFSET UNITYSDK_OFFSET(0x644910)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_CONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x644920)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_MAXREDIRECTS_OFFSET UNITYSDK_OFFSET(0x644930)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x644940)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_SKIPNEGOTIATION_OFFSET UNITYSDK_OFFSET(0x644950)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_PREFEREDTRANSPORT_OFFSET UNITYSDK_OFFSET(0x644960)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x644970)
#define BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_SKIPNEGOTIATION_OFFSET UNITYSDK_OFFSET(0x644980)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int HubOptions_TypeDefinitionIndex = 21430;

	class HubOptions : public Il2CppObject
	{
	public:
		::System::Boolean _SkipNegotiation_k__BackingField; // 0x10
		::BestHTTP::SignalRCore::TransportTypes* _PreferedTransport_k__BackingField; // 0x14
		::System::TimeSpan* _PingInterval_k__BackingField; // 0x18
		::System::TimeSpan* _PingTimeoutInterval_k__BackingField; // 0x20
		::System::Int32 _MaxRedirects_k__BackingField; // 0x28
		::System::TimeSpan* _ConnectTimeout_k__BackingField; // 0x30

		::System::TimeSpan* get_PingTimeoutInterval()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_PINGTIMEOUTINTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_ConnectTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_CONNECTTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::TransportTypes* get_PreferedTransport()
		{
			return (return (::BestHTTP::SignalRCore::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_PREFEREDTRANSPORT_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxRedirects()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_MAXREDIRECTS_OFFSET))(nullptr);
		}

		::System::Void set_PingTimeoutInterval(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_PINGTIMEOUTINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_ConnectTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_CONNECTTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_MaxRedirects(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_MAXREDIRECTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PingInterval(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_PINGINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkipNegotiation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_SKIPNEGOTIATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_PreferedTransport(::BestHTTP::SignalRCore::TransportTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::TransportTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_SET_PREFEREDTRANSPORT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_PingInterval()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_PINGINTERVAL_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipNegotiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBOPTIONS_GET_SKIPNEGOTIATION_OFFSET))(nullptr);
		}

	};
}

