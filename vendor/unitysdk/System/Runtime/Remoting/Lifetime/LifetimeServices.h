#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91DC0D0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x91DC250)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x91DC2A0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x91DC320)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x91DC370)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x91DC3D0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x91DC420)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x91DC480)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x91DC4D0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET UNITYSDK_OFFSET(0x91DC530)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LifetimeServices_TypeDefinitionIndex = 24472;

	class LifetimeServices : public Il2CppObject
	{
	public:
		::System::TimeSpan* _leaseManagerPollTime; // 0x0
		::System::TimeSpan* _leaseTime; // 0x8
		::System::TimeSpan* _renewOnCallTime; // 0x10
		::System::TimeSpan* _sponsorshipTimeout; // 0x18
		::System::Runtime::Remoting::Lifetime::LeaseManager* _leaseManager; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_.CCTOR_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_LeaseManagerPollTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET))(nullptr);
		}

		::System::Void set_LeaseManagerPollTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_LeaseTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET))(nullptr);
		}

		::System::Void set_LeaseTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_RenewOnCallTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET))(nullptr);
		}

		::System::Void set_RenewOnCallTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_SponsorshipTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_SponsorshipTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET))(arg, nullptr);
		}

	};
}

