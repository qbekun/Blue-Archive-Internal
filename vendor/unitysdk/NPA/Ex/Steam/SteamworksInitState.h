#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class SteamworksInitState; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int SteamworksInitState_TypeDefinitionIndex = 26012;

	class SteamworksInitState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::SteamworksInitState* None; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* Success; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* ProperlyConfigured; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* RestartRequired; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* InitFailed; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* AppIdMismatch; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* DidNotSubscribeThisApp; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* LibraryFileNotFound; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* BadConfig; // 0x0
		::NPA::Ex::Steam::SteamworksInitState* BadDirectoryPath; // 0x0

	};
}

