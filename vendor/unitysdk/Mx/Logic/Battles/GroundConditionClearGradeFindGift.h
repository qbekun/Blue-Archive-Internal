#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class ClearGreadeFindGiftArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1358910)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_ONFINDGIFTCLEARGRADE_OFFSET UNITYSDK_OFFSET(0x1359890)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_END_OFFSET UNITYSDK_OFFSET(0x13598F0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1359980)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1359B50)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1359990)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_START_OFFSET UNITYSDK_OFFSET(0x1359BE0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1359C70)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionClearGradeFindGift_TypeDefinitionIndex = 14334;

	class GroundConditionClearGradeFindGift : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x28
		::System::Int32 ClearCount; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnFindGiftClearGrade(::System::Object* arg, ::MX::Logic::Battles::ClearGreadeFindGiftArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ClearGreadeFindGiftArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_ONFINDGIFTCLEARGRADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_END_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_START_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARGRADEFINDGIFT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

