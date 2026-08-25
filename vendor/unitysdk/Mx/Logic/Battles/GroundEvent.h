#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroundEventOperatorType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCondition; }

#define MX_LOGIC_BATTLES_GROUNDEVENT_END_OFFSET UNITYSDK_OFFSET(0x136CA00)
#define MX_LOGIC_BATTLES_GROUNDEVENT_CHECKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x136CA90)
#define MX_LOGIC_BATTLES_GROUNDEVENT_RESETEND_OFFSET UNITYSDK_OFFSET(0x1360780)
#define MX_LOGIC_BATTLES_GROUNDEVENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x136CBB0)
#define MX_LOGIC_BATTLES_GROUNDEVENT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x136CD20)
#define MX_LOGIC_BATTLES_GROUNDEVENT_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x136D660)
#define MX_LOGIC_BATTLES_GROUNDEVENT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x136D670)
#define MX_LOGIC_BATTLES_GROUNDEVENT_COEXECUTE_OFFSET UNITYSDK_OFFSET(0x136DAA0)
#define MX_LOGIC_BATTLES_GROUNDEVENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x136DB30)
#define MX_LOGIC_BATTLES_GROUNDEVENT_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x136DB40)
#define MX_LOGIC_BATTLES_GROUNDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x136DB50)
#define MX_LOGIC_BATTLES_GROUNDEVENT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x136DB60)
#define MX_LOGIC_BATTLES_GROUNDEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x136E7D0)
#define MX_LOGIC_BATTLES_GROUNDEVENT_ONCONDITIONACHIEVE_OFFSET UNITYSDK_OFFSET(0x136E8D0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundEvent_TypeDefinitionIndex = 14357;

	class GroundEvent : public Il2CppObject
	{
	public:
		::System::String* EventName; // 0x10
		::MX::Logic::Battles::GroundEventOperatorType* Operator; // 0x18
		Il2CppObject* Conditions; // 0x20
		Il2CppObject* Commands; // 0x28
		::System::Boolean ended; // 0x30
		::MX::Logic::Battles::Battle* Battle; // 0x38
		::System::Int32 _SectionId_k__BackingField; // 0x40

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_END_OFFSET))(nullptr);
		}

		::System::Boolean CheckConditions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_CHECKCONDITIONS_OFFSET))(nullptr);
		}

		::System::Void ResetEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_RESETEND_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundEvent&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_SectionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_GET_SECTIONID_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_SectionId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_SET_SECTIONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundEvent&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void OnConditionAchieve(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDEVENT_ONCONDITIONACHIEVE_OFFSET))(arg, nullptr);
		}

	};
}

