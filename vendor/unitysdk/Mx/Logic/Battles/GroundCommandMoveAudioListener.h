#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E8DA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E9690)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12E96E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12E98E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E98F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandMoveAudioListener_TypeDefinitionIndex = 14189;

	class GroundCommandMoveAudioListener : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* localPosition; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandMoveAudioListener&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandMoveAudioListener&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandMoveAudioListener&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandMoveAudioListener&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDMOVEAUDIOLISTENER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

