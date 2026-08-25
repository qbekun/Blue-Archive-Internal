#pragma once
#include "unitysdk.h"

#define UIPERMANENTRAIDRANKLISTSCROLLVIEWCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x26F8E60)
#define UIPERMANENTRAIDRANKLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26F9260)

	inline static constexpr unsigned int UIPermanentRaidRankListScrollViewController_TypeDefinitionIndex = 7040;

	class UIPermanentRaidRankListScrollViewController : public ::System::Xml::XmlNode
	{
	public:
		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDRANKLISTSCROLLVIEWCONTROLLER_SETDATA_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDRANKLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

