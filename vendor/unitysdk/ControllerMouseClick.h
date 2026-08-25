#pragma once
#include "unitysdk.h"

#define CONTROLLERMOUSECLICK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC82A60)
#define CONTROLLERMOUSECLICK_SENDINPUT_OFFSET UNITYSDK_OFFSET(0xC82A70)
#define CONTROLLERMOUSECLICK_SENDMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0xC7EDF0)

	inline static constexpr unsigned int ControllerMouseClick_TypeDefinitionIndex = 9064;

	class ControllerMouseClick : public Il2CppObject
	{
	public:
		::System::UInt32 INPUT_MOUSE; // 0x0
		::System::UInt32 MOUSEEVENTF_LEFTDOWN; // 0x0
		::System::UInt32 MOUSEEVENTF_LEFTUP; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSECLICK_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 SendInput(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg2, ::System::Int32 arg3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSECLICK_SENDINPUT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SendMouseEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSECLICK_SENDMOUSEEVENT_OFFSET))(arg, nullptr);
		}

	};

