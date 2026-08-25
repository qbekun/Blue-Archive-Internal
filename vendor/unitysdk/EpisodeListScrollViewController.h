#pragma once
#include "unitysdk.h"

class UILabel;
class UIPanel;

#define EPISODELISTSCROLLVIEWCONTROLLER_SETUI_OFFSET UNITYSDK_OFFSET(0x27EBD00)
#define EPISODELISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EBF00)

	inline static constexpr unsigned int EpisodeListScrollViewController_TypeDefinitionIndex = 7703;

	class EpisodeListScrollViewController : public Il2CppObject
	{
	public:
		UILabel* noMoreHasHiddenLabel; // 0xA8
		UILabel* noMoreNoHiddenLabel; // 0xB0
		UIPanel* clippingPanel; // 0xB8

		::System::Void SetUI(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLER_SETUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

