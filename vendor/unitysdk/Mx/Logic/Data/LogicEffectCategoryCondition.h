#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x12255D0)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12255E0)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12257E0)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1225B20)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_SHOULDSERIALIZELIST_OFFSET UNITYSDK_OFFSET(0x1225E00)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12257F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectCategoryCondition_TypeDefinitionIndex = 13763;

	class LogicEffectCategoryCondition : public Il2CppObject
	{
	public:
		Il2CppObject* List; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::LogicEffectCategoryCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::LogicEffectCategoryCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::LogicEffectCategoryCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::LogicEffectCategoryCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldSerializeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_SHOULDSERIALIZELIST_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYCONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

