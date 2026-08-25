#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class GuidePopupType; }

namespace MX::Data
{
	inline static constexpr unsigned int GuidePopupType_TypeDefinitionIndex = 15864;

	class GuidePopupType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Data::GuidePopupType* SurveyGuidePopup; // 0x0
		::MX::Data::GuidePopupType* GuidePopup; // 0x0

	};
}

