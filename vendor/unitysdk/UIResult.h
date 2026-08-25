#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIRESULT_SHOWVICTORY_OFFSET UNITYSDK_OFFSET(0x27AD4E0)
#define UIRESULT_CO_SHOWSTART_OFFSET UNITYSDK_OFFSET(0x27AD570)
#define UIRESULT_SHOWSTART_OFFSET UNITYSDK_OFFSET(0x27AD600)
#define UIRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AD790)

	inline static constexpr unsigned int UIResult_TypeDefinitionIndex = 7507;

	class UIResult : public Il2CppObject
	{
	public:
		::System::Action* onUIShowEnd; // 0xD8
		::System::Single StartShowDelay; // 0xE0
		::UnityEngine::GameObject* Start; // 0xE8
		::UnityEngine::GameObject* Victory; // 0xF0
		::System::Collections::IEnumerator* coroutineShowStart; // 0xF8

		::System::Void ShowVictory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRESULT_SHOWVICTORY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_ShowStart()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRESULT_CO_SHOWSTART_OFFSET))(nullptr);
		}

		::System::Void ShowStart(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIRESULT_SHOWSTART_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRESULT_.CTOR_OFFSET))(nullptr);
		}

	};

