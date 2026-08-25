#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandFindGift; }

#define MX_DATA_FINDGIFTMODULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1848830)
#define MX_DATA_FINDGIFTMODULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1848850)

namespace MX::Data
{
	inline static constexpr unsigned int FindGiftModuleData_TypeDefinitionIndex = 15824;

	class FindGiftModuleData : public Il2CppObject
	{
	public:
		::System::String* UniqueId; // 0x18
		::System::Int32 MaxCount; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FINDGIFTMODULEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroundCommandFindGift* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommandFindGift*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FINDGIFTMODULEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

