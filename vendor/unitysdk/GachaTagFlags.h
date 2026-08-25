#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int GachaTagFlags_TypeDefinitionIndex = 6710;

	class GachaTagFlags : public Il2CppObject
	{
	public:
		::System::Boolean HasLimitedGacha; // 0x10
		::System::Boolean HasNewGacha; // 0x11
		::System::Boolean HasThreeStarGacha; // 0x12
		::System::Boolean HasFreeGacha; // 0x13
		::System::Boolean HasFesGacha; // 0x14
		::System::Boolean HasSelectRecruit; // 0x15
		::System::Boolean HasLimitedThreeStarRecruit; // 0x16
		::System::Boolean HasSelectFesPickup; // 0x17
		::System::Boolean HasSelectLimited; // 0x18
		::System::Boolean HasNewbieDateLimited; // 0x19

	};

