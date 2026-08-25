#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1227210)
#define MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_SHOULDSERIALIZELIST_OFFSET UNITYSDK_OFFSET(0x1227220)
#define MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1227270)
#define MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1227530)
#define MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1227730)
#define MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1227A10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectTypeCondition_TypeDefinitionIndex = 13769;

	class LogicEffectTypeCondition : public Il2CppObject
	{
	public:
		Il2CppObject* List; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_SHOULDSERIALIZELIST_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::LogicEffectTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::LogicEffectTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::LogicEffectTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::LogicEffectTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTYPECONDITION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

