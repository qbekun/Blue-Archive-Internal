#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamInputDeviceDisconnected_t_TypeDefinitionIndex = 26104;

	class NXPSteamInputDeviceDisconnected_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::System::UInt64 m_ulDisconnectedDeviceHandle; // 0x10

	};
}

