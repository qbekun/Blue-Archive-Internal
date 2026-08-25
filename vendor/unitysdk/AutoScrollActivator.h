#pragma once
#include "unitysdk.h"

class AutoScroller;

#define AUTOSCROLLACTIVATOR_ONPRESS_OFFSET UNITYSDK_OFFSET(0xC0EA60)
#define AUTOSCROLLACTIVATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0EB20)
#define AUTOSCROLLACTIVATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0EB30)

	inline static constexpr unsigned int AutoScrollActivator_TypeDefinitionIndex = 8825;

	class AutoScrollActivator : public Il2CppObject
	{
	public:
		::System::Boolean isAutoScrollerEnabled; // 0x18
		AutoScroller* autoScroller; // 0x20

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLACTIVATOR_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLACTIVATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLACTIVATOR_ONENABLE_OFFSET))(nullptr);
		}

	};

