#pragma once
#include "unitysdk.h"

#define UIBACKGROUNDEXTENDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1CB60)
#define UIBACKGROUNDEXTENDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1CB70)
#define UIBACKGROUNDEXTENDER_DISCARD_OFFSET UNITYSDK_OFFSET(0xC1CCA0)
#define UIBACKGROUNDEXTENDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC1CD20)
#define UIBACKGROUNDEXTENDER_REFRESH_OFFSET UNITYSDK_OFFSET(0xC1CDE0)

	inline static constexpr unsigned int UIBackgroundExtender_TypeDefinitionIndex = 8862;

	class UIBackgroundExtender : public Il2CppObject
	{
	public:
		::System::Single factor; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBACKGROUNDEXTENDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBACKGROUNDEXTENDER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Discard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBACKGROUNDEXTENDER_DISCARD_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBACKGROUNDEXTENDER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBACKGROUNDEXTENDER_REFRESH_OFFSET))(nullptr);
		}

	};

