#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_NXLOGHANDLER_GET_SENDNXLOG_OFFSET UNITYSDK_OFFSET(0x9C46CB0)
#define NPA_EDITOR_COMMON_NXLOGHANDLER_SET_SENDNXLOG_OFFSET UNITYSDK_OFFSET(0x9C46CF0)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXLogHandler_TypeDefinitionIndex = 26848;

	class NXLogHandler : public Il2CppObject
	{
	public:
		SendNXLogHandler* _SendNXLog_k__BackingField; // 0x0

		SendNXLogHandler* get_SendNXLog()
		{
			return (return (SendNXLogHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXLOGHANDLER_GET_SENDNXLOG_OFFSET))(nullptr);
		}

		::System::Void set_SendNXLog(SendNXLogHandler* arg)
		{
			((::System::Void(*)(SendNXLogHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXLOGHANDLER_SET_SENDNXLOG_OFFSET))(arg, nullptr);
		}

	};
}

