#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BlackboardPropertyObject; }
class State;

#define MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD69090)
#define MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD690C0)
#define MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD690D0)
#define MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD69440)
#define MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD69A10)
#define MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD6C6E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTServiceFindNoiseMaker_TypeDefinitionIndex = 9669;

	class UCBTServiceFindNoiseMaker : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BlackboardPropertyObject* noiseMaker; // 0x40

		::System::Void .ctor(::System::Single arg, ::MXBehaviorTree::BlackboardPropertyObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Single, ::MXBehaviorTree::BlackboardPropertyObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTServiceFindNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTServiceFindNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTServiceFindNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTServiceFindNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTSERVICEFINDNOISEMAKER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

