#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB0C90)
#define MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_GETTOTALFINDGIFTENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0xFB0CA0)
#define MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_FINDGROUNDMODULEREWARDS_OFFSET UNITYSDK_OFFSET(0xFB0E50)
#define MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_GETTOTALCLEAREDENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0xFB12A0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int GroundModuleService_TypeDefinitionIndex = 12357;

	class GroundModuleService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalFindGiftEnemyCount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_GETTOTALFINDGIFTENEMYCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindGroundModuleRewards(::System::Int64 arg, ::FlatData::ContentType* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_FINDGROUNDMODULEREWARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetTotalClearedEnemyCount(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GROUNDMODULESERVICE_GETTOTALCLEAREDENEMYCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

