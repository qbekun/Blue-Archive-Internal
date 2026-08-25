#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPTOYGETGAMETOKENRESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE7F10)
#define NPA_INFACESDK_NXPTOYGETGAMETOKENRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE8080)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPToyGetGameTokenResponse_TypeDefinitionIndex = 25791;

	class NXPToyGetGameTokenResponse : public Il2CppObject
	{
	public:
		::System::String* gameToken; // 0x28

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYGETGAMETOKENRESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYGETGAMETOKENRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

