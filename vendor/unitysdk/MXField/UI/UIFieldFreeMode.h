#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class UIFieldFreeModeUnitButton; }
namespace UnityEngine { class GameObject; }

#define MXFIELD_UI_UIFIELDFREEMODE___N__0_OFFSET UNITYSDK_OFFSET(0xE8C460)
#define MXFIELD_UI_UIFIELDFREEMODE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xE8C470)
#define MXFIELD_UI_UIFIELDFREEMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8C500)
#define MXFIELD_UI_UIFIELDFREEMODE_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xE8C510)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldFreeMode_TypeDefinitionIndex = 10674;

	class UIFieldFreeMode : public Il2CppObject
	{
	public:
		::MXField::UI::UIFieldFreeModeUnitButton* ButtonUnit_Day1; // 0xD8
		::MXField::UI::UIFieldFreeModeUnitButton* ButtonUnit_Day2; // 0xE0
		::MXField::UI::UIFieldFreeModeUnitButton* ButtonUnit_Day3; // 0xE8
		::MXField::UI::UIFieldFreeModeUnitButton* ButtonUnit_Day4; // 0xF0
		::MXField::UI::UIFieldFreeModeUnitButton* ButtonUnit_Day5; // 0xF8
		::UnityEngine::GameObject* descLabelObject; // 0x100

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODE___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODE_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

	};
}

