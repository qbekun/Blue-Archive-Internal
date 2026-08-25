#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class CafeAllowCopyPresetSubCategory; }

namespace MX::SaveData
{
	inline static constexpr unsigned int CafeAllowCopyPresetSubCategory_TypeDefinitionIndex = 20035;

	class CafeAllowCopyPresetSubCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::CafeAllowCopyPresetSubCategory* CircleAndFriend; // 0x0
		::MX::SaveData::CafeAllowCopyPresetSubCategory* CircleOnly; // 0x0
		::MX::SaveData::CafeAllowCopyPresetSubCategory* FriendOnly; // 0x0

	};
}

