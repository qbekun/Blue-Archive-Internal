#pragma once
#include "unitysdk.h"

class UILabel;

#define UIWORKSTAGENAMEDISPLAY_GET_STAGENAMELABEL_OFFSET UNITYSDK_OFFSET(0xBDDA20)
#define UIWORKSTAGENAMEDISPLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBDDB00)
#define UIWORKSTAGENAMEDISPLAY_GET_STAGENUMBERLABEL_OFFSET UNITYSDK_OFFSET(0xBDE260)
#define UIWORKSTAGENAMEDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDE320)
#define UIWORKSTAGENAMEDISPLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0xBDDB10)

	inline static constexpr unsigned int UIWorkStageNameDisplay_TypeDefinitionIndex = 8703;

	class UIWorkStageNameDisplay : public Il2CppObject
	{
	public:
		UILabel* stageNameLabel; // 0x18
		UILabel* stageNumberLabel; // 0x20

		UILabel* get_StageNameLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKSTAGENAMEDISPLAY_GET_STAGENAMELABEL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKSTAGENAMEDISPLAY_ONENABLE_OFFSET))(nullptr);
		}

		UILabel* get_StageNumberLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKSTAGENAMEDISPLAY_GET_STAGENUMBERLABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKSTAGENAMEDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKSTAGENAMEDISPLAY_REFRESH_OFFSET))(nullptr);
		}

	};

