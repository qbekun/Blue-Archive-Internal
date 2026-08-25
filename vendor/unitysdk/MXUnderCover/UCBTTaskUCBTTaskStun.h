#pragma once
#include "../unitysdk.h"

class CoroutineAsyncOperation;
class State;

#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD85110)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_ONENTER_OFFSET UNITYSDK_OFFSET(0xD85340)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_.CTOR_OFFSET UNITYSDK_OFFSET(0xD85870)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD85890)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_ONEXIT_OFFSET UNITYSDK_OFFSET(0xD85BA0)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD85BE0)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD86270)
#define MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD86860)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskUCBTTaskStun_TypeDefinitionIndex = 9685;

	class UCBTTaskUCBTTaskStun : public Il2CppObject
	{
	public:
		::System::Single animEndTime; // 0x38
		CoroutineAsyncOperation* ditherOp; // 0x40

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_ONENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_ONEXIT_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStun&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskUCBTTaskStun&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStun&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskUCBTTaskStun&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKUCBTTASKSTUN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

