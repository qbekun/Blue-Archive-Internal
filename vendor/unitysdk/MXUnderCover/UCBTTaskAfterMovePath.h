#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BlackboardPropertyObject; }
class CoroutineAsyncOperation;
class State;
namespace MXUnderCover { class UCBehaviorTreeOwner; }
namespace MXUnderCover { class UCPathVertex; }

#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD6CF10)
#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD6D650)
#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD6D660)
#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_ONUPDATEGUARDMODE_OFFSET UNITYSDK_OFFSET(0xD6D9D0)
#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0xD6DB80)
#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD6DBC0)
#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD6DDB0)
#define MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_ONENTER_OFFSET UNITYSDK_OFFSET(0xD70B40)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskAfterMovePath_TypeDefinitionIndex = 9671;

	class UCBTTaskAfterMovePath : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BlackboardPropertyObject* pathDescriptor; // 0x38
		::System::Single elapsedTime; // 0x40
		CoroutineAsyncOperation* guardModeOp; // 0x48

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskAfterMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskAfterMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		State* OnUpdateGuardMode(::MXUnderCover::UCBehaviorTreeOwner* arg, ::MXUnderCover::UCPathVertex* arg2)
		{
			return ((State*(*)(::MXUnderCover::UCBehaviorTreeOwner*, ::MXUnderCover::UCPathVertex*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_ONUPDATEGUARDMODE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::MXBehaviorTree::BlackboardPropertyObject* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::BlackboardPropertyObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskAfterMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskAfterMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKAFTERMOVEPATH_ONENTER_OFFSET))(nullptr);
		}

	};
}

