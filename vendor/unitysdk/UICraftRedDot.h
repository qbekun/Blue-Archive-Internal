#pragma once
#include "unitysdk.h"

class UISprite;

#define UICRAFTREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2645040)
#define UICRAFTREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2645380)
#define UICRAFTREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2645390)

	inline static constexpr unsigned int UICraftRedDot_TypeDefinitionIndex = 6618;

	class UICraftRedDot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTREDDOT_ONENABLE_OFFSET))(nullptr);
		}

	};

