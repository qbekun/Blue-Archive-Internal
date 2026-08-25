#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PLUGINSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A2D0)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2PluginSettings_TypeDefinitionIndex = 23460;

	class HTTP2PluginSettings : public Il2CppObject
	{
	public:
		::System::UInt32 HeaderTableSize; // 0x10
		::System::UInt32 MaxConcurrentStreams; // 0x14
		::System::UInt32 InitialStreamWindowSize; // 0x18
		::System::UInt32 InitialConnectionWindowSize; // 0x1C
		::System::UInt32 MaxFrameSize; // 0x20
		::System::UInt32 MaxHeaderListSize; // 0x24
		::System::TimeSpan* MaxIdleTime; // 0x28
		::System::TimeSpan* PingFrequency; // 0x30
		::System::Boolean EnableConnectProtocol; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PLUGINSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

