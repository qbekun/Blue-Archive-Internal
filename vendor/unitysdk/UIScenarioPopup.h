#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Texture; }

#define UISCENARIOPOPUP__SETPOPUP_G__ONLOAD|2_0_OFFSET UNITYSDK_OFFSET(0x27E2CC0)
#define UISCENARIOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E2D90)
#define UISCENARIOPOPUP_SETPOPUP_OFFSET UNITYSDK_OFFSET(0x27E2DF0)
#define UISCENARIOPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E2F70)

	inline static constexpr unsigned int UIScenarioPopup_TypeDefinitionIndex = 7671;

	class UIScenarioPopup : public Il2CppObject
	{
	public:
		UITexture* popup; // 0x18
		::System::String* popupName; // 0x20

		::System::Void _SetPopup_g__OnLoad|2_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPOPUP__SETPOPUP_G__ONLOAD|2_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetPopup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPOPUP_SETPOPUP_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPOPUP_INITIALIZE_OFFSET))(nullptr);
		}

	};

