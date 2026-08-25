#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }

#define NPA_EDITOR_INPAYTHREADCLEANER_GETCACHEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D95E30)
#define NPA_EDITOR_INPAYTHREADCLEANER_SETCLEANACTION_OFFSET UNITYSDK_OFFSET(0x9D95E40)
#define NPA_EDITOR_INPAYTHREADCLEANER_CLEARCLEANACTION_OFFSET UNITYSDK_OFFSET(0x9D921B0)
#define NPA_EDITOR_INPAYTHREADCLEANER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D95E50)
#define NPA_EDITOR_INPAYTHREADCLEANER_ONQUITTING_OFFSET UNITYSDK_OFFSET(0x9D95F20)
#define NPA_EDITOR_INPAYTHREADCLEANER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9D95FF0)
#define NPA_EDITOR_INPAYTHREADCLEANER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D96070)
#define NPA_EDITOR_INPAYTHREADCLEANER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D96130)

namespace NPA::Editor
{
	inline static constexpr unsigned int InpayThreadCleaner_TypeDefinitionIndex = 26319;

	class InpayThreadCleaner : public Il2CppObject
	{
	public:
		::System::Boolean wasQuitProcessDone; // 0x18
		::System::Action* cleanAction; // 0x20
		::UnityEngine::GameObject* _obj; // 0x28

		::UnityEngine::GameObject* GetCachedGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_GETCACHEDGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetCleanAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_SETCLEANACTION_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCleanAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_CLEARCLEANACTION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnQuitting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_ONQUITTING_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYTHREADCLEANER_.CTOR_OFFSET))(nullptr);
		}

	};
}

