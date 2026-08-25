#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPINSIGNTICKETRESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE7D00)
#define NPA_INFACESDK_NXPINSIGNTICKETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE7F00)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPInsignTicketResponse_TypeDefinitionIndex = 25790;

	class NXPInsignTicketResponse : public Il2CppObject
	{
	public:
		::System::String* ticket; // 0x28
		::System::String* linkedPlatformUserId; // 0x30

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINSIGNTICKETRESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINSIGNTICKETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

