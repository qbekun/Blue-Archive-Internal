#pragma once
#include "../../unitysdk.h"

class UITexture;
class UILabel;
class MXButton;

#define MXFIELD_UI_UIFIELDLEVELUPNOTICE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEA23E0)
#define MXFIELD_UI_UIFIELDLEVELUPNOTICE_SETIMAGE_OFFSET UNITYSDK_OFFSET(0xEA2480)
#define MXFIELD_UI_UIFIELDLEVELUPNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA2570)
#define MXFIELD_UI_UIFIELDLEVELUPNOTICE_START_OFFSET UNITYSDK_OFFSET(0xEA2580)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldLevelUpNotice_TypeDefinitionIndex = 10742;

	class UIFieldLevelUpNotice : public Il2CppObject
	{
	public:
		UITexture* image; // 0xE8
		UILabel* levelLabel; // 0xF0
		MXButton* closeButton; // 0xF8

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLEVELUPNOTICE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLEVELUPNOTICE_SETIMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLEVELUPNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLEVELUPNOTICE_START_OFFSET))(nullptr);
		}

	};
}

