#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2StreamStates; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2StreamStates_TypeDefinitionIndex = 23465;

	class HTTP2StreamStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2StreamStates* Idle; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2StreamStates* Open; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2StreamStates* HalfClosedLocal; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2StreamStates* HalfClosedRemote; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2StreamStates* Closed; // 0x0

	};
}

