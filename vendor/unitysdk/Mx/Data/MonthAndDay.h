#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class MonthAndDay; }

#define MX_DATA_MONTHANDDAY_GET_DAY_OFFSET UNITYSDK_OFFSET(0x197AC20)
#define MX_DATA_MONTHANDDAY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x197AC30)
#define MX_DATA_MONTHANDDAY_SET_MONTH_OFFSET UNITYSDK_OFFSET(0x197AC90)
#define MX_DATA_MONTHANDDAY_SET_DAY_OFFSET UNITYSDK_OFFSET(0x197ACA0)
#define MX_DATA_MONTHANDDAY_ISTODAY_OFFSET UNITYSDK_OFFSET(0x197ACB0)
#define MX_DATA_MONTHANDDAY_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x197ACC0)
#define MX_DATA_MONTHANDDAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x197ACD0)

namespace MX::Data
{
	inline static constexpr unsigned int MonthAndDay_TypeDefinitionIndex = 16495;

	class MonthAndDay : public Il2CppObject
	{
	public:
		::System::Int32 _Month_k__BackingField; // 0x10
		::System::Int32 _Day_k__BackingField; // 0x14

		::System::Int32 get_Day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MONTHANDDAY_GET_DAY_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::MX::Data::MonthAndDay* arg)
		{
			return (return (::System::Int32(*)(::MX::Data::MonthAndDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MONTHANDDAY_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void set_Month(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MONTHANDDAY_SET_MONTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_Day(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MONTHANDDAY_SET_DAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsToday(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MONTHANDDAY_ISTODAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Month()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MONTHANDDAY_GET_MONTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MONTHANDDAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

