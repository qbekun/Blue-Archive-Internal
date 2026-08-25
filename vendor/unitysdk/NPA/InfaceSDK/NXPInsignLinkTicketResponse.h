#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPINSIGNLINKTICKETRESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE7AF0)
#define NPA_INFACESDK_NXPINSIGNLINKTICKETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE7CF0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPInsignLinkTicketResponse_TypeDefinitionIndex = 25789;

	class NXPInsignLinkTicketResponse : public Il2CppObject
	{
	public:
		::System::String* ticket; // 0x28
		::System::String* redirectUrl; // 0x30

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINSIGNLINKTICKETRESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINSIGNLINKTICKETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

