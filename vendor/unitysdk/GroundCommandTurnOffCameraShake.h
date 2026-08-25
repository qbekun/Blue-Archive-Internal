#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDTURNOFFCAMERASHAKE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21690A0)
#define GROUNDCOMMANDTURNOFFCAMERASHAKE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x216A4D0)
#define GROUNDCOMMANDTURNOFFCAMERASHAKE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x216A4E0)
#define GROUNDCOMMANDTURNOFFCAMERASHAKE_.CTOR_OFFSET UNITYSDK_OFFSET(0x216A480)
#define GROUNDCOMMANDTURNOFFCAMERASHAKE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x216A6E0)
#define GROUNDCOMMANDTURNOFFCAMERASHAKE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x216B680)

	inline static constexpr unsigned int GroundCommandTurnOffCameraShake_TypeDefinitionIndex = 4019;

	class GroundCommandTurnOffCameraShake : public Il2CppObject
	{
	public:
		::System::String* TargetCommandId; // 0x30

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandTurnOffCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandTurnOffCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandTurnOffCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandTurnOffCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKE_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

