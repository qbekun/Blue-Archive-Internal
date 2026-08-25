#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class TransferModes; }

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int TransferModes_TypeDefinitionIndex = 21420;

	class TransferModes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalRCore::TransferModes* Binary; // 0x0
		::BestHTTP::SignalRCore::TransferModes* Text; // 0x0

	};
}

