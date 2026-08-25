#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIORESOURCEINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C663B0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFODBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C663C0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFODBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C663D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioResourceInfoDBSchema_TypeDefinitionIndex = 19312;

	class ScenarioResourceInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFODBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFODBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

