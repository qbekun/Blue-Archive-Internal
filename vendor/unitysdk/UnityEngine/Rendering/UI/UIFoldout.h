#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_START_OFFSET UNITYSDK_OFFSET(0x9FF1B10)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9FF1BD0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET UNITYSDK_OFFSET(0x9FF1BC0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET UNITYSDK_OFFSET(0x9FF1BE0)
#define UNITYENGINE_RENDERING_UI_UIFOLDOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF1DE0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int UIFoldout_TypeDefinitionIndex = 34174;

	class UIFoldout : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* content; // 0x120
		::UnityEngine::GameObject* arrowOpened; // 0x128
		::UnityEngine::GameObject* arrowClosed; // 0x130

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_START_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetState(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_SETSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_UIFOLDOUT_.CTOR_OFFSET))(nullptr);
		}

	};
}

