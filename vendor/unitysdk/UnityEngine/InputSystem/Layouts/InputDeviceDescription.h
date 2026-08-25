#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_INTERFACENAME_OFFSET UNITYSDK_OFFSET(0x9E727E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_INTERFACENAME_OFFSET UNITYSDK_OFFSET(0x9E727F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x9E72800)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x9E72810)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_MANUFACTURER_OFFSET UNITYSDK_OFFSET(0x9E72820)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_MANUFACTURER_OFFSET UNITYSDK_OFFSET(0x9E72830)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x9E72840)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x9E72850)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_SERIAL_OFFSET UNITYSDK_OFFSET(0x9E72860)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_SERIAL_OFFSET UNITYSDK_OFFSET(0x9E72870)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9E72880)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x9E72890)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x9E728A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x9E728B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x9E728C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E72940)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E72CA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E72D50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E72DF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E72F00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E72F40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOJSON_OFFSET UNITYSDK_OFFSET(0x9E72F80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9E730A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_COMPAREPROPERTYTODEVICEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9E73230)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceDescription_TypeDefinitionIndex = 28871;

	class InputDeviceDescription : public Il2CppObject
	{
	public:
		::System::String* m_InterfaceName; // 0x10
		::System::String* m_DeviceClass; // 0x18
		::System::String* m_Manufacturer; // 0x20
		::System::String* m_Product; // 0x28
		::System::String* m_Serial; // 0x30
		::System::String* m_Version; // 0x38
		::System::String* m_Capabilities; // 0x40

		::System::String* get_interfaceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_INTERFACENAME_OFFSET))(nullptr);
		}

		::System::Void set_interfaceName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_INTERFACENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_deviceClass()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_DEVICECLASS_OFFSET))(nullptr);
		}

		::System::Void set_deviceClass(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_DEVICECLASS_OFFSET))(str, nullptr);
		}

		::System::String* get_manufacturer()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_MANUFACTURER_OFFSET))(nullptr);
		}

		::System::Void set_manufacturer(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_MANUFACTURER_OFFSET))(str, nullptr);
		}

		::System::String* get_product()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_PRODUCT_OFFSET))(nullptr);
		}

		::System::Void set_product(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_PRODUCT_OFFSET))(str, nullptr);
		}

		::System::String* get_serial()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_SERIAL_OFFSET))(nullptr);
		}

		::System::Void set_serial(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_SERIAL_OFFSET))(str, nullptr);
		}

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_version(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_VERSION_OFFSET))(str, nullptr);
		}

		::System::String* get_capabilities()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_CAPABILITIES_OFFSET))(nullptr);
		}

		::System::Void set_capabilities(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_CAPABILITIES_OFFSET))(str, nullptr);
		}

		::System::Boolean get_empty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOJSON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceDescription* FromJson(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceDescription*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_FROMJSON_OFFSET))(str, nullptr);
		}

		::System::Boolean ComparePropertyToDeviceDescriptor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_COMPAREPROPERTYTODEVICEDESCRIPTOR_OFFSET))(str, str, str, nullptr);
		}

	};
}

