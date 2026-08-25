#pragma once
#include "unitysdk.h"

class UILabel;

#define UIACADEMYLOCATIONRANKINFOUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B88F0)
#define UIACADEMYLOCATIONRANKINFOUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B8D50)

	inline static constexpr unsigned int UIAcademyLocationRankInfoUnit_TypeDefinitionIndex = 4207;

	class UIAcademyLocationRankInfoUnit : public ::System::Xml::XPath::XPathItem
	{
	public:
		UILabel* rankSum; // 0x28
		UILabel* info; // 0x30

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKINFOUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKINFOUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

