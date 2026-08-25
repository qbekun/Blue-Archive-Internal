#pragma once
#include "../../unitysdk.h"

#define NPA_ANALYTICS_NXPTOYNXLOGINPUTLOGLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE1E0)

namespace NPA::Analytics
{
	inline static constexpr unsigned int NXPToyNXLogInputLogLevel_TypeDefinitionIndex = 27594;

	class NXPToyNXLogInputLogLevel : public Il2CppObject
	{
	public:
		::System::Int32 NXLOG_INPUT_LOG_DISABLED; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_MOUSE_EVENT; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_MOUSE_SAMPLING; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_MOUSE_ALL; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_MOUSE_EXCLUDE_MOVE_ONLY; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_MOUSE_ALL_NO_MM; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_KEYBOARD_EVENT; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_KEYBOARD_SAMPLING; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_KEYBOARD_ALL; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_GAMEPAD_EVENT; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_GAMEPAD_SAMPLING; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_GAMEPAD_ALL; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_ALL; // 0x0
		::System::Int32 NXLOG_INPUT_LOG_ALL_NO_MM; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ANALYTICS_NXPTOYNXLOGINPUTLOGLEVEL_.CTOR_OFFSET))(nullptr);
		}

	};
}

