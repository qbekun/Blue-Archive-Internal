#pragma once
#include "unitysdk.h"

#define IINTERRUPTEFFECT_ADD_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IINTERRUPTEFFECT_REMOVE_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IInterruptEffect_TypeDefinitionIndex = 975;

	class IInterruptEffect : public Il2CppObject
	{
	public:
		::System::Void add_OnInterruptedByCasterActionChange(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + IINTERRUPTEFFECT_ADD_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnInterruptedByCasterActionChange(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + IINTERRUPTEFFECT_REMOVE_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET))(arg, nullptr);
		}

	};

