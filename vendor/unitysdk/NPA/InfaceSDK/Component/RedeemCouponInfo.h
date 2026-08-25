#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int RedeemCouponInfo_TypeDefinitionIndex = 25931;

	class RedeemCouponInfo : public Il2CppObject
	{
	public:
		::System::String* orderId; // 0x10
		::System::String* pin; // 0x18
		::System::String* characterName; // 0x20
		::System::String* characterClass; // 0x28
		::System::Int32 characterLevel; // 0x30
		::System::String* worldName; // 0x38
		::System::String* realmId; // 0x40
		::System::String* token; // 0x48

	};
}

