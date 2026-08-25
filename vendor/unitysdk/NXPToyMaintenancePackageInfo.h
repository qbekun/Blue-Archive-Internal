#pragma once
#include "unitysdk.h"

#define NXPTOYMAINTENANCEPACKAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9BE0)

	inline static constexpr unsigned int NXPToyMaintenancePackageInfo_TypeDefinitionIndex = 27487;

	class NXPToyMaintenancePackageInfo : public Il2CppObject
	{
	public:
		::System::String* mk; // 0x10
		::System::String* pkg; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPTOYMAINTENANCEPACKAGEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

