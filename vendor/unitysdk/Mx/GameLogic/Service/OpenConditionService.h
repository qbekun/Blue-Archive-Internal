#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class OpenCondition; }
namespace MX::GameLogic::DBModel { class OpenConditionDB; }
namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class ScenarioHistoryDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace FlatData { class WeekDungeonType; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECK_OFFSET UNITYSDK_OFFSET(0xFB7950)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECK_OFFSET UNITYSDK_OFFSET(0xFB7C20)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTATICCONDITIONS_OFFSET UNITYSDK_OFFSET(0xFB79A0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTATICCONDITIONS_OFFSET UNITYSDK_OFFSET(0xFB8080)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTATICCONDITIONS_OFFSET UNITYSDK_OFFSET(0xFB7DD0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKACCOUNTLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0xFB83A0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSCENARIOMODECLEARCONDITION_OFFSET UNITYSDK_OFFSET(0xFB83D0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSCENARIOMODECLEARCONDITION_OFFSET UNITYSDK_OFFSET(0xFB8A40)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTAGECLEARCONDITION_OFFSET UNITYSDK_OFFSET(0xFB84E0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTAGECLEARCONDITION_OFFSET UNITYSDK_OFFSET(0xFB8A80)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFERANKCONDITION_OFFSET UNITYSDK_OFFSET(0xFB8600)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFERANKCONDITION_OFFSET UNITYSDK_OFFSET(0xFB8750)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFEOPEN_OFFSET UNITYSDK_OFFSET(0xFB86D0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFEOPEN_OFFSET UNITYSDK_OFFSET(0xFB8920)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKTIMECONDITIONS_OFFSET UNITYSDK_OFFSET(0xFB7AD0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKDAYOFWEEKCONTENT_OFFSET UNITYSDK_OFFSET(0xFB8AE0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_FROMWEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0xFB8EA0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_FROMCONTENTTYPEANDSTAGEID_OFFSET UNITYSDK_OFFSET(0xFB8EB0)
#define MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB8ED0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int OpenConditionService_TypeDefinitionIndex = 12386;

	class OpenConditionService : public Il2CppObject
	{
	public:
		::FlatData::OpenCondition* Check(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2, ::System::DateTime* arg3, ::MX::GameLogic::Service::OpenConditionLockReason&* arg4)
		{
			return ((::FlatData::OpenCondition*(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::System::DateTime*, ::MX::GameLogic::Service::OpenConditionLockReason&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::FlatData::OpenCondition* Check(::MX::GameLogic::DBModel::OpenConditionDB* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::DateTime* arg6, ::MX::GameLogic::Service::OpenConditionLockReason&* arg7)
		{
			return ((::FlatData::OpenCondition*(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::DateTime*, ::MX::GameLogic::Service::OpenConditionLockReason&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::FlatData::OpenCondition* CheckStaticConditions(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2, ::MX::GameLogic::Service::OpenConditionLockReason&* arg3)
		{
			return ((::FlatData::OpenCondition*(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::MX::GameLogic::Service::OpenConditionLockReason&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTATICCONDITIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::OpenCondition* CheckStaticConditions(::MX::GameLogic::DBModel::OpenConditionDB* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::MX::GameLogic::Service::OpenConditionLockReason&* arg7)
		{
			return ((::FlatData::OpenCondition*(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::Service::OpenConditionLockReason&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTATICCONDITIONS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::FlatData::OpenCondition* CheckStaticConditions(::MX::GameLogic::DBModel::OpenConditionDB* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::MX::GameLogic::Service::OpenConditionLockReason&* arg6)
		{
			return ((::FlatData::OpenCondition*(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::Service::OpenConditionLockReason&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTATICCONDITIONS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckAccountLevelCondition(::MX::GameLogic::DBModel::OpenConditionDB* arg, ::MX::GameLogic::DBModel::AccountDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKACCOUNTLEVELCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckScenarioModeClearCondition(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSCENARIOMODECLEARCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckScenarioModeClearCondition(::MX::GameLogic::DBModel::OpenConditionDB* arg, ::MX::GameLogic::DBModel::ScenarioHistoryDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::MX::GameLogic::DBModel::ScenarioHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSCENARIOMODECLEARCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckStageClearCondition(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTAGECLEARCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckStageClearCondition(::MX::GameLogic::DBModel::OpenConditionDB* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKSTAGECLEARCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckCafeRankCondition(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFERANKCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckCafeRankCondition(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFERANKCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckCafeOpen(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFEOPEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckCafeOpen(::MX::GameLogic::DBModel::OpenConditionDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OpenConditionDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKCAFEOPEN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::OpenCondition* CheckTimeConditions(::MX::GameLogic::DBModel::OpenConditionDB* arg, ::System::DateTime* arg2, ::MX::GameLogic::Service::OpenConditionLockReason&* arg3)
		{
			return ((::FlatData::OpenCondition*(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::System::DateTime*, ::MX::GameLogic::Service::OpenConditionLockReason&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKTIMECONDITIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::OpenCondition* CheckDayOfWeekContent(::System::DateTime* arg, ::FlatData::WeekDungeonType* arg2)
		{
			return ((::FlatData::OpenCondition*(*)(::System::DateTime*, ::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_CHECKDAYOFWEEKCONTENT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::OpenConditionContent* FromWeekDungeonType(::FlatData::WeekDungeonType* arg)
		{
			return ((::FlatData::OpenConditionContent*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_FROMWEEKDUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* FromContentTypeAndStageId(::FlatData::ContentType* arg, ::System::Int64 arg2)
		{
			return ((::FlatData::OpenConditionContent*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_FROMCONTENTTYPEANDSTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPENCONDITIONSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

