#pragma once
#include "unitysdk.h"

namespace MXBehaviorTree { class BehaviorTreeRunner; }
namespace MXUnderCover { class UCEntity; }

#define BEHAVIORTREEPLAYANDSTOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9AE90)
#define BEHAVIORTREEPLAYANDSTOP_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9AEA0)
#define BEHAVIORTREEPLAYANDSTOP_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD9AF30)

	inline static constexpr unsigned int BehaviorTreePlayAndStop_TypeDefinitionIndex = 9802;

	class BehaviorTreePlayAndStop : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BehaviorTreeRunner* behaviorTreeRunner; // 0x28
		::System::Boolean play; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEPLAYANDSTOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEPLAYANDSTOP_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEPLAYANDSTOP_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

