#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPEXPIRELINKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE7AE0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPExpireLinkResponse_TypeDefinitionIndex = 25788;

	class NXPExpireLinkResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPEXPIRELINKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

