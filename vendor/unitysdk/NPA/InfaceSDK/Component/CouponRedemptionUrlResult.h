#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int CouponRedemptionUrlResult_TypeDefinitionIndex = 25933;

	class CouponRedemptionUrlResult : public Il2CppObject
	{
	public:
		::System::Int32 sdkResCode; // 0x10
		::System::String* message; // 0x18
		::System::String* url; // 0x20

	};
}

