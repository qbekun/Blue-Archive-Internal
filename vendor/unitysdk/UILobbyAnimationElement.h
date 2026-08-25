#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define UILOBBYANIMATIONELEMENT_COOPEN_OFFSET UNITYSDK_OFFSET(0x2682A70)
#define UILOBBYANIMATIONELEMENT_COCLOSE_OFFSET UNITYSDK_OFFSET(0x2682D00)
#define UILOBBYANIMATIONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2683FA0)
#define UILOBBYANIMATIONELEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x2683DF0)

	inline static constexpr unsigned int UILobbyAnimationElement_TypeDefinitionIndex = 6756;

	class UILobbyAnimationElement : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* Open; // 0x18
		::UnityEngine::Animation* Close; // 0x20

		::System::Collections::IEnumerator* CoOpen(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATIONELEMENT_COOPEN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoClose()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATIONELEMENT_COCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATIONELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATIONELEMENT_INIT_OFFSET))(nullptr);
		}

	};

