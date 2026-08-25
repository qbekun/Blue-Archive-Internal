#pragma once
#include "unitysdk.h"

#define ONCHANGEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA456C40)

	inline static constexpr unsigned int OnChangeEvent_TypeDefinitionIndex = 34790;

	class OnChangeEvent : public ::UnityEngine::InputSystem::Controls::AnyKeyControl
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCHANGEEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

