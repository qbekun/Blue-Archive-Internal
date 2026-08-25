#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class ItemDataAsset; }

#define MXUNDERCOVER_SKILLDATAASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA78F0)

namespace MXUnderCover
{
	inline static constexpr unsigned int SkillDataAsset_TypeDefinitionIndex = 9872;

	class SkillDataAsset : public Il2CppObject
	{
	public:
		::MXUnderCover::ItemDataAsset* TargetItem; // 0x18
		::System::Single CoolTime; // 0x20
		::System::Int32 UseCount; // 0x24
		::System::Boolean IsInfinite; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_SKILLDATAASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

