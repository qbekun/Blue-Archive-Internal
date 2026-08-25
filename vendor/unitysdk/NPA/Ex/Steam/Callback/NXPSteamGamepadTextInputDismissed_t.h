#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamGamepadTextInputDismissed_t_TypeDefinitionIndex = 26101;

	class NXPSteamGamepadTextInputDismissed_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::System::Boolean m_bSubmitted; // 0x10
		::System::UInt32 m_unSubmittedText; // 0x14

	};
}

