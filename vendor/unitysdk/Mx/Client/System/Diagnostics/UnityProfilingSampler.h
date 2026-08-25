#pragma once
#include "../../../../unitysdk.h"

#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYPROFILINGSAMPLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31790)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYPROFILINGSAMPLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA317A0)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYPROFILINGSAMPLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA317B0)

namespace MX::Client::System::Diagnostics
{
	inline static constexpr unsigned int UnityProfilingSampler_TypeDefinitionIndex = 37701;

	class UnityProfilingSampler : public Il2CppObject
	{
	public:
		::System::Boolean disposedValue; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYPROFILINGSAMPLER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYPROFILINGSAMPLER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYPROFILINGSAMPLER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

