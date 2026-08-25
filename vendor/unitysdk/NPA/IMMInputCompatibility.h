#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class IMECompositionMode; }
namespace UnityEngine { class KeyCode; }

#define NPA_IMMINPUTCOMPATIBILITY_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETINPUTSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETCOMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETIMEISSELECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETANYKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_SETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETAXIS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMINPUTCOMPATIBILITY_GETKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int IMMInputCompatibility_TypeDefinitionIndex = 25512;

	class IMMInputCompatibility : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* GetMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETMOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::String* GetInputString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETINPUTSTRING_OFFSET))(nullptr);
		}

		::System::String* GetCompositionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETCOMPOSITIONSTRING_OFFSET))(nullptr);
		}

		::System::Boolean GetImeIsSelected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETIMEISSELECTED_OFFSET))(nullptr);
		}

		::System::Boolean GetAnyKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETANYKEY_OFFSET))(nullptr);
		}

		::UnityEngine::IMECompositionMode* GetImeCompositionMode()
		{
			return (return (::UnityEngine::IMECompositionMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETIMECOMPOSITIONMODE_OFFSET))(nullptr);
		}

		::System::Void SetImeCompositionMode(::UnityEngine::IMECompositionMode* arg)
		{
			((::System::Void(*)(::UnityEngine::IMECompositionMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_SETIMECOMPOSITIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Single GetAxis(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETAXIS_OFFSET))(str, nullptr);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETMOUSEBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETMOUSEBUTTONUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButton(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETMOUSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETKEYUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMINPUTCOMPATIBILITY_GETKEY_OFFSET))(arg, nullptr);
		}

	};
}

