#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_SQUADTYPECONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1228D80)
#define MX_LOGIC_DATA_SQUADTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x12290F0)
#define MX_LOGIC_DATA_SQUADTYPECONDITION_SHOULDSERIALIZESQUADTYPELIST_OFFSET UNITYSDK_OFFSET(0x1229100)
#define MX_LOGIC_DATA_SQUADTYPECONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1229150)
#define MX_LOGIC_DATA_SQUADTYPECONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229160)
#define MX_LOGIC_DATA_SQUADTYPECONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229360)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SquadTypeCondition_TypeDefinitionIndex = 13775;

	class SquadTypeCondition : public Il2CppObject
	{
	public:
		Il2CppObject* SquadTypeList; // 0x10

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeSquadTypeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONDITION_SHOULDSERIALIZESQUADTYPELIST_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SquadTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SquadTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SquadTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SquadTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

