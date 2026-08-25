#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamGameOverlayActivated_t_TypeDefinitionIndex = 26102;

	class NXPSteamGameOverlayActivated_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::System::Byte m_bActive; // 0x10

	};
}

