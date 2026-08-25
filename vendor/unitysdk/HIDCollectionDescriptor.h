#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int HIDCollectionDescriptor_TypeDefinitionIndex = 28662;

	class HIDCollectionDescriptor : public Il2CppObject
	{
	public:
		HIDCollectionType* type; // 0x10
		::System::Int32 usage; // 0x14
		UsagePage* usagePage; // 0x18
		::System::Int32 parent; // 0x1C
		::System::Int32 childCount; // 0x20
		::System::Int32 firstChild; // 0x24

	};

