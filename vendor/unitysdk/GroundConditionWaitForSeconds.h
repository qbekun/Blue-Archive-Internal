#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONWAITFORSECONDS_CO_WAIT_OFFSET UNITYSDK_OFFSET(0x2184250)
#define GROUNDCONDITIONWAITFORSECONDS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x21842E0)
#define GROUNDCONDITIONWAITFORSECONDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2184BC0)
#define GROUNDCONDITIONWAITFORSECONDS_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2184C10)
#define GROUNDCONDITIONWAITFORSECONDS_END_OFFSET UNITYSDK_OFFSET(0x2184E10)
#define GROUNDCONDITIONWAITFORSECONDS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2184EB0)
#define GROUNDCONDITIONWAITFORSECONDS_START_OFFSET UNITYSDK_OFFSET(0x2185A40)
#define GROUNDCONDITIONWAITFORSECONDS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2185B40)

	inline static constexpr unsigned int GroundConditionWaitForSeconds_TypeDefinitionIndex = 4058;

	class GroundConditionWaitForSeconds : public Il2CppObject
	{
	public:
		::System::Int32 Milliseconds; // 0x28
		::System::Collections::IEnumerator* c; // 0x30

		::System::Collections::IEnumerator* co_Wait()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_CO_WAIT_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundConditionWaitForSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundConditionWaitForSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_END_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundConditionWaitForSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundConditionWaitForSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_START_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDS_.CCTOR_OFFSET))(nullptr);
		}

	};

