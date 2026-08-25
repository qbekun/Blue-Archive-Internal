#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ARMORTYPECONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x122A040)
#define MX_LOGIC_DATA_ARMORTYPECONDITION_SHOULDSERIALIZEARMORTYPELIST_OFFSET UNITYSDK_OFFSET(0x122A380)
#define MX_LOGIC_DATA_ARMORTYPECONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x122A050)
#define MX_LOGIC_DATA_ARMORTYPECONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x122A410)
#define MX_LOGIC_DATA_ARMORTYPECONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x122A700)
#define MX_LOGIC_DATA_ARMORTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x122A6F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ArmorTypeCondition_TypeDefinitionIndex = 13779;

	class ArmorTypeCondition : public Il2CppObject
	{
	public:
		Il2CppObject* ArmorTypeList; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeArmorTypeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONDITION_SHOULDSERIALIZEARMORTYPELIST_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::ArmorTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::ArmorTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::ArmorTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::ArmorTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

