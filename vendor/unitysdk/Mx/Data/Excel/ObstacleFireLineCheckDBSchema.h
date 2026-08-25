#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKDBSCHEMA_SET_MYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CF20)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CF30)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKDBSCHEMA_GET_MYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CF40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ObstacleFireLineCheckDBSchema_TypeDefinitionIndex = 18982;

	class ObstacleFireLineCheckDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Boolean _MyObstacleFireLineCheck_k__BackingField; // 0x20

		::System::Void set_MyObstacleFireLineCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKDBSCHEMA_SET_MYOBSTACLEFIRELINECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_MyObstacleFireLineCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKDBSCHEMA_GET_MYOBSTACLEFIRELINECHECK_OFFSET))(nullptr);
		}

	};
}

