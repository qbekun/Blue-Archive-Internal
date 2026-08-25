#pragma once
#include "../../unitysdk.h"

namespace UnityEngineInternal::Input { class NativeInputEventType; }

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputEventType_TypeDefinitionIndex = 38004;

	class NativeInputEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngineInternal::Input::NativeInputEventType* DeviceRemoved; // 0x0
		::UnityEngineInternal::Input::NativeInputEventType* DeviceConfigChanged; // 0x0
		::UnityEngineInternal::Input::NativeInputEventType* Text; // 0x0
		::UnityEngineInternal::Input::NativeInputEventType* State; // 0x0
		::UnityEngineInternal::Input::NativeInputEventType* Delta; // 0x0

	};
}

