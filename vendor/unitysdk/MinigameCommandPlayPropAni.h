#pragma once
#include "unitysdk.h"

#define MINIGAMECOMMANDPLAYPROPANI_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xD12AA0)
#define MINIGAMECOMMANDPLAYPROPANI_.CTOR_OFFSET UNITYSDK_OFFSET(0xD12C20)

	inline static constexpr unsigned int MinigameCommandPlayPropAni_TypeDefinitionIndex = 634;

	class MinigameCommandPlayPropAni : public Il2CppObject
	{
	public:
		::System::Int32 propKey; // 0x18
		::System::String* animationName; // 0x20

		::System::Void ExecuteCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDPLAYPROPANI_EXECUTECOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDPLAYPROPANI_.CTOR_OFFSET))(nullptr);
		}

	};

