#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define <>C__DISPLAYCLASS86_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xF894B0)
#define <>C__DISPLAYCLASS86_0__GETCHAPTERSTARCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xF894C0)

	inline static constexpr unsigned int <>c__DisplayClass86_0_TypeDefinitionIndex = 12262;

	class <>c__DisplayClass86_0 : public Il2CppObject
	{
	public:
		::System::Int64 chapterId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS86_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetChapterStarCount_b__0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS86_0__GETCHAPTERSTARCOUNT_B__0_OFFSET))(arg, nullptr);
		}

	};

