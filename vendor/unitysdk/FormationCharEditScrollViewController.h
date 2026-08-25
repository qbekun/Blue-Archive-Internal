#pragma once
#include "unitysdk.h"

#define FORMATIONCHAREDITSCROLLVIEWCONTROLLER_REFRESHFAVORITEMARK_OFFSET UNITYSDK_OFFSET(0x24D7F80)
#define FORMATIONCHAREDITSCROLLVIEWCONTROLLER_GET_ISSMALLSCROLL_OFFSET UNITYSDK_OFFSET(0x24D81F0)
#define FORMATIONCHAREDITSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D8200)

	inline static constexpr unsigned int FormationCharEditScrollViewController_TypeDefinitionIndex = 5964;

	class FormationCharEditScrollViewController : public ::System::Xml::XmlAttributeCollection
	{
	public:
		::System::Boolean isSmallScroll; // 0x90

		::System::Void RefreshFavoriteMark(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHAREDITSCROLLVIEWCONTROLLER_REFRESHFAVORITEMARK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSmallScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHAREDITSCROLLVIEWCONTROLLER_GET_ISSMALLSCROLL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHAREDITSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

