#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_POINTERMANIPULATOR_CANSTARTMANIPULATION_OFFSET UNITYSDK_OFFSET(0xA30F1E0)
#define UNITYENGINE_UIELEMENTS_POINTERMANIPULATOR_CANSTOPMANIPULATION_OFFSET UNITYSDK_OFFSET(0xA30F760)
#define UNITYENGINE_UIELEMENTS_POINTERMANIPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30E0E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerManipulator_TypeDefinitionIndex = 30145;

	class PointerManipulator : public Il2CppObject
	{
	public:
		::System::Int32 m_CurrentPointerId; // 0x30

		::System::Boolean CanStartManipulation(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMANIPULATOR_CANSTARTMANIPULATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanStopManipulation(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMANIPULATOR_CANSTOPMANIPULATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMANIPULATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

