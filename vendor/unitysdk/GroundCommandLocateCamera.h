#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDLOCATECAMERA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x21721F0)
#define GROUNDCOMMANDLOCATECAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x21724B0)
#define GROUNDCOMMANDLOCATECAMERA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2172510)
#define GROUNDCOMMANDLOCATECAMERA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2172E80)
#define GROUNDCOMMANDLOCATECAMERA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2172E90)

	inline static constexpr unsigned int GroundCommandLocateCamera_TypeDefinitionIndex = 4030;

	class GroundCommandLocateCamera : public Il2CppObject
	{
	public:
		::System::Int32 ID; // 0x30
		::System::Single MaxCameraSpeed; // 0x34
		::System::Single RotationSpeed; // 0x38
		::System::Single ZoomSpeed; // 0x3C
		Il2CppObject* RailPoints; // 0x40
		::System::Int32 CameraIndex; // 0x48

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandLocateCamera&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandLocateCamera&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandLocateCamera&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandLocateCamera&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

