#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsFlags; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x911DC0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x912CF0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSFRAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x913040)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2SettingsFrame_TypeDefinitionIndex = 23448;

	class HTTP2SettingsFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		Il2CppObject* Settings; // 0x30

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSFRAME_TOSTRING_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2SettingsFlags* get_Flags()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2SettingsFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSFRAME_GET_FLAGS_OFFSET))(nullptr);
		}

	};
}

