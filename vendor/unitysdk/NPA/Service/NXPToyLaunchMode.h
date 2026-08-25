#pragma once
#include "../../unitysdk.h"

namespace NPA::Service { class NXPToyLaunchMode; }

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyLaunchMode_TypeDefinitionIndex = 27292;

	class NXPToyLaunchMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Service::NXPToyLaunchMode* UNKNOWN; // 0x0
		::NPA::Service::NXPToyLaunchMode* NEXON_DIRECT; // 0x0
		::NPA::Service::NXPToyLaunchMode* NEXON_LAUNCH; // 0x0
		::NPA::Service::NXPToyLaunchMode* STEAM; // 0x0
		::NPA::Service::NXPToyLaunchMode* XBOXPC; // 0x0
		::NPA::Service::NXPToyLaunchMode* XBOX; // 0x0
		::NPA::Service::NXPToyLaunchMode* PLAYSTATION; // 0x0
		::NPA::Service::NXPToyLaunchMode* SWITCH; // 0x0
		::NPA::Service::NXPToyLaunchMode* NGM; // 0x0
		::NPA::Service::NXPToyLaunchMode* Launcher; // 0x0
		::NPA::Service::NXPToyLaunchMode* Direct; // 0x0

	};
}

