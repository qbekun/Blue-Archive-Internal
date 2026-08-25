#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPINITCARTRESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE90C0)
#define NPA_INFACESDK_NXPINITCARTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE9230)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPInitCartResponse_TypeDefinitionIndex = 25795;

	class NXPInitCartResponse : public Il2CppObject
	{
	public:
		::System::String* cartId; // 0x28

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINITCARTRESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINITCARTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

