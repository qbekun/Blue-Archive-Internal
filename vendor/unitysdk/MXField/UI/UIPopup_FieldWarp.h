#pragma once
#include "../../unitysdk.h"

class MXButton;
class UISprite;
class UILabel;

#define MXFIELD_UI_UIPOPUP_FIELDWARP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xEAA6B0)
#define MXFIELD_UI_UIPOPUP_FIELDWARP_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAA8B0)
#define MXFIELD_UI_UIPOPUP_FIELDWARP_AWAKE_OFFSET UNITYSDK_OFFSET(0xEAA8C0)
#define MXFIELD_UI_UIPOPUP_FIELDWARP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEAA9F0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIPopup_FieldWarp_TypeDefinitionIndex = 10775;

	class UIPopup_FieldWarp : public Il2CppObject
	{
	public:
		MXButton* _confirmButton; // 0xE8
		UISprite* _resultSceneSprite; // 0xF0
		UILabel* _resultSceneNameLabel; // 0xF8
		::System::Int64 _currentSceneId; // 0x100
		::System::Int64 _resultSceneId; // 0x108

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDWARP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDWARP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDWARP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDWARP_ONOPENED_OFFSET))(arg, nullptr);
		}

	};
}

