#pragma once
#include "../../unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }

#define MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE90A50)
#define MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0xE90A60)
#define MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE8DCB0)
#define MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_START_OFFSET UNITYSDK_OFFSET(0xE90AF0)
#define MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_SETBUTTONSPRITE_OFFSET UNITYSDK_OFFSET(0xE8E810)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldSeasonSelectElement_TypeDefinitionIndex = 10682;

	class UIFieldSeasonSelectElement : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		UILabel* idLabel; // 0x20
		::UnityEngine::GameObject* onSprite; // 0x28
		::UnityEngine::GameObject* offSprite; // 0x30
		::System::Int64 seasonId; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_START_OFFSET))(nullptr);
		}

		::System::Void SetButtonSprite(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDSEASONSELECTELEMENT_SETBUTTONSPRITE_OFFSET))(arg, nullptr);
		}

	};
}

