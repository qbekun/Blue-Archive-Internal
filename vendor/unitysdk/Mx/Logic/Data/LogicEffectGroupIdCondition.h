#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1225F30)
#define MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x12261F0)
#define MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1226200)
#define MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1226570)
#define MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12267A0)
#define MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_SHOULDSERIALIZELIST_OFFSET UNITYSDK_OFFSET(0x12267B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectGroupIdCondition_TypeDefinitionIndex = 13765;

	class LogicEffectGroupIdCondition : public Il2CppObject
	{
	public:
		Il2CppObject* List; // 0x10
		::System::Boolean CountFalseCondition; // 0x18

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::LogicEffectGroupIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::LogicEffectGroupIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::LogicEffectGroupIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::LogicEffectGroupIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTGROUPIDCONDITION_SHOULDSERIALIZELIST_OFFSET))(nullptr);
		}

	};
}

