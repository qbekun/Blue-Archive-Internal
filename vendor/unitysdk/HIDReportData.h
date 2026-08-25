#pragma once
#include "unitysdk.h"

#define HIDREPORTDATA_FINDORADDREPORT_OFFSET UNITYSDK_OFFSET(0x9F491E0)

	inline static constexpr unsigned int HIDReportData_TypeDefinitionIndex = 28671;

	class HIDReportData : public Il2CppObject
	{
	public:
		::System::Int32 reportId; // 0x10
		HIDReportType* reportType; // 0x14
		::System::Int32 currentBitOffset; // 0x18

		::System::Int32 FindOrAddReport(Il2CppObject* arg, HIDReportType* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, HIDReportType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HIDREPORTDATA_FINDORADDREPORT_OFFSET))(arg, arg, arg, nullptr);
		}

	};

