#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_SENDMOUSEEVENTS_UPDATEMOUSE_OFFSET UNITYSDK_OFFSET(0xA291500)
#define UNITYENGINE_SENDMOUSEEVENTS_SETMOUSEMOVED_OFFSET UNITYSDK_OFFSET(0xA291770)
#define UNITYENGINE_SENDMOUSEEVENTS_DOSENDMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0xA2917C0)
#define UNITYENGINE_SENDMOUSEEVENTS_SENDEVENTS_OFFSET UNITYSDK_OFFSET(0xA292370)
#define UNITYENGINE_SENDMOUSEEVENTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA292DC0)

namespace UnityEngine
{
	inline static constexpr unsigned int SendMouseEvents_TypeDefinitionIndex = 37749;

	class SendMouseEvents : public Il2CppObject
	{
	public:
		::System::Boolean s_MouseUsed; // 0x0
		::Il2CppArray<::System::Object*>* m_LastHit; // 0x8
		::Il2CppArray<::System::Object*>* m_MouseDownHit; // 0x10
		::Il2CppArray<::System::Object*>* m_CurrentHit; // 0x18
		::Il2CppArray<::System::Object*>* m_Cameras; // 0x20
		Il2CppObject* s_GetMouseState; // 0x28
		::UnityEngine::Vector2* s_MousePosition; // 0x30
		::System::Boolean s_MouseButtonPressedThisFrame; // 0x38
		::System::Boolean s_MouseButtonIsPressed; // 0x39

		::System::Void UpdateMouse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_UPDATEMOUSE_OFFSET))(nullptr);
		}

		::System::Void SetMouseMoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_SETMOUSEMOVED_OFFSET))(nullptr);
		}

		::System::Void DoSendMouseEvents(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_DOSENDMOUSEEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void SendEvents(::System::Int32 arg, HitInfo* arg)
		{
			((::System::Void(*)(::System::Int32, HitInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_SENDEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

