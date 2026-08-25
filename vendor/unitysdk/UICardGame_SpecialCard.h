#pragma once
#include "unitysdk.h"

#define UICARDGAME_SPECIALCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4B420)
#define UICARDGAME_SPECIALCARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xA4B430)
#define UICARDGAME_SPECIALCARD_START_OFFSET UNITYSDK_OFFSET(0xA4B440)

	inline static constexpr unsigned int UICardGame_SpecialCard_TypeDefinitionIndex = 447;

	class UICardGame_SpecialCard : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_SPECIALCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_SPECIALCARD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_SPECIALCARD_START_OFFSET))(nullptr);
		}

	};

