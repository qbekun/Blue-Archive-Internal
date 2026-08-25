#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Futures { class FutureState; }

namespace BestHTTP::Futures
{
	inline static constexpr unsigned int FutureState_TypeDefinitionIndex = 23334;

	class FutureState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Futures::FutureState* Pending; // 0x0
		::BestHTTP::Futures::FutureState* Processing; // 0x0
		::BestHTTP::Futures::FutureState* Success; // 0x0
		::BestHTTP::Futures::FutureState* Error; // 0x0

	};
}

