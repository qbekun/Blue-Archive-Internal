#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1228420)
#define MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1228620)
#define MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1228990)
#define MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1228C70)
#define MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_SHOULDSERIALIZETACTICENTITYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1228C80)
#define MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1228CD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ModifierTacticEntityTypeCondition_TypeDefinitionIndex = 13773;

	class ModifierTacticEntityTypeCondition : public Il2CppObject
	{
	public:
		Il2CppObject* TacticEntityTypeList; // 0x10

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTacticEntityTypeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_SHOULDSERIALIZETACTICENTITYTYPELIST_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFIERTACTICENTITYTYPECONDITION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

