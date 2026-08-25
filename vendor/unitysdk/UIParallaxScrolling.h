#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
class UIDragScrollView;
class UIPanel;
namespace UnityEngine { class Coroutine; }

#define UIPARALLAXSCROLLING_.CTOR_OFFSET UNITYSDK_OFFSET(0xC21240)
#define UIPARALLAXSCROLLING_COPARALLAXSCROLLING_OFFSET UNITYSDK_OFFSET(0xC21290)
#define UIPARALLAXSCROLLING_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC21320)
#define UIPARALLAXSCROLLING_AWAKE_OFFSET UNITYSDK_OFFSET(0xC21470)
#define UIPARALLAXSCROLLING_UPDATE_OFFSET UNITYSDK_OFFSET(0xC21530)
#define UIPARALLAXSCROLLING_START_OFFSET UNITYSDK_OFFSET(0xC215E0)
#define UIPARALLAXSCROLLING_COFINDDRAGPANEL_OFFSET UNITYSDK_OFFSET(0xC21400)
#define UIPARALLAXSCROLLING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC21690)

	inline static constexpr unsigned int UIParallaxScrolling_TypeDefinitionIndex = 8877;

	class UIParallaxScrolling : public Il2CppObject
	{
	public:
		::System::Single ParallaxRate; // 0x18
		::System::Boolean ParallaxOn; // 0x1C
		::System::Boolean FixXAxis; // 0x1D
		::System::Boolean FixYAxis; // 0x1E
		::UnityEngine::Vector2* originalLocalPos; // 0x20
		UIDragScrollView* dragScrollView; // 0x28
		UIPanel* dragPanel; // 0x30
		::UnityEngine::Coroutine* findPanelCoroutine; // 0x38
		::UnityEngine::Coroutine* parallaxScrollingCoroutine; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoParallaxScrolling()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_COPARALLAXSCROLLING_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFindDragPanel()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_COFINDDRAGPANEL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARALLAXSCROLLING_ONDISABLE_OFFSET))(nullptr);
		}

	};

