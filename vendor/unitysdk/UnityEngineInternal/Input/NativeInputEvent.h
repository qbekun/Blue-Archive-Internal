#pragma once
#include "../../unitysdk.h"

namespace UnityEngineInternal::Input { class NativeInputEventType; }

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputEvent_TypeDefinitionIndex = 38006;

	class NativeInputEvent : public Il2CppObject
	{
	public:
		::System::Int32 structSize; // 0x0
		::UnityEngineInternal::Input::NativeInputEventType* type; // 0x10
		::System::UInt16 sizeInBytes; // 0x14
		::System::UInt16 deviceId; // 0x16
		::System::Double time; // 0x18
		::System::Int32 eventId; // 0x20

	};
}

