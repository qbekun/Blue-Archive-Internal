#pragma once
#include "../../unitysdk.h"

#define MX_DATA_FLATDATASERVICE_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x197AD00)
#define MX_DATA_FLATDATASERVICE_CONVERTDATE_OFFSET UNITYSDK_OFFSET(0x197AD90)
#define MX_DATA_FLATDATASERVICE_CONVERTTOMONTHANDDAY_OFFSET UNITYSDK_OFFSET(0x197ADD0)
#define MX_DATA_FLATDATASERVICE_ISTODAY_OFFSET UNITYSDK_OFFSET(0x197AE70)

namespace MX::Data
{
	inline static constexpr unsigned int FlatDataService_TypeDefinitionIndex = 16499;

	class FlatDataService : public Il2CppObject
	{
	public:
		::System::Boolean InProgress(::System::DateTime* arg, ::System::DateTime* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATDATASERVICE_INPROGRESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertDate(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATDATASERVICE_CONVERTDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ConvertToMonthAndDay(::System::String* str, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATDATASERVICE_CONVERTTOMONTHANDDAY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsToday(::System::DateTime* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATDATASERVICE_ISTODAY_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

