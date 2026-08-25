#pragma once
#include "unitysdk.h"

class UIBasicSprite;

#define FILLAMOUNTHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20558F0)
#define FILLAMOUNTHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2055970)
#define FILLAMOUNTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20559C0)

	inline static constexpr unsigned int FillAmountHandler_TypeDefinitionIndex = 3339;

	class FillAmountHandler : public Il2CppObject
	{
	public:
		::System::Single fillAmount; // 0x18
		UIBasicSprite* image; // 0x20

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILLAMOUNTHANDLER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILLAMOUNTHANDLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILLAMOUNTHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};

