#pragma once
#include "unitysdk.h"

#define MINIGAMENOTEPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MINIGAMENOTEPOOL`1_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int MiniGameNotePool`1_TypeDefinitionIndex = 3827;

	class MiniGameNotePool`1 : public ::MXTimeline::IntMinTimelineParameter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEPOOL`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetActive(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEPOOL`1_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

	};

