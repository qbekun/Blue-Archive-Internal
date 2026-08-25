#pragma once
#include "unitysdk.h"

#define NXPSTEAMAPPDETAILSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D26CC0)

	inline static constexpr unsigned int NXPSteamAppDetailsRequest_TypeDefinitionIndex = 26013;

	class NXPSteamAppDetailsRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NXPSTEAMAPPDETAILSREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};

