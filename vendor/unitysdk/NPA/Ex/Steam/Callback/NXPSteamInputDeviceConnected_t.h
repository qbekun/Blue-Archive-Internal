#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamInputDeviceConnected_t_TypeDefinitionIndex = 26103;

	class NXPSteamInputDeviceConnected_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::System::UInt64 m_ulConnectedDeviceHandle; // 0x10

	};
}

