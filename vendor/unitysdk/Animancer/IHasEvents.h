#pragma once
#include "../unitysdk.h"

#define ANIMANCER_IHASEVENTS_GET_SERIALIZEDEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IHASEVENTS_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IHasEvents_TypeDefinitionIndex = 35148;

	class IHasEvents : public Il2CppObject
	{
	public:
		Serializable&* get_SerializedEvents()
		{
			return (return (Serializable&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IHASEVENTS_GET_SERIALIZEDEVENTS_OFFSET))(nullptr);
		}

		Sequence* get_Events()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IHASEVENTS_GET_EVENTS_OFFSET))(nullptr);
		}

	};
}

