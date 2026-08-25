#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDMOVEAUDIOLISTENERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EA510)
#define GROUNDCOMMANDMOVEAUDIOLISTENERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EA560)
#define GROUNDCOMMANDMOVEAUDIOLISTENERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E98A0)

	inline static constexpr unsigned int GroundCommandMoveAudioListenerFormatter_TypeDefinitionIndex = 14188;

	class GroundCommandMoveAudioListenerFormatter : public ::System::Collections::Concurrent::IProducerConsumerCollection`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandMoveAudioListener&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandMoveAudioListener&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDMOVEAUDIOLISTENERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandMoveAudioListener&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandMoveAudioListener&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDMOVEAUDIOLISTENERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDMOVEAUDIOLISTENERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

