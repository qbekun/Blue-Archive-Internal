#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BlackboardPropertyInt; }
namespace MXBehaviorTree { class BlackboardPropertyFloat; }
class State;

#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD70C00)
#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD71380)
#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD713D0)
#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD713E0)
#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_ONENTER_OFFSET UNITYSDK_OFFSET(0xD71750)
#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_ONEXIT_OFFSET UNITYSDK_OFFSET(0xD71A80)
#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD71C80)
#define MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD74AE0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskCustomAnimation_TypeDefinitionIndex = 9673;

	class UCBTTaskCustomAnimation : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BlackboardPropertyInt* animationState; // 0x38
		::MXBehaviorTree::BlackboardPropertyFloat* duration; // 0x40
		::System::Int32 prevStateId; // 0x48
		::System::Single endTime; // 0x4C

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskCustomAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskCustomAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::MXBehaviorTree::BlackboardPropertyInt* arg3, ::MXBehaviorTree::BlackboardPropertyFloat* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::BlackboardPropertyInt*, ::MXBehaviorTree::BlackboardPropertyFloat*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_ONENTER_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_ONEXIT_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskCustomAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskCustomAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKCUSTOMANIMATION_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

