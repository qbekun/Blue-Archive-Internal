#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Touch; }

#define IINPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define IINPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0x000000)
#define IINPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IINPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define IINPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IInput_TypeDefinitionIndex = 30078;

	class IInput : public Il2CppObject
	{
	public:
		::System::Boolean GetButtonDown(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IINPUT_GETBUTTONDOWN_OFFSET))(str, nullptr);
		}

		::System::Single GetAxisRaw(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IINPUT_GETAXISRAW_OFFSET))(str, nullptr);
		}

		::System::Int32 get_touchCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IINPUT_GET_TOUCHCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Touch* GetTouch(::System::Int32 arg)
		{
			return (return (::UnityEngine::Touch*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IINPUT_GETTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_mousePresent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IINPUT_GET_MOUSEPRESENT_OFFSET))(nullptr);
		}

	};

