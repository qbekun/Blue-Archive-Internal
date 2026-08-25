#pragma once
#include "unitysdk.h"

#define NXPTOYMAINTENANCEEXPOSUREMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9BF0)

	inline static constexpr unsigned int NXPToyMaintenanceExposureMessage_TypeDefinitionIndex = 27488;

	class NXPToyMaintenanceExposureMessage : public Il2CppObject
	{
	public:
		::System::String* language; // 0x10
		::System::String* message; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPTOYMAINTENANCEEXPOSUREMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

