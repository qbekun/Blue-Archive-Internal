#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPSTEAMPACKSIZE_TEST_OFFSET UNITYSDK_OFFSET(0x9D2C280)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamPacksize_TypeDefinitionIndex = 26054;

	class NXPSteamPacksize : public Il2CppObject
	{
	public:
		::System::Int32 value; // 0x0

		::System::Boolean Test()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPACKSIZE_TEST_OFFSET))(nullptr);
		}

	};
}

