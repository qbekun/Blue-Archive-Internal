#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class Label; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }

#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA3B1940)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_GET_LOWVALUE_OFFSET UNITYSDK_OFFSET(0xA3B1970)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_LOWVALUE_OFFSET UNITYSDK_OFFSET(0xA3B1980)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_GET_HIGHVALUE_OFFSET UNITYSDK_OFFSET(0xA3B1AE0)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_HIGHVALUE_OFFSET UNITYSDK_OFFSET(0xA3B1AF0)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B1B10)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_ONGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA3B1E50)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3B1E80)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3B1E90)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3B20F0)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3B19A0)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_CALCULATEPROGRESSWIDTH_OFFSET UNITYSDK_OFFSET(0xA3B2120)
#define UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B2250)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int AbstractProgressBar_TypeDefinitionIndex = 30356;

	class AbstractProgressBar : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* containerUssClassName; // 0x8
		::System::String* titleUssClassName; // 0x10
		::System::String* titleContainerUssClassName; // 0x18
		::System::String* progressUssClassName; // 0x20
		::System::String* backgroundUssClassName; // 0x28
		::UnityEngine::UIElements::VisualElement* m_Background; // 0x3C0
		::UnityEngine::UIElements::VisualElement* m_Progress; // 0x3C8
		::UnityEngine::UIElements::Label* m_Title; // 0x3D0
		::System::Single m_LowValue; // 0x3D8
		::System::Single m_HighValue; // 0x3DC
		::System::Single m_Value; // 0x3E0

		::System::Void set_title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::Single get_lowValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_GET_LOWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_lowValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_LOWVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_highValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_GET_HIGHVALUE_OFFSET))(nullptr);
		}

		::System::Void set_highValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_HIGHVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_ONGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void SetProgress(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_SETPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateProgressWidth(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_CALCULATEPROGRESSWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ABSTRACTPROGRESSBAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

