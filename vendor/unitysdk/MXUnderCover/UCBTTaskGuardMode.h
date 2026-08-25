#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BlackboardPropertyObject; }
class CoroutineAsyncOperation;
class State;

#define MXUNDERCOVER_UCBTTASKGUARDMODE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD78ED0)
#define MXUNDERCOVER_UCBTTASKGUARDMODE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD79240)
#define MXUNDERCOVER_UCBTTASKGUARDMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD79980)
#define MXUNDERCOVER_UCBTTASKGUARDMODE_ONENTER_OFFSET UNITYSDK_OFFSET(0xD799C0)
#define MXUNDERCOVER_UCBTTASKGUARDMODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD799E0)
#define MXUNDERCOVER_UCBTTASKGUARDMODE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD799F0)
#define MXUNDERCOVER_UCBTTASKGUARDMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD7C780)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskGuardMode_TypeDefinitionIndex = 9679;

	class UCBTTaskGuardMode : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BlackboardPropertyObject* guardMode; // 0x38
		CoroutineAsyncOperation* guardModeOp; // 0x40

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGUARDMODE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskGuardMode&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskGuardMode&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGUARDMODE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::MXBehaviorTree::BlackboardPropertyObject* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::BlackboardPropertyObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGUARDMODE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGUARDMODE_ONENTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGUARDMODE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskGuardMode&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskGuardMode&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGUARDMODE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGUARDMODE_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

