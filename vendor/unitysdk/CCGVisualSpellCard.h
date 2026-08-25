#pragma once
#include "unitysdk.h"

#define CCGVISUALSPELLCARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x26EA460)
#define CCGVISUALSPELLCARD_START_OFFSET UNITYSDK_OFFSET(0x26EA470)
#define CCGVISUALSPELLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26EA480)

	inline static constexpr unsigned int CCGVisualSpellCard_TypeDefinitionIndex = 408;

	class CCGVisualSpellCard : public Il2CppObject
	{
	public:
		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPELLCARD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPELLCARD_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPELLCARD_.CTOR_OFFSET))(nullptr);
		}

	};

