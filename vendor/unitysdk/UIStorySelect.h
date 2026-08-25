#pragma once
#include "unitysdk.h"

class MXButton;

#define UISTORYSELECT_ONCLICKREADYMENU_OFFSET UNITYSDK_OFFSET(0xB36DA0)
#define UISTORYSELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB36E30)
#define UISTORYSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB37040)

	inline static constexpr unsigned int UIStorySelect_TypeDefinitionIndex = 8313;

	class UIStorySelect : public Il2CppObject
	{
	public:
		MXButton* BackButton; // 0xD8
		MXButton* StoryButton; // 0xE0
		MXButton* TempButton; // 0xE8

		::System::Void OnClickReadyMenu()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTORYSELECT_ONCLICKREADYMENU_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTORYSELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTORYSELECT_.CTOR_OFFSET))(nullptr);
		}

	};

