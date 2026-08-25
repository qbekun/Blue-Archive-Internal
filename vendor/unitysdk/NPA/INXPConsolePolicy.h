#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPConsoleSystemMessageType; }
namespace NPA { class NXPConsoleCommerceDialogMode; }

#define NPA_INXPCONSOLEPOLICY_SHOWPLATFORMSYSTEMMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEPOLICY_STARTSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEPOLICY_STOPSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEPOLICY_SETCOMMERCEDIALOGMODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPConsolePolicy_TypeDefinitionIndex = 25594;

	class INXPConsolePolicy : public Il2CppObject
	{
	public:
		::System::Boolean ShowPlatformSystemMessage(::NPA::NXPConsoleSystemMessageType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPConsoleSystemMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEPOLICY_SHOWPLATFORMSYSTEMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void StartStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEPOLICY_STARTSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void StopStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEPOLICY_STOPSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void SetCommerceDialogMode(::NPA::NXPConsoleCommerceDialogMode* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleCommerceDialogMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEPOLICY_SETCOMMERCEDIALOGMODE_OFFSET))(arg, nullptr);
		}

	};
}

