#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2DataFlags; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2DataFlags_TypeDefinitionIndex = 23441;

	class HTTP2DataFlags : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2DataFlags* None; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2DataFlags* END_STREAM; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2DataFlags* PADDED; // 0x0

	};
}

