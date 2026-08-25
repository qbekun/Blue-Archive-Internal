#pragma once
#include "unitysdk.h"

class EntityCompositionData;

#define INTERACTIONTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7C80)

	inline static constexpr unsigned int InteractionToggle_TypeDefinitionIndex = 9876;

	class InteractionToggle : public Il2CppObject
	{
	public:
		::System::Int32 TriggerCountOnToOff; // 0x20
		::System::Boolean Toggle; // 0x24

		::System::Void .ctor(EntityCompositionData* arg)
		{
			((::System::Void(*)(EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIONTOGGLE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

