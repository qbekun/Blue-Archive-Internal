#pragma once
#include "unitysdk.h"

class UISprite;

#define UIACADEMYREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2642220)
#define UIACADEMYREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2642230)
#define UIACADEMYREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2642290)

	inline static constexpr unsigned int UIAcademyRedDot_TypeDefinitionIndex = 6606;

	class UIAcademyRedDot : public Il2CppObject
	{
	public:
		UISprite* RedDot; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

	};

