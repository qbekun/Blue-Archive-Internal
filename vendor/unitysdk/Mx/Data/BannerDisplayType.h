#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class BannerDisplayType; }

namespace MX::Data
{
	inline static constexpr unsigned int BannerDisplayType_TypeDefinitionIndex = 15860;

	class BannerDisplayType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Data::BannerDisplayType* Lobby; // 0x0
		::MX::Data::BannerDisplayType* Gacha; // 0x0

	};
}

