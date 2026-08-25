#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPINFACERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE63C0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPInfaceResponse_TypeDefinitionIndex = 25784;

	class NXPInfaceResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINFACERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

