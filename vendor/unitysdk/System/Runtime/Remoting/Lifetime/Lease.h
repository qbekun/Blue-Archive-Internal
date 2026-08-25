#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DA7F0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET UNITYSDK_OFFSET(0x91DA990)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x91DA9F0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x91DAA00)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x91DAA10)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET UNITYSDK_OFFSET(0x91DAA20)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x91DAB00)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x91DAC70)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET UNITYSDK_OFFSET(0x91DAEB0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET UNITYSDK_OFFSET(0x91DB280)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int Lease_TypeDefinitionIndex = 24468;

	class Lease : public Il2CppObject
	{
	public:
		::System::DateTime* _leaseExpireTime; // 0x18
		::System::Runtime::Remoting::Lifetime::LeaseState* _currentState; // 0x20
		::System::TimeSpan* _initialLeaseTime; // 0x28
		::System::TimeSpan* _renewOnCallTime; // 0x30
		::System::TimeSpan* _sponsorshipTimeout; // 0x38
		::System::Collections::ArrayList* _sponsors; // 0x40
		::System::Collections::Queue* _renewingSponsors; // 0x48
		RenewalDelegate* _renewalDelegate; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_.CTOR_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_CurrentLeaseTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Lifetime::LeaseState* get_CurrentState()
		{
			return (return (::System::Runtime::Remoting::Lifetime::LeaseState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void Activate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_RenewOnCallTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET))(nullptr);
		}

		::System::TimeSpan* Renew(::System::TimeSpan* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET))(arg, nullptr);
		}

		::System::Void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Lifetime::ISponsor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET))(nullptr);
		}

		::System::Void CheckNextSponsor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET))(nullptr);
		}

		::System::Void ProcessSponsorResponse(::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET))(arg, arg, nullptr);
		}

	};
}

