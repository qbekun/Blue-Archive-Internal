#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int HIDCollectionType_TypeDefinitionIndex = 28659;

	class HIDCollectionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		HIDCollectionType* Physical; // 0x0
		HIDCollectionType* Application; // 0x0
		HIDCollectionType* Logical; // 0x0
		HIDCollectionType* Report; // 0x0
		HIDCollectionType* NamedArray; // 0x0
		HIDCollectionType* UsageSwitch; // 0x0
		HIDCollectionType* UsageModifier; // 0x0

	};

