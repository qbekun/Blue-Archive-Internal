#pragma once
#include "unitysdk.h"

class ButtonActivator;

#define UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26A5F70)
#define UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_ONCLICKELEMENT_OFFSET UNITYSDK_OFFSET(0x26A61D0)
#define UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26A62F0)
#define UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A6440)

	inline static constexpr unsigned int UIMultiFloorRaidRewardSectionListScrollViewElement_TypeDefinitionIndex = 6857;

	class UIMultiFloorRaidRewardSectionListScrollViewElement : public ::System::Xml::XPath::XPathExpression
	{
	public:
		::Il2CppArray<::System::Object*>* FloorRangeLabels; // 0x28
		ButtonActivator* ElementButton; // 0x30

		::System::Void SetData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_ONCLICKELEMENT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDSECTIONLISTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

