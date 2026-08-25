#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Transform; }

#define UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A52F0)
#define UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26A5330)
#define UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26A5470)
#define UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_ONCLICKSHOWALL_OFFSET UNITYSDK_OFFSET(0x26A59E0)

	inline static constexpr unsigned int UIMultiFloorRaidRewardFloorListScrollViewElement_TypeDefinitionIndex = 6855;

	class UIMultiFloorRaidRewardFloorListScrollViewElement : public ::System::Xml::XPath::XPathExpression
	{
	public:
		UILabel* TitleLabel; // 0x28
		::Il2CppArray<::System::Object*>* UISmallParcel; // 0x30
		::UnityEngine::GameObject* Dim; // 0x38
		MXButton* ShowAllButton; // 0x40
		::UnityEngine::Transform* ShowAllButtonRoot; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickShowAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWELEMENT_ONCLICKSHOWALL_OFFSET))(nullptr);
		}

	};

