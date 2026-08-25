#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPGETCARTPRODUCTCOUNTRESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE8DC0)
#define NPA_INFACESDK_NXPGETCARTPRODUCTCOUNTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE8F30)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPGetCartProductCountResponse_TypeDefinitionIndex = 25793;

	class NXPGetCartProductCountResponse : public Il2CppObject
	{
	public:
		::System::Int32 count; // 0x28

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPGETCARTPRODUCTCOUNTRESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPGETCARTPRODUCTCOUNTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

