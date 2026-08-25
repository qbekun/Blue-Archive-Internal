#pragma once
#include "unitysdk.h"

class UIScrollView;
class UISprite;
namespace UnityEngine { class GameObject; }

#define UIHIGHLIGHTBORDERINSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1E950)
#define UIHIGHLIGHTBORDERINSCROLLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1E960)
#define UIHIGHLIGHTBORDERINSCROLLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1EBF0)

	inline static constexpr unsigned int UIHighlightBorderInScrollController_TypeDefinitionIndex = 8867;

	class UIHighlightBorderInScrollController : public Il2CppObject
	{
	public:
		UIScrollView* ParentScrollView; // 0x18
		UISprite* BorderSprite; // 0x20
		::UnityEngine::GameObject* BorderEffect; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHIGHLIGHTBORDERINSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHIGHLIGHTBORDERINSCROLLCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHIGHLIGHTBORDERINSCROLLCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

	};

