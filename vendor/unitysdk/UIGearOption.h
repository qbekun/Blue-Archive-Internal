#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UISkillInfo;
class UISprite;
class UIScrollView;
class GearInfoPopupScrollItem;
namespace MX::Data { class GearOptionDataInfo; }
namespace FlatData { class EquipmentOptionType; }

#define UIGEAROPTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x2415FA0)
#define UIGEAROPTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x2415020)
#define UIGEAROPTION_ISRATESTATTYPE_OFFSET UNITYSDK_OFFSET(0x2416340)
#define UIGEAROPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x24163C0)

	inline static constexpr unsigned int UIGearOption_TypeDefinitionIndex = 5472;

	class UIGearOption : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* status; // 0x18
		UILabel* statNameLabel; // 0x20
		UILabel* statValueLabel; // 0x28
		UISkillInfo* skillInfo; // 0x30
		UILabel* skillName; // 0x38
		UISprite* reinforcedIconBG; // 0x40
		UIScrollView* scrollView; // 0x48

		::System::Void SetData(GearInfoPopupScrollItem* arg)
		{
			((::System::Void(*)(GearInfoPopupScrollItem*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEAROPTION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::GearOptionDataInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GearOptionDataInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEAROPTION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRateStatType(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEAROPTION_ISRATESTATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEAROPTION_.CTOR_OFFSET))(nullptr);
		}

	};

