#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class EndFindGiftCompareType; }
namespace MX::Logic::Battles { class EndFindGiftArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_START_OFFSET UNITYSDK_OFFSET(0x135B130)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x135B1C0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x135B450)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x135B1D0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_ONFINDGIFTENDED_OFFSET UNITYSDK_OFFSET(0x135C420)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_.CTOR_OFFSET UNITYSDK_OFFSET(0x135C4B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_END_OFFSET UNITYSDK_OFFSET(0x135C500)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x135C590)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionEndFindGift_TypeDefinitionIndex = 14336;

	class GroundConditionEndFindGift : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x28
		::MX::Logic::Battles::EndFindGiftCompareType* Compare; // 0x30
		::System::Int32 ClearCount; // 0x34

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_START_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionEndFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionEndFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void OnFindGiftEnded(::System::Object* arg, ::MX::Logic::Battles::EndFindGiftArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::EndFindGiftArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_ONFINDGIFTENDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_END_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionEndFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionEndFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDFINDGIFT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

