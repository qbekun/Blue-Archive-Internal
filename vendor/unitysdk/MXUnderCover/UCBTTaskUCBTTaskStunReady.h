#pragma once
#include "../unitysdk.h"

class State;

#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD86970)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD86CB0)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD87340)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD87950)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD86980)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD87930)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskUCBTTaskStunReady_TypeDefinitionIndex = 9687;

	class UCBTTaskUCBTTaskStunReady : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUNREADY_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

