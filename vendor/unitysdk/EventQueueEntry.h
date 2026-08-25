#pragma once
#include "unitysdk.h"

namespace Spine { class TrackEntry; }
namespace Spine { class Event; }

#define EVENTQUEUEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A1D70)

	inline static constexpr unsigned int EventQueueEntry_TypeDefinitionIndex = 34997;

	class EventQueueEntry : public Il2CppObject
	{
	public:
		EventType* type; // 0x10
		::Spine::TrackEntry* entry; // 0x18
		::Spine::Event* e; // 0x20

		::System::Void .ctor(EventType* arg, ::Spine::TrackEntry* arg, ::Spine::Event* arg)
		{
			((::System::Void(*)(EventType*, ::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTQUEUEENTRY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

