#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYMAINTENANCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9BD0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyMaintenanceInfo_TypeDefinitionIndex = 27489;

	class NXPToyMaintenanceInfo : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::Int32 category; // 0x18
		::System::String* utc; // 0x20
		::System::Int64 startTime; // 0x28
		::System::Int64 finishTime; // 0x30
		::System::Int32 detailType; // 0x38
		Il2CppObject* os; // 0x40
		Il2CppObject* country; // 0x48
		Il2CppObject* gameServers; // 0x50
		Il2CppObject* packages; // 0x58
		::System::Boolean useExposureMessage; // 0x60
		NXPToyMaintenanceExposureMessage* exposureMessage; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYMAINTENANCEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

