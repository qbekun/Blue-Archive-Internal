#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHANGELOOKTARGET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x216B740)
#define GROUNDCOMMANDCHANGELOOKTARGET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x216B9D0)
#define GROUNDCOMMANDCHANGELOOKTARGET_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x216B750)
#define GROUNDCOMMANDCHANGELOOKTARGET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x216C800)
#define GROUNDCOMMANDCHANGELOOKTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x216C760)

	inline static constexpr unsigned int GroundCommandChangeLookTarget_TypeDefinitionIndex = 4021;

	class GroundCommandChangeLookTarget : public Il2CppObject
	{
	public:
		Il2CppObject* targetCommandIds; // 0x30
		::System::Single minDistance; // 0x38
		::System::Single maxDistance; // 0x3C
		::System::Boolean moveInstantly; // 0x40

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGET_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandChangeLookTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandChangeLookTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGET_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGET_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandChangeLookTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandChangeLookTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGET_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGET_.CTOR_OFFSET))(nullptr);
		}

	};

