#pragma once
#include "../unitysdk.h"

class State;
class AbortType;

#define MXUNDERCOVER_UCBTDECORATORISSTUNNED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD64600)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNED_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD64710)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNED_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD64B40)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNED_.CTOR_OFFSET UNITYSDK_OFFSET(0xD652A0)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNED_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD652C0)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNED_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD652D0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTDecoratorIsStunned_TypeDefinitionIndex = 9663;

	class UCBTDecoratorIsStunned : public Il2CppObject
	{
	public:
		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNED_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNED_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTDecoratorIsStunned&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTDecoratorIsStunned&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNED_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(AbortType* arg, ::System::Boolean arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(AbortType*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNED_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNED_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTDecoratorIsStunned&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTDecoratorIsStunned&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNED_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

