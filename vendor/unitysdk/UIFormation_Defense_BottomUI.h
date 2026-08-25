#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

#define UIFORMATION_DEFENSE_BOTTOMUI_REFRESHBOTTOMUI_OFFSET UNITYSDK_OFFSET(0xA5F4F0)
#define UIFORMATION_DEFENSE_BOTTOMUI_.CTOR_OFFSET UNITYSDK_OFFSET(0xA5F5A0)

	inline static constexpr unsigned int UIFormation_Defense_BottomUI_TypeDefinitionIndex = 515;

	class UIFormation_Defense_BottomUI : public Il2CppObject
	{
	public:
		Il2CppObject* mainCharacterCards; // 0x18
		Il2CppObject* supportCharacterCards; // 0x20

		::System::Void RefreshBottomUI(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_BOTTOMUI_REFRESHBOTTOMUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_DEFENSE_BOTTOMUI_.CTOR_OFFSET))(nullptr);
		}

	};

