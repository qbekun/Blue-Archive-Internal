#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class ItemDB; }

#define MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFB14C0)
#define MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFB1510)
#define MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFB1C30)
#define MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_GENERATECONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xFB1D90)
#define MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_GENERATECONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xFB2500)
#define MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_SELLREWARD_OFFSET UNITYSDK_OFFSET(0xFB2AB0)
#define MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB2B20)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ItemDBService_TypeDefinitionIndex = 12362;

	class ItemDBService : public Il2CppObject
	{
	public:
		::System::Boolean CanAffordCost(Il2CppObject* arg, Il2CppObject* arg2, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanAffordCost(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanAffordCost(Il2CppObject* arg, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* GenerateConsumeResultDB(Il2CppObject* arg, Il2CppObject* arg2, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg3)
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(Il2CppObject*, Il2CppObject*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_GENERATECONSUMERESULTDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* GenerateConsumeResultDB(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_GENERATECONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* SellReward(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_SELLREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ITEMDBSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

