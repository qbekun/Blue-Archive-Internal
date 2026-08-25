#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FriendSearchLevelOption; }

#define MX_GAMELOGIC_SERVICE_FRIENDSEARCHSERVICE_CONVERTSEARCHLEVELOPTION_OFFSET UNITYSDK_OFFSET(0xFAAB50)
#define MX_GAMELOGIC_SERVICE_FRIENDSEARCHSERVICE_LEVELTOSEARCHLEVELOPTION_OFFSET UNITYSDK_OFFSET(0xFAAC50)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int FriendSearchService_TypeDefinitionIndex = 12342;

	class FriendSearchService : public Il2CppObject
	{
	public:
		::System::Void ConvertSearchLevelOption(::FlatData::FriendSearchLevelOption* arg, ::System::Int32 arg2, int32_t&* arg3, int32_t&* arg4)
		{
			((::System::Void(*)(::FlatData::FriendSearchLevelOption*, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_FRIENDSEARCHSERVICE_CONVERTSEARCHLEVELOPTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::FlatData::FriendSearchLevelOption* LevelToSearchLevelOption(::System::Int32 arg)
		{
			return ((::FlatData::FriendSearchLevelOption*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_FRIENDSEARCHSERVICE_LEVELTOSEARCHLEVELOPTION_OFFSET))(arg, nullptr);
		}

	};
}

