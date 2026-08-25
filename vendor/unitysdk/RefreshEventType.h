#pragma once
#include "unitysdk.h"

class RefreshEventType;

	inline static constexpr unsigned int RefreshEventType_TypeDefinitionIndex = 9950;

	class RefreshEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		RefreshEventType* None; // 0x0
		RefreshEventType* DisableAll; // 0x0
		RefreshEventType* ByQuickSlot; // 0x0
		RefreshEventType* ByPolymorph; // 0x0
		RefreshEventType* ByHide; // 0x0
		RefreshEventType* BySwitch; // 0x0
		RefreshEventType* ByActionButtonEffect; // 0x0

	};

