#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_WAITFORCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1360310)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13603A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_END_OFFSET UNITYSDK_OFFSET(0x1360570)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1360790)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_GET_ISCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1361720)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x1361730)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13603B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_START_OFFSET UNITYSDK_OFFSET(0x13618C0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1361960)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13619B0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionLogicEffect_TypeDefinitionIndex = 14341;

	class GroundConditionLogicEffect : public Il2CppObject
	{
	public:
		::System::String* LogicEffectGroupId; // 0x28
		::System::Int32 TriggerMaxCount; // 0x30
		::System::Int64 TriggerCooltime; // 0x38
		::System::Int32 triggerCountCurrent; // 0x40
		::System::Collections::IEnumerator* coroutine; // 0x48

		::System::Collections::IEnumerator* WaitForCooltime()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_WAITFORCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_END_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionLogicEffect&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionLogicEffect&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_isCooltime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_GET_ISCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionLogicEffect&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionLogicEffect&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONLOGICEFFECT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

