#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BaseEntityType; }
namespace MX::Logic::Skills { class TargetEntityType; }

#define MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1224C80)
#define MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1224FC0)
#define MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1224C90)
#define MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1225140)
#define MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1225150)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EntityInCircleCondition_TypeDefinitionIndex = 13761;

	class EntityInCircleCondition : public Il2CppObject
	{
	public:
		::System::Int32 RangeMin; // 0x10
		::System::Int32 RangeMax; // 0x14
		::MX::Logic::Data::BaseEntityType* BaseEntity; // 0x18
		::MX::Logic::Skills::TargetEntityType* ApplyEntityType; // 0x1C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EntityInCircleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EntityInCircleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EntityInCircleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EntityInCircleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ENTITYINCIRCLECONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

