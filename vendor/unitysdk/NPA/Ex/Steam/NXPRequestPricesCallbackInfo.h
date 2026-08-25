#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }
namespace NPA::Ex::Steam { class NXPRequestPricesEvent; }

#define NPA_EX_STEAM_NXPREQUESTPRICESCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2BE00)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPRequestPricesCallbackInfo_TypeDefinitionIndex = 26048;

	class NXPRequestPricesCallbackInfo : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamAPICall_t* steamAPICallbackHandle; // 0x10
		Il2CppObject* onRequestPricesResultFromSDK; // 0x18
		::NPA::Ex::Steam::NXPRequestPricesEvent* onRequestPricesEvent; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPREQUESTPRICESCALLBACKINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

