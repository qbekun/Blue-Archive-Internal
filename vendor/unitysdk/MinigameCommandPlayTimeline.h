#pragma once
#include "unitysdk.h"

#define MINIGAMECOMMANDPLAYTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD12C30)
#define MINIGAMECOMMANDPLAYTIMELINE_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xD12C80)
#define MINIGAMECOMMANDPLAYTIMELINE_COVISUALIZE_OFFSET UNITYSDK_OFFSET(0xD12D00)

	inline static constexpr unsigned int MinigameCommandPlayTimeline_TypeDefinitionIndex = 638;

	class MinigameCommandPlayTimeline : public Il2CppObject
	{
	public:
		::System::String* TimelinePath; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDPLAYTIMELINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExecuteCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDPLAYTIMELINE_EXECUTECOMMAND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoVisualize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDPLAYTIMELINE_COVISUALIZE_OFFSET))(nullptr);
		}

	};

