#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define HIDLAYOUTBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F42030)
#define HIDLAYOUTBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x9F421F0)

	inline static constexpr unsigned int HIDLayoutBuilder_TypeDefinitionIndex = 28657;

	class HIDLayoutBuilder : public Il2CppObject
	{
	public:
		::System::String* displayName; // 0x10
		HIDDeviceDescriptor* hidDescriptor; // 0x18
		::System::String* parentLayout; // 0x48
		::System::Type* deviceType; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDLAYOUTBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* Build()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDLAYOUTBUILDER_BUILD_OFFSET))(nullptr);
		}

	};

