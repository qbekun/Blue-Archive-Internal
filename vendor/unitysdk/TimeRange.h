#pragma once
#include "unitysdk.h"

#define TIMERANGE_INCLUDE_OFFSET UNITYSDK_OFFSET(0x28645A0)
#define TIMERANGE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x28640A0)
#define TIMERANGE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x28648A0)
#define TIMERANGE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x2864A80)

	inline static constexpr unsigned int TimeRange_TypeDefinitionIndex = 34339;

	class TimeRange : public Il2CppObject
	{
	public:
		::System::Single Start; // 0x10
		::System::Single End; // 0x14

		::System::Void Include(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMERANGE_INCLUDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERANGE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMERANGE_CONTAINS_OFFSET))(arg, nullptr);
		}

		TimeRange* get_Empty()
		{
			return (return (TimeRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERANGE_GET_EMPTY_OFFSET))(nullptr);
		}

	};

