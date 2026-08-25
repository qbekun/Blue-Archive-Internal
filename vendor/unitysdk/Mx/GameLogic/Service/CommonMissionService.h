#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class MissionInfo; }
namespace FlatData { class CurrencyTypes; }

#define MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_GETMISSIONINFO_OFFSET UNITYSDK_OFFSET(0xF8FF00)
#define MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_ISOUTOFDATE_OFFSET UNITYSDK_OFFSET(0xF900F0)
#define MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_GETMISSIONINFOUNRESOLVED_OFFSET UNITYSDK_OFFSET(0xF902E0)
#define MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_GETTICKETACHIEVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0xF904B0)
#define MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_CLEARPREMISSIONSINHISTORY_OFFSET UNITYSDK_OFFSET(0xF90530)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int CommonMissionService_TypeDefinitionIndex = 12277;

	class CommonMissionService : public Il2CppObject
	{
	public:
		::MX::Data::MissionInfo* GetMissionInfo(::System::DateTime* arg, ::System::Int64 arg2)
		{
			return ((::MX::Data::MissionInfo*(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_GETMISSIONINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsOutOfDate(::MX::Data::MissionInfo* arg, ::System::DateTime* arg2, ::System::DateTime* arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(::MX::Data::MissionInfo*, ::System::DateTime*, ::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_ISOUTOFDATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Data::MissionInfo* GetMissionInfoUnresolved(::System::Int64 arg)
		{
			return ((::MX::Data::MissionInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_GETMISSIONINFOUNRESOLVED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTicketAchievementType(::FlatData::CurrencyTypes* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_GETTICKETACHIEVEMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ClearPreMissionsInHistory(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_COMMONMISSIONSERVICE_CLEARPREMISSIONSINHISTORY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

