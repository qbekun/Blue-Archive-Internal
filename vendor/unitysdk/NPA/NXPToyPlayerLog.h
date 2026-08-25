#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYPLAYERLOG_DISABLE_OFFSET UNITYSDK_OFFSET(0x9BC8BE0)
#define NPA_NXPTOYPLAYERLOG_ENABLE_OFFSET UNITYSDK_OFFSET(0x9BC8C30)

namespace NPA
{
	inline static constexpr unsigned int NXPToyPlayerLog_TypeDefinitionIndex = 25609;

	class NXPToyPlayerLog : public Il2CppObject
	{
	public:
		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPLAYERLOG_DISABLE_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPLAYERLOG_ENABLE_OFFSET))(nullptr);
		}

	};
}

