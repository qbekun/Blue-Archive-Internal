#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class DeviceType; }

namespace UnityEngine
{
	inline static constexpr unsigned int DeviceType_TypeDefinitionIndex = 31199;

	class DeviceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::DeviceType* Unknown; // 0x0
		::UnityEngine::DeviceType* Handheld; // 0x0
		::UnityEngine::DeviceType* Console; // 0x0
		::UnityEngine::DeviceType* Desktop; // 0x0

	};
}

