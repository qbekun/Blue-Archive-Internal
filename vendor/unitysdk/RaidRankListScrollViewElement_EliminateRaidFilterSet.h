#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UIEmblemParcel;
class MXButton;
namespace MX::GameLogic::DBModel { class EliminateRaidUserDB; }

#define RAIDRANKLISTSCROLLVIEWELEMENT_ELIMINATERAIDFILTERSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2788080)
#define RAIDRANKLISTSCROLLVIEWELEMENT_ELIMINATERAIDFILTERSET_SETDATA_OFFSET UNITYSDK_OFFSET(0x2788090)

	inline static constexpr unsigned int RaidRankListScrollViewElement_EliminateRaidFilterSet_TypeDefinitionIndex = 7409;

	class RaidRankListScrollViewElement_EliminateRaidFilterSet : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x10
		UILabel* levelLabel; // 0x18
		UILabel* nameLabel; // 0x20
		UIEmblemParcel* emblemParcel; // 0x28
		::Il2CppArray<::System::Object*>* TypeRecordInfos; // 0x30
		::Il2CppArray<::System::Object*>* TypeRecordInfoEffects; // 0x38
		MXButton* DetailButton; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_ELIMINATERAIDFILTERSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::EliminateRaidUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EliminateRaidUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_ELIMINATERAIDFILTERSET_SETDATA_OFFSET))(arg, nullptr);
		}

	};

