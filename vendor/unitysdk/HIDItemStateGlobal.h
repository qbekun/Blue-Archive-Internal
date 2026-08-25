#pragma once
#include "unitysdk.h"

#define HIDITEMSTATEGLOBAL_GETPHYSICALMAX_OFFSET UNITYSDK_OFFSET(0x9F49420)
#define HIDITEMSTATEGLOBAL_GETUSAGEPAGE_OFFSET UNITYSDK_OFFSET(0x9F49020)
#define HIDITEMSTATEGLOBAL_GETPHYSICALMIN_OFFSET UNITYSDK_OFFSET(0x9F49370)

	inline static constexpr unsigned int HIDItemStateGlobal_TypeDefinitionIndex = 28674;

	class HIDItemStateGlobal : public Il2CppObject
	{
	public:
		Il2CppObject* usagePage; // 0x10
		Il2CppObject* logicalMinimum; // 0x18
		Il2CppObject* logicalMaximum; // 0x20
		Il2CppObject* physicalMinimum; // 0x28
		Il2CppObject* physicalMaximum; // 0x30
		Il2CppObject* unitExponent; // 0x38
		Il2CppObject* unit; // 0x40
		Il2CppObject* reportSize; // 0x48
		Il2CppObject* reportCount; // 0x50
		Il2CppObject* reportId; // 0x58

		::System::Int32 GetPhysicalMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDITEMSTATEGLOBAL_GETPHYSICALMAX_OFFSET))(nullptr);
		}

		UsagePage* GetUsagePage(::System::Int32 arg, HIDItemStateLocal&* arg)
		{
			return (return (UsagePage*(*)(::System::Int32, HIDItemStateLocal&*, ::PVOID))((::PBYTE)hIl2Cpp + HIDITEMSTATEGLOBAL_GETUSAGEPAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPhysicalMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDITEMSTATEGLOBAL_GETPHYSICALMIN_OFFSET))(nullptr);
		}

	};

