#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDCAMERASHAKE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2166680)
#define GROUNDCOMMANDCAMERASHAKE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x21666D0)
#define GROUNDCOMMANDCAMERASHAKE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x21666F0)
#define GROUNDCOMMANDCAMERASHAKE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21668F0)
#define GROUNDCOMMANDCAMERASHAKE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2168000)
#define GROUNDCOMMANDCAMERASHAKE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2168FF0)

	inline static constexpr unsigned int GroundCommandCameraShake_TypeDefinitionIndex = 4017;

	class GroundCommandCameraShake : public Il2CppObject
	{
	public:
		::System::Single StartDelay; // 0x30
		::System::Single Duration; // 0x34
		::UnityEngine::Vector3* Intensity; // 0x38
		::UnityEngine::Vector3* YawPitchRoll; // 0x44
		::System::String* curvePath; // 0x50
		::System::Boolean Loop; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKE_.CCTOR_OFFSET))(nullptr);
		}

	};

