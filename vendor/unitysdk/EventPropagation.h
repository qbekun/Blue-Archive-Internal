#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int EventPropagation_TypeDefinitionIndex = 30458;

	class EventPropagation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		EventPropagation* None; // 0x0
		EventPropagation* Bubbles; // 0x0
		EventPropagation* TricklesDown; // 0x0
		EventPropagation* Cancellable; // 0x0
		EventPropagation* SkipDisabledElements; // 0x0
		EventPropagation* IgnoreCompositeRoots; // 0x0

	};

