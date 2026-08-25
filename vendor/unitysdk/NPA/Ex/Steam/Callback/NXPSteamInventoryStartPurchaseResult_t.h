#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamResult; }

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamInventoryStartPurchaseResult_t_TypeDefinitionIndex = 26096;

	class NXPSteamInventoryStartPurchaseResult_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* m_result; // 0x10
		::System::UInt64 m_ulOrderID; // 0x18
		::System::UInt64 m_ulTransID; // 0x20

	};
}

