#pragma once
#include "unitysdk.h"

class UISprite;

#define UIARENAREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x21F7750)
#define UIARENAREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F7920)
#define UIARENAREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21F7930)

	inline static constexpr unsigned int UIArenaRedDot_TypeDefinitionIndex = 4270;

	class UIArenaRedDot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREDDOT_ONENABLE_OFFSET))(nullptr);
		}

	};

