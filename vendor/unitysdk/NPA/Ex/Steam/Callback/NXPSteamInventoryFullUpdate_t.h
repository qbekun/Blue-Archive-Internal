#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t; }

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamInventoryFullUpdate_t_TypeDefinitionIndex = 26093;

	class NXPSteamInventoryFullUpdate_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::NPA::Ex::Steam::NXPSteamInventoryResult_t* m_handle; // 0x10

	};
}

