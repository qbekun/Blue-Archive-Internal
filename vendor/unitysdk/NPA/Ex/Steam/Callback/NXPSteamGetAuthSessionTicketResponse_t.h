#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPHAuthTicket; }
namespace NPA::Ex::Steam { class ENXPSteamResult; }

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamGetAuthSessionTicketResponse_t_TypeDefinitionIndex = 26098;

	class NXPSteamGetAuthSessionTicketResponse_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::NPA::Ex::Steam::NXPHAuthTicket* m_hAuthTicket; // 0x10
		::NPA::Ex::Steam::ENXPSteamResult* m_eResult; // 0x14

	};
}

