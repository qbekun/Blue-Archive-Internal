#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class UIFieldWorldMapButtonState; }
class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }

#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_SETLABEL_OFFSET UNITYSDK_OFFSET(0xEA8B70)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_SETBUTTONELEMENT_OFFSET UNITYSDK_OFFSET(0xEA7170)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_SETNEWTAG_OFFSET UNITYSDK_OFFSET(0xEA7B10)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA8BF0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0xEA72E0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldWorldMapButtonElement_TypeDefinitionIndex = 10764;

	class UIFieldWorldMapButtonElement : public Il2CppObject
	{
	public:
		::MXField::UI::UIFieldWorldMapButtonState* state; // 0x18
		UILabel* label; // 0x20
		UITexture* CurrentPlayerPortrait; // 0x28
		::UnityEngine::GameObject* NewTag; // 0x30

		::System::Void SetLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_SETLABEL_OFFSET))(str, nullptr);
		}

		::System::Void SetButtonElement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_SETBUTTONELEMENT_OFFSET))(str, nullptr);
		}

		::System::Void SetNewTag(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_SETNEWTAG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MXField::UI::UIFieldWorldMapButtonState* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldWorldMapButtonState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTONELEMENT_REFRESH_OFFSET))(arg, nullptr);
		}

	};
}

