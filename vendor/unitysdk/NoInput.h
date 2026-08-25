#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Touch; }

#define NOINPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0xA314170)
#define NOINPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0xA314180)
#define NOINPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0xA314190)
#define NOINPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0xA3141A0)
#define NOINPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0xA3141C0)
#define NOINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA312280)

	inline static constexpr unsigned int NoInput_TypeDefinitionIndex = 30080;

	class NoInput : public Il2CppObject
	{
	public:
		::System::Boolean GetButtonDown(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NOINPUT_GETBUTTONDOWN_OFFSET))(str, nullptr);
		}

		::System::Single GetAxisRaw(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NOINPUT_GETAXISRAW_OFFSET))(str, nullptr);
		}

		::System::Int32 get_touchCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOINPUT_GET_TOUCHCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Touch* GetTouch(::System::Int32 arg)
		{
			return (return (::UnityEngine::Touch*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NOINPUT_GETTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_mousePresent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOINPUT_GET_MOUSEPRESENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOINPUT_.CTOR_OFFSET))(nullptr);
		}

	};

