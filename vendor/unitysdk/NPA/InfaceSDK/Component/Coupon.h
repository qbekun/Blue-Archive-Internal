#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_COUPON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D01210)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Coupon_TypeDefinitionIndex = 25844;

	class Coupon : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPON_.CTOR_OFFSET))(nullptr);
		}

	};
}

