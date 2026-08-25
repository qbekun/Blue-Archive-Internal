#pragma once
#include "unitysdk.h"

class SpringPanel;
namespace UnityEngine { class Vector3; }
class OnFinished;
class UIPanel;
namespace UnityEngine { class Transform; }
class UIScrollView;
namespace UnityEngine { class GameObject; }

#define SPRINGPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F472F0)
#define SPRINGPANEL_BEGIN_OFFSET UNITYSDK_OFFSET(0x1F47310)
#define SPRINGPANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F47400)
#define SPRINGPANEL_STOP_OFFSET UNITYSDK_OFFSET(0x1F47460)
#define SPRINGPANEL_ADVANCETOWARDSPOSITION_OFFSET UNITYSDK_OFFSET(0x1F47520)
#define SPRINGPANEL_START_OFFSET UNITYSDK_OFFSET(0x1F47B80)

	inline static constexpr unsigned int SpringPanel_TypeDefinitionIndex = 123;

	class SpringPanel : public Il2CppObject
	{
	public:
		SpringPanel* current; // 0x0
		::UnityEngine::Vector3* target; // 0x18
		::System::Single strength; // 0x24
		OnFinished* onFinished; // 0x28
		UIPanel* mPanel; // 0x30
		::UnityEngine::Transform* mTrans; // 0x38
		UIScrollView* mDrag; // 0x40
		::System::Single mDelta; // 0x48

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPANEL_UPDATE_OFFSET))(nullptr);
		}

		SpringPanel* Begin(::UnityEngine::GameObject* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3)
		{
			return ((SpringPanel*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPRINGPANEL_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPANEL_.CTOR_OFFSET))(nullptr);
		}

		SpringPanel* Stop(::UnityEngine::GameObject* arg)
		{
			return ((SpringPanel*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPRINGPANEL_STOP_OFFSET))(arg, nullptr);
		}

		::System::Void AdvanceTowardsPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPANEL_ADVANCETOWARDSPOSITION_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPANEL_START_OFFSET))(nullptr);
		}

	};

