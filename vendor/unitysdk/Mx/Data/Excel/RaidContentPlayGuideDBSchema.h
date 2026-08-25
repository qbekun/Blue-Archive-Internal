#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C41DB0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C41DC0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C41DD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidContentPlayGuideDBSchema_TypeDefinitionIndex = 19152;

	class RaidContentPlayGuideDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

