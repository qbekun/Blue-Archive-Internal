#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_SERVICE_FURNITUREDBSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFAAE60)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int FurnitureDBService_TypeDefinitionIndex = 12344;

	class FurnitureDBService : public Il2CppObject
	{
	public:
		::System::Boolean CanAffordCost(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_FURNITUREDBSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, nullptr);
		}

	};
}

