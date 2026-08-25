#pragma once
#include "unitysdk.h"

#define MINIGAMECONDITIONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD13260)
#define MINIGAMECONDITIONELEMENT_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int MinigameConditionElement_TypeDefinitionIndex = 647;

	class MinigameConditionElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONELEMENT_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

