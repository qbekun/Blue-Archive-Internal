#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SOCKETIO3_EVENTS_CONNECTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x643B50)

namespace BestHTTP::SocketIO3::Events
{
	inline static constexpr unsigned int ConnectResponse_TypeDefinitionIndex = 21413;

	class ConnectResponse : public Il2CppObject
	{
	public:
		::System::String* sid; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_EVENTS_CONNECTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

