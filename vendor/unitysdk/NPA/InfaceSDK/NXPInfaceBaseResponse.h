#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPINFACEBASERESPONSE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CE60E0)
#define NPA_INFACESDK_NXPINFACEBASERESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE61B0)
#define NPA_INFACESDK_NXPINFACEBASERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE63B0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPInfaceBaseResponse_TypeDefinitionIndex = 25783;

	class NXPInfaceBaseResponse : public Il2CppObject
	{
	public:
		::System::Int32 errorCode; // 0x10
		::System::String* errorText; // 0x18
		::System::String* errorDetail; // 0x20

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINFACEBASERESPONSE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINFACEBASERESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPINFACEBASERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

