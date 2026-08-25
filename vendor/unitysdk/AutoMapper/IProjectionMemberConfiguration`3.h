#pragma once
#include "../unitysdk.h"

#define AUTOMAPPER_IPROJECTIONMEMBERCONFIGURATION`3_IGNORE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper
{
	inline static constexpr unsigned int IProjectionMemberConfiguration`3_TypeDefinitionIndex = 37624;

	class IProjectionMemberConfiguration`3 : public Il2CppObject
	{
	public:
		::System::Void Ignore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_IPROJECTIONMEMBERCONFIGURATION`3_IGNORE_OFFSET))(nullptr);
		}

	};
}

