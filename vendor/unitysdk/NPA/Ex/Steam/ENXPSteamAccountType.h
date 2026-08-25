#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamAccountType; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamAccountType_TypeDefinitionIndex = 25998;

	class ENXPSteamAccountType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeInvalid; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeIndividual; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeMultiseat; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeGameServer; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeAnonGameServer; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypePending; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeContentServer; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeClan; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeChat; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeConsoleUser; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeAnonUser; // 0x0
		::NPA::Ex::Steam::ENXPSteamAccountType* k_EAccountTypeMax; // 0x0

	};
}

