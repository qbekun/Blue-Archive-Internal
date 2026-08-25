#pragma once
#include "../../unitysdk.h"

namespace FlatData { class GetStickerConditionType; }

#define MX_DATA_STICKEREXTENSION_ISACHIEVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x197E870)

namespace MX::Data
{
	inline static constexpr unsigned int StickerExtension_TypeDefinitionIndex = 16512;

	class StickerExtension : public Il2CppObject
	{
	public:
		::System::Boolean IsAchievementType(::FlatData::GetStickerConditionType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::GetStickerConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKEREXTENSION_ISACHIEVEMENTTYPE_OFFSET))(arg, nullptr);
		}

	};
}

