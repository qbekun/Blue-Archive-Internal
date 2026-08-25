#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }

#define TMPRO_COLORTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0xA120980)
#define TMPRO_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA120A60)
#define TMPRO_COLORTWEEN_GET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0xA120A70)
#define TMPRO_COLORTWEEN_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA120A80)
#define TMPRO_COLORTWEEN_GET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0xA120A90)
#define TMPRO_COLORTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0xA120AA0)
#define TMPRO_COLORTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0xA120A50)
#define TMPRO_COLORTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA120AB0)
#define TMPRO_COLORTWEEN_SET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0xA120AC0)
#define TMPRO_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA120AD0)
#define TMPRO_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA120AE0)
#define TMPRO_COLORTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA120BD0)
#define TMPRO_COLORTWEEN_SET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0xA120BE0)
#define TMPRO_COLORTWEEN_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA120BF0)
#define TMPRO_COLORTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xA120C00)

namespace TMPro
{
	inline static constexpr unsigned int ColorTween_TypeDefinitionIndex = 33642;

	class ColorTween : public Il2CppObject
	{
	public:
		ColorTweenCallback* m_Target; // 0x10
		::UnityEngine::Color* m_StartColor; // 0x18
		::UnityEngine::Color* m_TargetColor; // 0x28
		ColorTweenMode* m_TweenMode; // 0x38
		::System::Single m_Duration; // 0x3C
		::System::Boolean m_IgnoreTimeScale; // 0x40

		::System::Void TweenValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_TWEENVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET))(arg, nullptr);
		}

		ColorTweenMode* get_tweenMode()
		{
			return (return (ColorTweenMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_TWEENMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_startColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_STARTCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_targetColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_TARGETCOLOR_OFFSET))(nullptr);
		}

		::System::Single GetDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GETDURATION_OFFSET))(nullptr);
		}

		::System::Boolean ValidTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_VALIDTARGET_OFFSET))(nullptr);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GETIGNORETIMESCALE_OFFSET))(nullptr);
		}

		::System::Void set_tweenMode(ColorTweenMode* arg)
		{
			((::System::Void(*)(ColorTweenMode*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_TWEENMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET))(nullptr);
		}

		::System::Void AddOnChangedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Single get_duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_targetColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_TARGETCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_startColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_STARTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_DURATION_OFFSET))(arg, nullptr);
		}

	};
}

