#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class GameObject; }
class UIScrollView;

#define UIEFFECTSCROLLVIEWVISIBILITYCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1D0A0)
#define UIEFFECTSCROLLVIEWVISIBILITYCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1D3F0)
#define UIEFFECTSCROLLVIEWVISIBILITYCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1D440)

	inline static constexpr unsigned int UIEffectScrollViewVisibilityController_TypeDefinitionIndex = 8863;

	class UIEffectScrollViewVisibilityController : public Il2CppObject
	{
	public:
		UIWidget* targetWidget; // 0x18
		::UnityEngine::GameObject* targetEffect; // 0x20
		UIScrollView* _scrollView; // 0x28

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEFFECTSCROLLVIEWVISIBILITYCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEFFECTSCROLLVIEWVISIBILITYCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEFFECTSCROLLVIEWVISIBILITYCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

