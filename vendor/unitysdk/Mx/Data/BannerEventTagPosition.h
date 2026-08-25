#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class BannerEventTagPosition; }

namespace MX::Data
{
	inline static constexpr unsigned int BannerEventTagPosition_TypeDefinitionIndex = 15861;

	class BannerEventTagPosition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Data::BannerEventTagPosition* None; // 0x0
		::MX::Data::BannerEventTagPosition* TopLeft; // 0x0
		::MX::Data::BannerEventTagPosition* TopRight; // 0x0
		::MX::Data::BannerEventTagPosition* BottomRight; // 0x0
		::MX::Data::BannerEventTagPosition* BottomLeft; // 0x0

	};
}

