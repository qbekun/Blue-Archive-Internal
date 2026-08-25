#pragma once
#include "../../unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace MXField::UI { class FieldMasteryLevelReward; }

#define MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA9BC0)
#define MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xEA9C00)
#define MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xEA9E10)
#define MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xEA9E50)
#define MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETDIMMED_OFFSET UNITYSDK_OFFSET(0xEA9FB0)

namespace MXField::UI
{
	inline static constexpr unsigned int MasteryRewardScrollViewElement_TypeDefinitionIndex = 10771;

	class MasteryRewardScrollViewElement : public ::System::Xml::XmlUrlResolver
	{
	public:
		UILabel* descriptionLabel; // 0x28
		::Il2CppArray<::System::Object*>* rewardParcelCards; // 0x30
		::UnityEngine::GameObject* dimmed; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRewardParcels(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MXField::UI::FieldMasteryLevelReward* arg)
		{
			((::System::Void(*)(::MXField::UI::FieldMasteryLevelReward*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetDescription(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetDimmed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_MASTERYREWARDSCROLLVIEWELEMENT_SETDIMMED_OFFSET))(arg, nullptr);
		}

	};
}

