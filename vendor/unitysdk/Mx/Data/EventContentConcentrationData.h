#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ConcentrationRewardType; }
namespace MX::Data::Excel { class EventContentConcentrationExcel&; }

#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONREWARDEXCELS_OFFSET UNITYSDK_OFFSET(0x18C27F0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONCARDMATCHREWARDEXCELS_OFFSET UNITYSDK_OFFSET(0x18C29C0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONVOICEEXCELS_OFFSET UNITYSDK_OFFSET(0x18C2C10)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x18C2CE0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18C2DC0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_GETCONCENTRATIONEXCELSALL_OFFSET UNITYSDK_OFFSET(0x18C2DD0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18C2E40)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18C2E50)
#define MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONCARDEXCELS_OFFSET UNITYSDK_OFFSET(0x18C2EF0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentConcentrationData_TypeDefinitionIndex = 16072;

	class EventContentConcentrationData : public Il2CppObject
	{
	public:
		::System::Boolean TryGetConcentrationRewardExcels(::System::Int64 arg, ::FlatData::ConcentrationRewardType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ConcentrationRewardType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONREWARDEXCELS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetConcentrationCardMatchRewardExcels(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONCARDMATCHREWARDEXCELS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetConcentrationVoiceExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONVOICEEXCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetConcentrationExcel(::System::Int64 arg, ::MX::Data::Excel::EventContentConcentrationExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EventContentConcentrationExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetConcentrationExcelsAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_GETCONCENTRATIONEXCELSALL_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetConcentrationCardExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONDATA_TRYGETCONCENTRATIONCARDEXCELS_OFFSET))(arg, arg, nullptr);
		}

	};
}

