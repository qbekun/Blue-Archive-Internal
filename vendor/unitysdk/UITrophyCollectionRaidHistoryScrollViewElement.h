#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::GameLogic::DBModel { class RaidSeasonRankingHistoryDB; }

#define UITROPHYCOLLECTIONRAIDHISTORYSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7F1F0)
#define UITROPHYCOLLECTIONRAIDHISTORYSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB7F230)

	inline static constexpr unsigned int UITrophyCollectionRaidHistoryScrollViewElement_TypeDefinitionIndex = 8510;

	class UITrophyCollectionRaidHistoryScrollViewElement : public ::System::Xml::Serialization::IXmlSerializable
	{
	public:
		UILabel* DateLabel; // 0x28
		UILabel* SeasonLabel; // 0x30
		UILabel* PointLabel; // 0x38
		UILabel* RankLabel; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONRAIDHISTORYSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::RaidSeasonRankingHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidSeasonRankingHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONRAIDHISTORYSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

