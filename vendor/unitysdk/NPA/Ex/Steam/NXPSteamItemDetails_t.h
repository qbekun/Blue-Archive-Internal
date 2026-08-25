#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamItemInstanceID_t; }
namespace NPA::Ex::Steam { class NXPSteamItemDef_t; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamItemDetails_t_TypeDefinitionIndex = 26009;

	class NXPSteamItemDetails_t : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamItemInstanceID_t* m_itemId; // 0x10
		::NPA::Ex::Steam::NXPSteamItemDef_t* m_iDefinition; // 0x18
		::System::UInt16 m_unQuantity; // 0x1C
		::System::UInt16 m_unFlags; // 0x1E

	};
}

