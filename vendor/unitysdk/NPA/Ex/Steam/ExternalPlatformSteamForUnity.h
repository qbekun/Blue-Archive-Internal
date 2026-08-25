#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAMFORUNITY_SIGNUPPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D2B730)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ExternalPlatformSteamForUnity_TypeDefinitionIndex = 26040;

	class ExternalPlatformSteamForUnity : public Il2CppObject
	{
	public:
		::System::Void SignUpPlatform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAMFORUNITY_SIGNUPPLATFORM_OFFSET))(nullptr);
		}

	};
}

