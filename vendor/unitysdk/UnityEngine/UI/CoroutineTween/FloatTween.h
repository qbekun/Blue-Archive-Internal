#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0xA48B980)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0xA48B990)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0xA48B9A0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA48B9B0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA48B9C0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xA48B9D0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA48B9E0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA48B9F0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA48BA00)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xA48BAF0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xA48BB00)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0xA48BB10)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0xA48BB20)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int FloatTween_TypeDefinitionIndex = 34880;

	class FloatTween : public Il2CppObject
	{
	public:
		FloatTweenCallback* m_Target; // 0x10
		::System::Single m_StartValue; // 0x18
		::System::Single m_TargetValue; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Boolean m_IgnoreTimeScale; // 0x24

		::System::Void set_startValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_STARTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single GetDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETDURATION_OFFSET))(nullptr);
		}

		::System::Single get_startValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_STARTVALUE_OFFSET))(nullptr);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET))(nullptr);
		}

		::System::Single get_duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET))(nullptr);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void AddOnChangedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void set_targetValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_TARGETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_targetValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_TARGETVALUE_OFFSET))(nullptr);
		}

		::System::Boolean ValidTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_VALIDTARGET_OFFSET))(nullptr);
		}

		::System::Void TweenValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_TWEENVALUE_OFFSET))(arg, nullptr);
		}

	};
}

