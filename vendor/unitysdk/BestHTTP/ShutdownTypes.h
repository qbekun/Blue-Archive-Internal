#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class ShutdownTypes; }

namespace BestHTTP
{
	inline static constexpr unsigned int ShutdownTypes_TypeDefinitionIndex = 21296;

	class ShutdownTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::ShutdownTypes* Running; // 0x0
		::BestHTTP::ShutdownTypes* Gentle; // 0x0
		::BestHTTP::ShutdownTypes* Immediate; // 0x0

	};
}

