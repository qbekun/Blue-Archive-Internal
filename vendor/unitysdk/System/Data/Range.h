#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_RANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x976BC80)
#define SYSTEM_DATA_RANGE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x97655B0)
#define SYSTEM_DATA_RANGE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9764EB0)
#define SYSTEM_DATA_RANGE_GET_MIN_OFFSET UNITYSDK_OFFSET(0x97655D0)
#define SYSTEM_DATA_RANGE_CHECKNULL_OFFSET UNITYSDK_OFFSET(0x976BCD0)

namespace System::Data
{
	inline static constexpr unsigned int Range_TypeDefinitionIndex = 32278;

	class Range : public Il2CppObject
	{
	public:
		::System::Int32 _min; // 0x10
		::System::Int32 _max; // 0x14
		::System::Boolean _isNotNull; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Int32 get_Min()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_GET_MIN_OFFSET))(nullptr);
		}

		::System::Void CheckNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_CHECKNULL_OFFSET))(nullptr);
		}

	};
}

