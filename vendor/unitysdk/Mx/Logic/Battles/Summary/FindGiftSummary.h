#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A9680)
#define MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_GET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x13B32A0)
#define MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_SET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x13B32B0)
#define MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x13B32C0)
#define MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x13B32D0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int FindGiftSummary_TypeDefinitionIndex = 14491;

	class FindGiftSummary : public Il2CppObject
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x10
		::System::Int32 _ClearCount_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 get_ClearCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_GET_CLEARCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ClearCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_SET_CLEARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_GET_UNIQUENAME_OFFSET))(nullptr);
		}

		::System::Void set_UniqueName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_FINDGIFTSUMMARY_SET_UNIQUENAME_OFFSET))(str, nullptr);
		}

	};
}

