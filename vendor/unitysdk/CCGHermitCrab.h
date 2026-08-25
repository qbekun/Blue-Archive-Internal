#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define CCGHERMITCRAB_PLAYACTION_OFFSET UNITYSDK_OFFSET(0x26E6B90)
#define CCGHERMITCRAB_INPUTEVENT_OFFSET UNITYSDK_OFFSET(0x26E6C20)
#define CCGHERMITCRAB_UPDATE_OFFSET UNITYSDK_OFFSET(0x26E6E80)
#define CCGHERMITCRAB_START_OFFSET UNITYSDK_OFFSET(0x26E6E90)
#define CCGHERMITCRAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E6F10)

	inline static constexpr unsigned int CCGHermitCrab_TypeDefinitionIndex = 399;

	class CCGHermitCrab : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0x18
		::System::Int32 touchCount; // 0x20
		::System::String* actionClipName; // 0x0
		::System::String* resetClipName; // 0x0
		::System::String* touchClipName; // 0x0
		::System::String* idleClipName; // 0x0

		::System::Collections::IEnumerator* PlayAction()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHERMITCRAB_PLAYACTION_OFFSET))(nullptr);
		}

		::System::Void InputEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHERMITCRAB_INPUTEVENT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHERMITCRAB_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHERMITCRAB_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHERMITCRAB_.CTOR_OFFSET))(nullptr);
		}

	};

