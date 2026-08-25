#pragma once
#include "../../unitysdk.h"

#define MXFIELD_UI_MASTERYREWARDSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA9B80)

namespace MXField::UI
{
	inline static constexpr unsigned int MasteryRewardScrollViewController_TypeDefinitionIndex = 10770;

	class MasteryRewardScrollViewController : public ::System::Xml::XmlAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_MASTERYREWARDSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

