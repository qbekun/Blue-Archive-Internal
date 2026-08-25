#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class IInputActionCollection; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_VIBRATIONSTRENGTH_OFFSET UNITYSDK_OFFSET(0x9F2ECD0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESENSITIVITY_OFFSET UNITYSDK_OFFSET(0x9F2ECE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F2ECF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_CUSTOMBINDINGS_OFFSET UNITYSDK_OFFSET(0x9F2ED00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPDPADANDLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x9F2ED10)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPTRIGGERS_OFFSET UNITYSDK_OFFSET(0x9F2ED20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPBUMPERS_OFFSET UNITYSDK_OFFSET(0x9F2ED30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKY_OFFSET UNITYSDK_OFFSET(0x9F2ED40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPTRIGGERS_OFFSET UNITYSDK_OFFSET(0x9F2ED50)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPSTICKS_OFFSET UNITYSDK_OFFSET(0x9F2ED60)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKY_OFFSET UNITYSDK_OFFSET(0x9F2ED70)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEY_OFFSET UNITYSDK_OFFSET(0x9F2ED80)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPSTICKS_OFFSET UNITYSDK_OFFSET(0x9F2ED90)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKX_OFFSET UNITYSDK_OFFSET(0x9F2EDA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_APPLY_OFFSET UNITYSDK_OFFSET(0x9F2EDB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEX_OFFSET UNITYSDK_OFFSET(0x9F2EDC0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPBUMPERS_OFFSET UNITYSDK_OFFSET(0x9F2EDD0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKX_OFFSET UNITYSDK_OFFSET(0x9F2EDE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEY_OFFSET UNITYSDK_OFFSET(0x9F2EDF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_VIBRATIONSTRENGTH_OFFSET UNITYSDK_OFFSET(0x9F2EE00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESMOOTHING_OFFSET UNITYSDK_OFFSET(0x9F2EE10)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEX_OFFSET UNITYSDK_OFFSET(0x9F2EE20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPDPADANDLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x9F2EE30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESMOOTHING_OFFSET UNITYSDK_OFFSET(0x9F2EE40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_CUSTOMBINDINGS_OFFSET UNITYSDK_OFFSET(0x9F2EE50)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESENSITIVITY_OFFSET UNITYSDK_OFFSET(0x9F2EE60)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserSettings_TypeDefinitionIndex = 28620;

	class InputUserSettings : public Il2CppObject
	{
	public:
		::System::String* _customBindings_k__BackingField; // 0x10
		::System::Boolean _invertMouseX_k__BackingField; // 0x18
		::System::Boolean _invertMouseY_k__BackingField; // 0x19
		Il2CppObject* _mouseSmoothing_k__BackingField; // 0x1C
		Il2CppObject* _mouseSensitivity_k__BackingField; // 0x24
		::System::Boolean _invertStickX_k__BackingField; // 0x2C
		::System::Boolean _invertStickY_k__BackingField; // 0x2D
		::System::Boolean _swapSticks_k__BackingField; // 0x2E
		::System::Boolean _swapBumpers_k__BackingField; // 0x2F
		::System::Boolean _swapTriggers_k__BackingField; // 0x30
		::System::Boolean _swapDpadAndLeftStick_k__BackingField; // 0x31
		::System::Single _vibrationStrength_k__BackingField; // 0x34
		::System::String* m_CustomBindings; // 0x38

		::System::Void set_vibrationStrength(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_VIBRATIONSTRENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_mouseSensitivity()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESENSITIVITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_customBindings()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_CUSTOMBINDINGS_OFFSET))(nullptr);
		}

		::System::Void set_swapDpadAndLeftStick(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPDPADANDLEFTSTICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_swapTriggers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPTRIGGERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_swapBumpers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPBUMPERS_OFFSET))(nullptr);
		}

		::System::Boolean get_invertStickY()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKY_OFFSET))(nullptr);
		}

		::System::Boolean get_swapTriggers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPTRIGGERS_OFFSET))(nullptr);
		}

		::System::Boolean get_swapSticks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPSTICKS_OFFSET))(nullptr);
		}

		::System::Void set_invertStickY(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKY_OFFSET))(arg, nullptr);
		}

		::System::Void set_invertMouseY(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_swapSticks(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPSTICKS_OFFSET))(arg, nullptr);
		}

		::System::Void set_invertStickX(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKX_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::UnityEngine::InputSystem::IInputActionCollection* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::IInputActionCollection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_invertMouseX()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEX_OFFSET))(nullptr);
		}

		::System::Void set_swapBumpers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPBUMPERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_invertStickX()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKX_OFFSET))(nullptr);
		}

		::System::Boolean get_invertMouseY()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEY_OFFSET))(nullptr);
		}

		::System::Single get_vibrationStrength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_VIBRATIONSTRENGTH_OFFSET))(nullptr);
		}

		::System::Void set_mouseSmoothing(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESMOOTHING_OFFSET))(arg, nullptr);
		}

		::System::Void set_invertMouseX(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_swapDpadAndLeftStick()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPDPADANDLEFTSTICK_OFFSET))(nullptr);
		}

		Il2CppObject* get_mouseSmoothing()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESMOOTHING_OFFSET))(nullptr);
		}

		::System::Void set_customBindings(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_CUSTOMBINDINGS_OFFSET))(str, nullptr);
		}

		::System::Void set_mouseSensitivity(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESENSITIVITY_OFFSET))(arg, nullptr);
		}

	};
}

