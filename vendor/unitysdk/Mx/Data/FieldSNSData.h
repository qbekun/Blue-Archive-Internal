#pragma once
#include "../../unitysdk.h"

#define MX_DATA_FIELDSNSDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DB6E0)
#define MX_DATA_FIELDSNSDATA_TRYGETPOSTEXCELS_OFFSET UNITYSDK_OFFSET(0x18DB740)
#define MX_DATA_FIELDSNSDATA_TRYGETINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x18DB8A0)
#define MX_DATA_FIELDSNSDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DBA90)

namespace MX::Data
{
	inline static constexpr unsigned int FieldSNSData_TypeDefinitionIndex = 16128;

	class FieldSNSData : public Il2CppObject
	{
	public:
		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDSNSDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPostExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDSNSDATA_TRYGETPOSTEXCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInfoExcel(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDSNSDATA_TRYGETINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDSNSDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

