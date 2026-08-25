#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Canvas; }

#define UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER_GETCANVASRECT_OFFSET UNITYSDK_OFFSET(0xA2ED9F0)
#define UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2EDCF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectangularVertexClipper_TypeDefinitionIndex = 34753;

	class RectangularVertexClipper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_WorldCorners; // 0x10
		::Il2CppArray<::System::Object*>* m_CanvasCorners; // 0x18

		::UnityEngine::Rect* GetCanvasRect(::UnityEngine::RectTransform* arg, ::UnityEngine::Canvas* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER_GETCANVASRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER_.CTOR_OFFSET))(nullptr);
		}

	};
}

