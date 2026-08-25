#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }

#define DROPITEMBOXVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x10A9920)
#define DROPITEMBOXVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10A9930)
#define DROPITEMBOXVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x10A9AE0)
#define DROPITEMBOXVISUAL_CODROPITEM_OFFSET UNITYSDK_OFFSET(0x10A9A60)

	inline static constexpr unsigned int DropItemBoxVisual_TypeDefinitionIndex = 879;

	class DropItemBoxVisual : public Il2CppObject
	{
	public:
		::UnityEngine::Animator* animator; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPITEMBOXVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPITEMBOXVISUAL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPITEMBOXVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDropItem(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DROPITEMBOXVISUAL_CODROPITEM_OFFSET))(arg, nullptr);
		}

	};

