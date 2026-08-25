#pragma once
#include "../unitysdk.h"

#define NPA_NPFBAPPEVENTNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCC9E0)

namespace NPA
{
	inline static constexpr unsigned int NPFBAppEventName_TypeDefinitionIndex = 25661;

	class NPFBAppEventName : public Il2CppObject
	{
	public:
		::System::String* Rated; // 0x0
		::System::String* Purchased; // 0x0
		::System::String* InitiatedCheckout; // 0x0
		::System::String* Searched; // 0x0
		::System::String* ViewedContent; // 0x0
		::System::String* UnlockedAchievement; // 0x0
		::System::String* SpentCredits; // 0x0
		::System::String* AddedPaymentInfo; // 0x0
		::System::String* ActivatedApp; // 0x0
		::System::String* AchievedLevel; // 0x0
		::System::String* AddedToCart; // 0x0
		::System::String* CompletedTutorial; // 0x0
		::System::String* CompletedRegistration; // 0x0
		::System::String* AddedToWishlist; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPFBAPPEVENTNAME_.CTOR_OFFSET))(nullptr);
		}

	};
}

