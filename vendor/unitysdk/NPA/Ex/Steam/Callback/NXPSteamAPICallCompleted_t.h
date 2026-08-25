#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamAPICallCompleted_t_TypeDefinitionIndex = 26100;

	class NXPSteamAPICallCompleted_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::NPA::Ex::Steam::NXPSteamAPICall_t* m_hAsyncCall; // 0x10
		::System::Int32 m_iCallback; // 0x18
		::System::UInt32 m_cubParam; // 0x1C

	};
}

