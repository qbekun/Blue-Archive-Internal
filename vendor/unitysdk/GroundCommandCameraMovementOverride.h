#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2164E00)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2164FD0)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2165030)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2165CA0)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2164E10)

	inline static constexpr unsigned int GroundCommandCameraMovementOverride_TypeDefinitionIndex = 4015;

	class GroundCommandCameraMovementOverride : public Il2CppObject
	{
	public:
		::System::Single CameraAccelerate; // 0x30
		::System::Single MaxCameraSpeed; // 0x34

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandCameraMovementOverride&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandCameraMovementOverride&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandCameraMovementOverride&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandCameraMovementOverride&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};

