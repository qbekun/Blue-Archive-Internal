#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BlackboardPropertyObject; }
namespace MXBehaviorTree { class ConstantPropertyFloat; }
namespace MXUnderCover { class UCStage; }
class Input;
class State;

#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD7CAA0)
#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD7CB70)
#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD7CEE0)
#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xD7D660)
#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD7D830)
#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD7D910)
#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD808A0)
#define MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_ONENTER_OFFSET UNITYSDK_OFFSET(0xD808B0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskLookAtNoiseMaker_TypeDefinitionIndex = 9681;

	class UCBTTaskLookAtNoiseMaker : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BlackboardPropertyObject* noiseMaker; // 0x38
		::MXBehaviorTree::ConstantPropertyFloat* sightRotationSpeed; // 0x40
		::MXUnderCover::UCStage* stage; // 0x48
		Il2CppObject* sightRotateOperations; // 0x50
		Input* emojiInput; // 0x58

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_ONEXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::MXBehaviorTree::BlackboardPropertyObject* arg3, ::MXBehaviorTree::ConstantPropertyFloat* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::BlackboardPropertyObject*, ::MXBehaviorTree::ConstantPropertyFloat*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKLOOKATNOISEMAKER_ONENTER_OFFSET))(nullptr);
		}

	};
}

