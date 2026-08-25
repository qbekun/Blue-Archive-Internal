#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_NXPAUTHHANDLER_GET_LOADPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C46960)
#define NPA_EDITOR_COMMON_NXPAUTHHANDLER_SET_LOADPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C469A0)
#define NPA_EDITOR_COMMON_NXPAUTHHANDLER_GET_SAVEPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C469F0)
#define NPA_EDITOR_COMMON_NXPAUTHHANDLER_SET_SAVEPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C46A30)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAuthHandler_TypeDefinitionIndex = 26846;

	class NXPAuthHandler : public Il2CppObject
	{
	public:
		LoadPlayNowSessionHandler* _LoadPlayNowSession_k__BackingField; // 0x0
		SavePlayNowSessionHandler* _SavePlayNowSession_k__BackingField; // 0x8

		LoadPlayNowSessionHandler* get_LoadPlayNowSession()
		{
			return (return (LoadPlayNowSessionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAUTHHANDLER_GET_LOADPLAYNOWSESSION_OFFSET))(nullptr);
		}

		::System::Void set_LoadPlayNowSession(LoadPlayNowSessionHandler* arg)
		{
			((::System::Void(*)(LoadPlayNowSessionHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAUTHHANDLER_SET_LOADPLAYNOWSESSION_OFFSET))(arg, nullptr);
		}

		SavePlayNowSessionHandler* get_SavePlayNowSession()
		{
			return (return (SavePlayNowSessionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAUTHHANDLER_GET_SAVEPLAYNOWSESSION_OFFSET))(nullptr);
		}

		::System::Void set_SavePlayNowSession(SavePlayNowSessionHandler* arg)
		{
			((::System::Void(*)(SavePlayNowSessionHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAUTHHANDLER_SET_SAVEPLAYNOWSESSION_OFFSET))(arg, nullptr);
		}

	};
}

