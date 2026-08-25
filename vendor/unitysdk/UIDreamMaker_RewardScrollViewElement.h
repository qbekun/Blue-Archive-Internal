#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class MiniGameDreamEndingRewardExcelInfo; }

#define UIDREAMMAKER_REWARDSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA1D50)
#define UIDREAMMAKER_REWARDSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBA1D90)

	inline static constexpr unsigned int UIDreamMaker_RewardScrollViewElement_TypeDefinitionIndex = 607;

	class UIDreamMaker_RewardScrollViewElement : public ::System::Xml::Serialization::XmlSerializerNamespaces
	{
	public:
		UILabel* titleLabel; // 0x28
		::Il2CppArray<::System::Object*>* rewardParcelCards; // 0x30
		::UnityEngine::GameObject* disableRoot; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_REWARDSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::MiniGameDreamEndingRewardExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDreamEndingRewardExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_REWARDSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

