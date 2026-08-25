#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int ITweenValue_TypeDefinitionIndex = 34875;

	class ITweenValue : public Il2CppObject
	{
	public:
		::System::Boolean ValidTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_VALIDTARGET_OFFSET))(nullptr);
		}

		::System::Void TweenValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_TWEENVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_ITWEENVALUE_GET_IGNORETIMESCALE_OFFSET))(nullptr);
		}

	};
}

