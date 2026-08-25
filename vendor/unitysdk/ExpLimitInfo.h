#pragma once
#include "unitysdk.h"

#define EXPLIMITINFO_GET_EXPLIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x182FEF0)
#define EXPLIMITINFO_GET_LIMITSTARTTIME_OFFSET UNITYSDK_OFFSET(0x182FF00)
#define EXPLIMITINFO_SET_EXPLIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x182FF10)
#define EXPLIMITINFO_GET_LIMITENDTIME_OFFSET UNITYSDK_OFFSET(0x182FF20)
#define EXPLIMITINFO_SET_LIMITSTARTTIME_OFFSET UNITYSDK_OFFSET(0x182FF30)
#define EXPLIMITINFO_SET_LIMITENDTIME_OFFSET UNITYSDK_OFFSET(0x182FF40)

	inline static constexpr unsigned int ExpLimitInfo_TypeDefinitionIndex = 15718;

	class ExpLimitInfo : public Il2CppObject
	{
	public:
		::System::DateTime* _LimitStartTime_k__BackingField; // 0x10
		::System::DateTime* _LimitEndTime_k__BackingField; // 0x18
		::System::Int64 _ExpLimitAmount_k__BackingField; // 0x20

		::System::Int64 get_ExpLimitAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLIMITINFO_GET_EXPLIMITAMOUNT_OFFSET))(nullptr);
		}

		::System::DateTime* get_LimitStartTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLIMITINFO_GET_LIMITSTARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_ExpLimitAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EXPLIMITINFO_SET_EXPLIMITAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LimitEndTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPLIMITINFO_GET_LIMITENDTIME_OFFSET))(nullptr);
		}

		::System::Void set_LimitStartTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLIMITINFO_SET_LIMITSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_LimitEndTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + EXPLIMITINFO_SET_LIMITENDTIME_OFFSET))(arg, nullptr);
		}

	};

