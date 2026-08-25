#pragma once
#include "../../unitysdk.h"

namespace NPA::Service { class NXPToyServiceMaintenanceData; }
namespace NPA::Auth { class NXPToyMaintenanceInfo; }

#define NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4BE0)
#define NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4BF0)
#define NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_FROMMAINTENANCEINFO_OFFSET UNITYSDK_OFFSET(0x9CC4C30)
#define NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC4CD0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyServiceMaintenanceData_TypeDefinitionIndex = 27296;

	class NXPToyServiceMaintenanceData : public Il2CppObject
	{
	public:
		Category* category; // 0x10
		DetailType* detailType; // 0x14
		::System::Int64 startTime; // 0x18
		::System::Int64 finishTime; // 0x20
		::System::Boolean useExposureMessage; // 0x28
		NXPToyMaintenanceExposureMessage* exposureMessage; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::NPA::Service::NXPToyServiceMaintenanceData* FromMaintenanceInfo(::NPA::Auth::NXPToyMaintenanceInfo* arg)
		{
			return (return (::NPA::Service::NXPToyServiceMaintenanceData*(*)(::NPA::Auth::NXPToyMaintenanceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_FROMMAINTENANCEINFO_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYSERVICEMAINTENANCEDATA_TOSTRING_OFFSET))(nullptr);
		}

	};
}

