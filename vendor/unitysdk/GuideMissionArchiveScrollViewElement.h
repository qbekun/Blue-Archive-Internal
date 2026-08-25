#pragma once
#include "unitysdk.h"

class GuideMissionArchiveItemGroup;

#define GUIDEMISSIONARCHIVESCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x246CCC0)
#define GUIDEMISSIONARCHIVESCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x246CE40)

	inline static constexpr unsigned int GuideMissionArchiveScrollViewElement_TypeDefinitionIndex = 5635;

	class GuideMissionArchiveScrollViewElement : public ::System::Xml::XPath::XPathException
	{
	public:
		::Il2CppArray<::System::Object*>* widgets; // 0x28

		::System::Void SetData(GuideMissionArchiveItemGroup* arg)
		{
			((::System::Void(*)(GuideMissionArchiveItemGroup*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVESCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVESCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

