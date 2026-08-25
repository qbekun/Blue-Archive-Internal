#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class AcademyLocationData; }
namespace MX::Data { class CharacterData; }
namespace MX::Data { class AcademyFavorScheduleData; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Data { class AcademyData; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::Data { class AcademyScheduleData; }
namespace MX::GameLogic::DBModel { class AcademyLocationDB; }

#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_ISLOCATIONOPENED_OFFSET UNITYSDK_OFFSET(0xF51740)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_ISALREADYATTENDEDFAVORSCHEDULE_OFFSET UNITYSDK_OFFSET(0xF51CD0)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_GETREADMESSAGEREWARD_OFFSET UNITYSDK_OFFSET(0xF51DE0)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_ACADEMYTICKETCOST_OFFSET UNITYSDK_OFFSET(0xF522B0)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_TRYGETVISITCHARACTERFAVORANDSECRETSTONEPARCEL_OFFSET UNITYSDK_OFFSET(0xF52350)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_APPLYLOCATIONEXPFEED_OFFSET UNITYSDK_OFFSET(0xF52AC0)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_CREATEACADEMYLOCATIONDB_OFFSET UNITYSDK_OFFSET(0xF52D60)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_EXISTINGZONES_OFFSET UNITYSDK_OFFSET(0xF53350)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_GETZONESCHEDULEGROUPRECORDS_OFFSET UNITYSDK_OFFSET(0xF53710)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xF53C60)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_TRYGETLOCATIONRANKANDEXPAFTERFEED_OFFSET UNITYSDK_OFFSET(0xF52B70)
#define MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_FAVORSCHEDULERECORDSBYGROUP_OFFSET UNITYSDK_OFFSET(0xF53D10)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int AcademyService_TypeDefinitionIndex = 12218;

	class AcademyService : public Il2CppObject
	{
	public:
		::System::Boolean IsLocationOpened(::MX::Data::AcademyLocationData* arg, ::MX::Data::CharacterData* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::AcademyLocationData*, ::MX::Data::CharacterData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_ISLOCATIONOPENED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsAlreadyAttendedFavorSchedule(Il2CppObject* arg, ::MX::Data::AcademyFavorScheduleData* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::MX::Data::AcademyFavorScheduleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_ISALREADYATTENDEDFAVORSCHEDULE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetReadMessageReward(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_GETREADMESSAGEREWARD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* AcademyTicketCost(::MX::Data::AcademyData* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::MX::Data::AcademyData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_ACADEMYTICKETCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetVisitCharacterFavorAndSecretStoneParcel(::MX::Core::Math::IRandomService* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::MX::Data::AcademyScheduleData* arg4, Il2CppObject&* arg5, Il2CppObject&* arg6, Il2CppObject&* arg7)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, Il2CppObject*, Il2CppObject*, ::MX::Data::AcademyScheduleData*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_TRYGETVISITCHARACTERFAVORANDSECRETSTONEPARCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void ApplyLocationExpFeed(::MX::GameLogic::DBModel::AcademyLocationDB* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AcademyLocationDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_APPLYLOCATIONEXPFEED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CreateAcademyLocationDB(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_CREATEACADEMYLOCATIONDB_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ExistingZones()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_EXISTINGZONES_OFFSET))(nullptr);
		}

		Il2CppObject* GetZoneScheduleGroupRecords(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_GETZONESCHEDULEGROUPRECORDS_OFFSET))(arg, nullptr);
		}

		::MX::Data::AcademyScheduleData* GetScheduleData(::System::Boolean arg, ::System::Int64 arg2)
		{
			return ((::MX::Data::AcademyScheduleData*(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_GETSCHEDULEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetLocationRankAndExpAfterFeed(::MX::GameLogic::DBModel::AcademyLocationDB* arg, ::System::Int64 arg2, int32_t&* arg3, int64_t&* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AcademyLocationDB*, ::System::Int64, int32_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_TRYGETLOCATIONRANKANDEXPAFTERFEED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* FavorScheduleRecordsByGroup(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ACADEMYSERVICE_FAVORSCHEDULERECORDSBYGROUP_OFFSET))(arg, nullptr);
		}

	};
}

