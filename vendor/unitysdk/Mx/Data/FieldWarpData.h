#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FieldWarpExcel&; }

#define MX_DATA_FIELDWARPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DBB00)
#define MX_DATA_FIELDWARPDATA_TRYGETEXCELBYSCENEID_OFFSET UNITYSDK_OFFSET(0x18DBB10)
#define MX_DATA_FIELDWARPDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DBC90)
#define MX_DATA_FIELDWARPDATA_TRYGETEXCEL_OFFSET UNITYSDK_OFFSET(0x18DBCD0)

namespace MX::Data
{
	inline static constexpr unsigned int FieldWarpData_TypeDefinitionIndex = 16130;

	class FieldWarpData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDWARPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetExcelBySceneId(::System::Int64 arg, ::MX::Data::Excel::FieldWarpExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::FieldWarpExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDWARPDATA_TRYGETEXCELBYSCENEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDWARPDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetExcel(::System::Int64 arg, ::MX::Data::Excel::FieldWarpExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::FieldWarpExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDWARPDATA_TRYGETEXCEL_OFFSET))(arg, arg, nullptr);
		}

	};
}

