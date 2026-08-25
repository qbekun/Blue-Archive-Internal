#pragma once
#include "unitysdk.h"

#define HIDITEMSTATELOCAL_GETUSAGE_OFFSET UNITYSDK_OFFSET(0x9F49090)
#define HIDITEMSTATELOCAL_RESET_OFFSET UNITYSDK_OFFSET(0x9F49170)
#define HIDITEMSTATELOCAL_SETUSAGE_OFFSET UNITYSDK_OFFSET(0x9F48EC0)

	inline static constexpr unsigned int HIDItemStateLocal_TypeDefinitionIndex = 28673;

	class HIDItemStateLocal : public Il2CppObject
	{
	public:
		Il2CppObject* usage; // 0x10
		Il2CppObject* usageMinimum; // 0x18
		Il2CppObject* usageMaximum; // 0x20
		Il2CppObject* designatorIndex; // 0x28
		Il2CppObject* designatorMinimum; // 0x30
		Il2CppObject* designatorMaximum; // 0x38
		Il2CppObject* stringIndex; // 0x40
		Il2CppObject* stringMinimum; // 0x48
		Il2CppObject* stringMaximum; // 0x50
		Il2CppObject* usageList; // 0x58

		::System::Int32 GetUsage(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDITEMSTATELOCAL_GETUSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(HIDItemStateLocal&* arg)
		{
			((::System::Void(*)(HIDItemStateLocal&*, ::PVOID))((::PBYTE)hIl2Cpp + HIDITEMSTATELOCAL_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void SetUsage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDITEMSTATELOCAL_SETUSAGE_OFFSET))(arg, nullptr);
		}

	};

