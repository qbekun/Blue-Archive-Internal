#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOBGEFFECTDBSCHEMA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C55640)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTDBSCHEMA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C55650)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C55660)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGEffectDBSchema_TypeDefinitionIndex = 19235;

	class ScenarioBGEffectDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Name_k__BackingField; // 0x20

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTDBSCHEMA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTDBSCHEMA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

