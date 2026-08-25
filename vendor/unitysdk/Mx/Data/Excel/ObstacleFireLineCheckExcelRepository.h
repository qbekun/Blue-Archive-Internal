#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_SELECT_MYOBSTACLEFIRELINECHECKS_OFFSET UNITYSDK_OFFSET(0x1C1CF50)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_SELECTFIRST_MYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1D350)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D670)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C1D6B0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_SELECT_MYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1D820)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ObstacleFireLineCheckExcelRepository_TypeDefinitionIndex = 18987;

	class ObstacleFireLineCheckExcelRepository : public <co_InternalInvoke>d__5
	{
	public:
		Il2CppObject* Select_MyObstacleFireLineChecks(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_SELECT_MYOBSTACLEFIRELINECHECKS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_MyObstacleFireLineCheck(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_SELECTFIRST_MYOBSTACLEFIRELINECHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_MyObstacleFireLineCheck(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCELREPOSITORY_SELECT_MYOBSTACLEFIRELINECHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

