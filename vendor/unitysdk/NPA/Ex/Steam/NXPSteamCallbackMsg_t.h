#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamCallbackMsg_t_TypeDefinitionIndex = 26008;

	class NXPSteamCallbackMsg_t : public Il2CppObject
	{
	public:
		::System::Int32 m_hSteamUser; // 0x10
		::System::Int32 m_iCallback; // 0x14
		::System::Int32 m_pubParam; // 0x18
		::System::Int32 m_cubParam; // 0x20

	};
}

