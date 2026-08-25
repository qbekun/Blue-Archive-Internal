#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class PassiveTriggerEvent; }
namespace MX::Logic::Data { class EchelonConstraint; }

#define MX_LOGIC_DATA_PASSIVETRIGGERDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F7100)
#define MX_LOGIC_DATA_PASSIVETRIGGERDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F7390)
#define MX_LOGIC_DATA_PASSIVETRIGGERDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F7110)
#define MX_LOGIC_DATA_PASSIVETRIGGERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F82C0)
#define MX_LOGIC_DATA_PASSIVETRIGGERDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F8380)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PassiveTriggerData_TypeDefinitionIndex = 13661;

	class PassiveTriggerData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::PassiveTriggerEvent* Event; // 0x10
		::System::String* Parameters; // 0x18
		::System::String* ConditionExpression; // 0x20
		::System::Int32 TriggerRate; // 0x28
		::MX::Logic::Data::EchelonConstraint* EchelonConstraint; // 0x2C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PASSIVETRIGGERDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::PassiveTriggerData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::PassiveTriggerData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PASSIVETRIGGERDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PASSIVETRIGGERDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PASSIVETRIGGERDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::PassiveTriggerData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::PassiveTriggerData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PASSIVETRIGGERDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

