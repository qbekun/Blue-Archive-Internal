#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class CampaignChapterClearRewardHistoryDB; }

#define <>C__DISPLAYCLASS87_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xF894E0)
#define <>C__DISPLAYCLASS87_0__ISCHAPTERREWARED_B__0_OFFSET UNITYSDK_OFFSET(0xF894F0)

	inline static constexpr unsigned int <>c__DisplayClass87_0_TypeDefinitionIndex = 12263;

	class <>c__DisplayClass87_0 : public Il2CppObject
	{
	public:
		::System::Int64 chapterId; // 0x10
		::FlatData::StageDifficulty* difficulty; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS87_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _IsChapterRewared_b__0(::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS87_0__ISCHAPTERREWARED_B__0_OFFSET))(arg, nullptr);
		}

	};

