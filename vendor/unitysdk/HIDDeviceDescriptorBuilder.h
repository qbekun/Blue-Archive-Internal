#pragma once
#include "unitysdk.h"

#define HIDDEVICEDESCRIPTORBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F468A0)
#define HIDDEVICEDESCRIPTORBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F468C0)
#define HIDDEVICEDESCRIPTORBUILDER_STARTREPORT_OFFSET UNITYSDK_OFFSET(0x9F468E0)
#define HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0x9F46930)
#define HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0x9F46E50)
#define HIDDEVICEDESCRIPTORBUILDER_WITHPHYSICALMINMAX_OFFSET UNITYSDK_OFFSET(0x9F46E80)
#define HIDDEVICEDESCRIPTORBUILDER_WITHLOGICALMINMAX_OFFSET UNITYSDK_OFFSET(0x9F47030)
#define HIDDEVICEDESCRIPTORBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x9F471C0)

	inline static constexpr unsigned int HIDDeviceDescriptorBuilder_TypeDefinitionIndex = 28664;

	class HIDDeviceDescriptorBuilder : public Il2CppObject
	{
	public:
		UsagePage* usagePage; // 0x10
		::System::Int32 usage; // 0x14
		::System::Int32 m_CurrentReportId; // 0x18
		HIDReportType* m_CurrentReportType; // 0x1C
		::System::Int32 m_CurrentReportOffsetInBits; // 0x20
		Il2CppObject* m_Elements; // 0x28
		Il2CppObject* m_Collections; // 0x30
		::System::Int32 m_InputReportSize; // 0x38
		::System::Int32 m_OutputReportSize; // 0x3C
		::System::Int32 m_FeatureReportSize; // 0x40

		::System::Void .ctor(UsagePage* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(UsagePage*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(GenericDesktop* arg)
		{
			((::System::Void(*)(GenericDesktop*, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		HIDDeviceDescriptorBuilder* StartReport(HIDReportType* arg, ::System::Int32 arg)
		{
			return (return (HIDDeviceDescriptorBuilder*(*)(HIDReportType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_STARTREPORT_OFFSET))(arg, arg, nullptr);
		}

		HIDDeviceDescriptorBuilder* AddElement(UsagePage* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (HIDDeviceDescriptorBuilder*(*)(UsagePage*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		HIDDeviceDescriptorBuilder* AddElement(GenericDesktop* arg, ::System::Int32 arg)
		{
			return (return (HIDDeviceDescriptorBuilder*(*)(GenericDesktop*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		HIDDeviceDescriptorBuilder* WithPhysicalMinMax(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (HIDDeviceDescriptorBuilder*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_WITHPHYSICALMINMAX_OFFSET))(arg, arg, nullptr);
		}

		HIDDeviceDescriptorBuilder* WithLogicalMinMax(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (HIDDeviceDescriptorBuilder*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_WITHLOGICALMINMAX_OFFSET))(arg, arg, nullptr);
		}

		HIDDeviceDescriptor* Finish()
		{
			return (return (HIDDeviceDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDEVICEDESCRIPTORBUILDER_FINISH_OFFSET))(nullptr);
		}

	};

