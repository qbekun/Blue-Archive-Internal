#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;

#define USBBUTTONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x26186D0)

	inline static constexpr unsigned int UsbButtonInfo_TypeDefinitionIndex = 6511;

	class UsbButtonInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* activeObject; // 0x10
		::UnityEngine::GameObject* fxObject; // 0x18
		MXButton* button; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USBBUTTONINFO_.CTOR_OFFSET))(nullptr);
		}

	};

