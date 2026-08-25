#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B500D0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTDBSCHEMA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1B500E0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTDBSCHEMA_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1B500F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InformationStrategyObjectDBSchema_TypeDefinitionIndex = 18192;

	class InformationStrategyObjectDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTDBSCHEMA_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTDBSCHEMA_SET_STAGEID_OFFSET))(arg, nullptr);
		}

	};
}

