#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamResult; }
namespace NPA::Ex::Steam { class NXPCSteamID; }

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamInventoryEligiblePromoItemDefIDs_t_TypeDefinitionIndex = 26097;

	class NXPSteamInventoryEligiblePromoItemDefIDs_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* m_result; // 0x10
		::NPA::Ex::Steam::NXPCSteamID* m_steamID; // 0x14
		::System::Int32 m_numEligiblePromoItemDefs; // 0x1C
		::System::Boolean m_bCachedData; // 0x20

	};
}

