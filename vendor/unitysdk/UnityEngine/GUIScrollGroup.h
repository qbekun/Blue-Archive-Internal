#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUISCROLLGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2897A0)
#define UNITYENGINE_GUISCROLLGROUP_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0xA2897F0)
#define UNITYENGINE_GUISCROLLGROUP_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA2898A0)
#define UNITYENGINE_GUISCROLLGROUP_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0xA289A00)
#define UNITYENGINE_GUISCROLLGROUP_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0xA289B50)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIScrollGroup_TypeDefinitionIndex = 36554;

	class GUIScrollGroup : public Il2CppObject
	{
	public:
		::System::Single calcMinWidth; // 0x90
		::System::Single calcMaxWidth; // 0x94
		::System::Single calcMinHeight; // 0x98
		::System::Single calcMaxHeight; // 0x9C
		::System::Single clientWidth; // 0xA0
		::System::Single clientHeight; // 0xA4
		::System::Boolean allowHorizontalScroll; // 0xA8
		::System::Boolean allowVerticalScroll; // 0xA9
		::System::Boolean needsHorizontalScrollbar; // 0xAA
		::System::Boolean needsVerticalScrollbar; // 0xAB
		::UnityEngine::GUIStyle* horizontalScrollbar; // 0xB0
		::UnityEngine::GUIStyle* verticalScrollbar; // 0xB8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CalcWidth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_CALCWIDTH_OFFSET))(nullptr);
		}

		::System::Void SetHorizontal(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_SETHORIZONTAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CalcHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_CALCHEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetVertical(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_SETVERTICAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

