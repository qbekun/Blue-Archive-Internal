#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class GUIStyleState; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xA282280)
#define UNITYENGINE_GUISTYLESTATE_INIT_OFFSET UNITYSDK_OFFSET(0xA282900)
#define UNITYENGINE_GUISTYLESTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA282940)
#define UNITYENGINE_GUISTYLESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA282980)
#define UNITYENGINE_GUISTYLESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2829C0)
#define UNITYENGINE_GUISTYLESTATE_GETGUISTYLESTATE_OFFSET UNITYSDK_OFFSET(0xA282A00)
#define UNITYENGINE_GUISTYLESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA282A70)
#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2828C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyleState_TypeDefinitionIndex = 36546;

	class GUIStyleState : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::UnityEngine::GUIStyle* m_SourceStyle; // 0x18

		::System::Void set_textColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Init()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_INIT_OFFSET))(nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::GUIStyle* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GUIStyleState* GetGUIStyleState(::UnityEngine::GUIStyle* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::GUIStyleState*(*)(::UnityEngine::GUIStyle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_GETGUISTYLESTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void set_textColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

