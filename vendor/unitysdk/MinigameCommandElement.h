#pragma once
#include "unitysdk.h"

#define MINIGAMECOMMANDELEMENT_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MINIGAMECOMMANDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD123D0)

	inline static constexpr unsigned int MinigameCommandElement_TypeDefinitionIndex = 646;

	class MinigameCommandElement : public Il2CppObject
	{
	public:
		::System::Void ExecuteCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDELEMENT_EXECUTECOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

