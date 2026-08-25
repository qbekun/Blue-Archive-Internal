#pragma once
#include "unitysdk.h"

#define MINIGAMECOMMANDWAITSECONDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xD13190)
#define MINIGAMECOMMANDWAITSECONDS_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xD131A0)

	inline static constexpr unsigned int MinigameCommandWaitSeconds_TypeDefinitionIndex = 639;

	class MinigameCommandWaitSeconds : public Il2CppObject
	{
	public:
		::System::Single WaitTimeInSeconds; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDWAITSECONDS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExecuteCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDWAITSECONDS_EXECUTECOMMAND_OFFSET))(nullptr);
		}

	};

