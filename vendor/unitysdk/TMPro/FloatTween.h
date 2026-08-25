#pragma once
#include "../unitysdk.h"

#define TMPRO_FLOATTWEEN_GET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xA120C10)
#define TMPRO_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA120C20)
#define TMPRO_FLOATTWEEN_SET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xA120D10)
#define TMPRO_FLOATTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xA120D20)
#define TMPRO_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA120D30)
#define TMPRO_FLOATTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0xA120D40)
#define TMPRO_FLOATTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0xA120DF0)
#define TMPRO_FLOATTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA120E00)
#define TMPRO_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA120E10)
#define TMPRO_FLOATTWEEN_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0xA120E20)
#define TMPRO_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA120E30)
#define TMPRO_FLOATTWEEN_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0xA120E40)
#define TMPRO_FLOATTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0xA120E50)

namespace TMPro
{
	inline static constexpr unsigned int FloatTween_TypeDefinitionIndex = 33644;

	class FloatTween : public Il2CppObject
	{
	public:
		FloatTweenCallback* m_Target; // 0x10
		::System::Single m_StartValue; // 0x18
		::System::Single m_TargetValue; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Boolean m_IgnoreTimeScale; // 0x24

		::System::Single get_targetValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_TARGETVALUE_OFFSET))(nullptr);
		}

		::System::Void AddOnChangedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void set_targetValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_TARGETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void TweenValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_TWEENVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_VALIDTARGET_OFFSET))(nullptr);
		}

		::System::Single get_duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET))(nullptr);
		}

		::System::Single get_startValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_STARTVALUE_OFFSET))(nullptr);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET))(nullptr);
		}

		::System::Void set_startValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_STARTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single GetDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GETDURATION_OFFSET))(nullptr);
		}

	};
}

