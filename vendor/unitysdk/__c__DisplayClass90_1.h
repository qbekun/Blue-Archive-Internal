#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class UISpecialOperationLobby;
class UIEventLobby;

#define <>C__DISPLAYCLASS90_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB7FF0)
#define <>C__DISPLAYCLASS90_1__CAMPAIGNTACTICRESULTCUSTOMACTION_B__4_OFFSET UNITYSDK_OFFSET(0xBB8000)
#define <>C__DISPLAYCLASS90_1__CAMPAIGNTACTICRESULTCUSTOMACTION_B__5_OFFSET UNITYSDK_OFFSET(0xBB80B0)

	inline static constexpr unsigned int <>c__DisplayClass90_1_TypeDefinitionIndex = 8581;

	class <>c__DisplayClass90_1 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS90_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CampaignTacticResultCustomAction_b__4(UISpecialOperationLobby* arg)
		{
			((::System::Void(*)(UISpecialOperationLobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS90_1__CAMPAIGNTACTICRESULTCUSTOMACTION_B__4_OFFSET))(arg, nullptr);
		}

		::System::Void _CampaignTacticResultCustomAction_b__5(UIEventLobby* arg)
		{
			((::System::Void(*)(UIEventLobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS90_1__CAMPAIGNTACTICRESULTCUSTOMACTION_B__5_OFFSET))(arg, nullptr);
		}

	};

