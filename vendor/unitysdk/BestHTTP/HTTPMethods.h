#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPMethods; }

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPMethods_TypeDefinitionIndex = 21300;

	class HTTPMethods : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::HTTPMethods* Get; // 0x0
		::BestHTTP::HTTPMethods* Head; // 0x0
		::BestHTTP::HTTPMethods* Post; // 0x0
		::BestHTTP::HTTPMethods* Put; // 0x0
		::BestHTTP::HTTPMethods* Delete; // 0x0
		::BestHTTP::HTTPMethods* Patch; // 0x0
		::BestHTTP::HTTPMethods* Merge; // 0x0
		::BestHTTP::HTTPMethods* Options; // 0x0

	};
}

