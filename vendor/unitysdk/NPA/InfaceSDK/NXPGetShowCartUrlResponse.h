#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPGETSHOWCARTURLRESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE8F40)
#define NPA_INFACESDK_NXPGETSHOWCARTURLRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE90B0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPGetShowCartUrlResponse_TypeDefinitionIndex = 25794;

	class NXPGetShowCartUrlResponse : public Il2CppObject
	{
	public:
		::System::String* url; // 0x28

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPGETSHOWCARTURLRESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPGETSHOWCARTURLRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

