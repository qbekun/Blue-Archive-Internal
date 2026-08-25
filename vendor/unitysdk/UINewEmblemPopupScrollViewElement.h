#pragma once
#include "unitysdk.h"

class UILabel;
class UIEmblemParcel;

#define UINEWEMBLEMPOPUPSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x23EC120)
#define UINEWEMBLEMPOPUPSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EC2B0)

	inline static constexpr unsigned int UINewEmblemPopupScrollViewElement_TypeDefinitionIndex = 5403;

	class UINewEmblemPopupScrollViewElement : public ::System::Xml::XPath::XPathItem
	{
	public:
		UILabel* emblemNameLabel; // 0x28
		UIEmblemParcel* emblem; // 0x30

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINEWEMBLEMPOPUPSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINEWEMBLEMPOPUPSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

