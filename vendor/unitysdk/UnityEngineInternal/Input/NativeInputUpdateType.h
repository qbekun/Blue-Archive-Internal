#pragma once
#include "../../unitysdk.h"

namespace UnityEngineInternal::Input { class NativeInputUpdateType; }

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputUpdateType_TypeDefinitionIndex = 38007;

	class NativeInputUpdateType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngineInternal::Input::NativeInputUpdateType* Dynamic; // 0x0
		::UnityEngineInternal::Input::NativeInputUpdateType* Fixed; // 0x0
		::UnityEngineInternal::Input::NativeInputUpdateType* BeforeRender; // 0x0
		::UnityEngineInternal::Input::NativeInputUpdateType* Editor; // 0x0
		::UnityEngineInternal::Input::NativeInputUpdateType* IgnoreFocus; // 0x0

	};
}

