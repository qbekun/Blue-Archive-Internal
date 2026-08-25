#pragma once
#include "unitysdk.h"

class UIParcelCard;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2241190)
#define UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22411C0)

	inline static constexpr unsigned int UIBattlePassBuyLevelRewardScrollViewElement_TypeDefinitionIndex = 4485;

	class UIBattlePassBuyLevelRewardScrollViewElement : public ::System::Xml::Serialization::XmlNodeEventArgs
	{
	public:
		UIParcelCard* ParcelCard; // 0x28

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

