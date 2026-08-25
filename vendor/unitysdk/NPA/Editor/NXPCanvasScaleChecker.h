#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class RectTransform; }

#define NPA_EDITOR_NXPCANVASSCALECHECKER_SETCANVASSCALECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x9D3C400)
#define NPA_EDITOR_NXPCANVASSCALECHECKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9D3C4E0)
#define NPA_EDITOR_NXPCANVASSCALECHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3C610)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPCanvasScaleChecker_TypeDefinitionIndex = 26111;

	class NXPCanvasScaleChecker : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* canvasScale; // 0x18
		::UnityEngine::RectTransform* targetCanvasRectTransform; // 0x28
		Il2CppObject* canvasScaleChangeCallback; // 0x30

		::System::Void SetCanvasScaleChangeCallback(::UnityEngine::RectTransform* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCANVASSCALECHECKER_SETCANVASSCALECHANGECALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCANVASSCALECHECKER_ONUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCANVASSCALECHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

