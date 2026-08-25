#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FieldQuestGroupExcel&; }

#define MX_DATA_FIELDQUESTGROUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DB5B0)
#define MX_DATA_FIELDQUESTGROUPDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DB5C0)
#define MX_DATA_FIELDQUESTGROUPDATA_TRYGETEXCEL_OFFSET UNITYSDK_OFFSET(0x18DB600)

namespace MX::Data
{
	inline static constexpr unsigned int FieldQuestGroupData_TypeDefinitionIndex = 16125;

	class FieldQuestGroupData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDQUESTGROUPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDQUESTGROUPDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetExcel(::System::Int64 arg, ::MX::Data::Excel::FieldQuestGroupExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::FieldQuestGroupExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDQUESTGROUPDATA_TRYGETEXCEL_OFFSET))(arg, arg, nullptr);
		}

	};
}

