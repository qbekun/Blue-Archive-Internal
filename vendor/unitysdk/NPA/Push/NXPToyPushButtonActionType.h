#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushButtonActionType; }

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushButtonActionType_TypeDefinitionIndex = 27337;

	class NXPToyPushButtonActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Push::NXPToyPushButtonActionType* MAIL; // 0x0
		::NPA::Push::NXPToyPushButtonActionType* AUCTION; // 0x0
		::NPA::Push::NXPToyPushButtonActionType* SHOP; // 0x0
		::NPA::Push::NXPToyPushButtonActionType* NOTI; // 0x0
		::NPA::Push::NXPToyPushButtonActionType* COMMUNITY; // 0x0
		::NPA::Push::NXPToyPushButtonActionType* CUSTOMER_CENTER; // 0x0
		::NPA::Push::NXPToyPushButtonActionType* ETC; // 0x0

	};
}

