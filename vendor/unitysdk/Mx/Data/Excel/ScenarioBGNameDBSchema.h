#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOBGNAMEDBSCHEMA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C56B80)
#define MX_DATA_EXCEL_SCENARIOBGNAMEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B90)
#define MX_DATA_EXCEL_SCENARIOBGNAMEDBSCHEMA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C56BA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGNameDBSchema_TypeDefinitionIndex = 19242;

	class ScenarioBGNameDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Name_k__BackingField; // 0x20

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEDBSCHEMA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEDBSCHEMA_GET_NAME_OFFSET))(nullptr);
		}

	};
}

