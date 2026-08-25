#pragma once
#include "../unitysdk.h"

class State;
class AbortType;

#define MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD66B40)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD66F70)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD67080)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD68850)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD68870)
#define MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD68FD0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTDecoratorIsStunnedReady_TypeDefinitionIndex = 9665;

	class UCBTDecoratorIsStunnedReady : public Il2CppObject
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTDecoratorIsStunnedReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTDecoratorIsStunnedReady&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(AbortType* arg, ::System::Boolean arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(AbortType*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTDecoratorIsStunnedReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTDecoratorIsStunnedReady&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTDECORATORISSTUNNEDREADY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

