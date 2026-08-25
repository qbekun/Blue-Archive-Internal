#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_OBSTACLESTATDBSCHEMA_SET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1C1ED00)
#define MX_DATA_EXCEL_OBSTACLESTATDBSCHEMA_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1C1ED10)
#define MX_DATA_EXCEL_OBSTACLESTATDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C1ED20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ObstacleStatDBSchema_TypeDefinitionIndex = 18989;

	class ObstacleStatDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _StringID_k__BackingField; // 0x20

		::System::Void set_StringID(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATDBSCHEMA_SET_STRINGID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_StringID()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATDBSCHEMA_GET_STRINGID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

