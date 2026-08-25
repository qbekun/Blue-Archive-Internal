#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDADDTOCAMERATARGET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21634E0)
#define GROUNDCOMMANDADDTOCAMERATARGET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2164170)
#define GROUNDCOMMANDADDTOCAMERATARGET_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2164A90)
#define GROUNDCOMMANDADDTOCAMERATARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2164120)
#define GROUNDCOMMANDADDTOCAMERATARGET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2164D50)

	inline static constexpr unsigned int GroundCommandAddToCameraTarget_TypeDefinitionIndex = 4013;

	class GroundCommandAddToCameraTarget : public Il2CppObject
	{
	public:
		Il2CppObject* EntityCommandIds; // 0x30

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandAddToCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandAddToCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGET_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandAddToCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandAddToCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGET_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGET_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGET_.CCTOR_OFFSET))(nullptr);
		}

	};

