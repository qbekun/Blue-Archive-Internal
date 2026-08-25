#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x9E73C90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_PATTERNS_OFFSET UNITYSDK_OFFSET(0x9E73CA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHINTERFACE_OFFSET UNITYSDK_OFFSET(0x9E73D50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHDEVICECLASS_OFFSET UNITYSDK_OFFSET(0x9E74010)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHMANUFACTURER_OFFSET UNITYSDK_OFFSET(0x9E74090)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHPRODUCT_OFFSET UNITYSDK_OFFSET(0x9E74110)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHVERSION_OFFSET UNITYSDK_OFFSET(0x9E74190)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHCAPABILITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITH_OFFSET UNITYSDK_OFFSET(0x9E73DD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9E74210)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHSINGLEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9E74850)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETNUMPROPERTIESIN_OFFSET UNITYSDK_OFFSET(0x9E74900)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_FROMDEVICEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9E749A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E74D90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E74F50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E75070)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E75100)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E75160)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E75220)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E75240)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceMatcher_TypeDefinitionIndex = 28876;

	class InputDeviceMatcher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Patterns; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString* kInterfaceKey; // 0x0
		::UnityEngine::InputSystem::Utilities::InternedString* kDeviceClassKey; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString* kManufacturerKey; // 0x20
		::UnityEngine::InputSystem::Utilities::InternedString* kProductKey; // 0x30
		::UnityEngine::InputSystem::Utilities::InternedString* kVersionKey; // 0x40

		::System::Boolean get_empty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_EMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_patterns()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_PATTERNS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* WithInterface(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHINTERFACE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* WithDeviceClass(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHDEVICECLASS_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* WithManufacturer(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHMANUFACTURER_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* WithProduct(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHPRODUCT_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* WithVersion(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHVERSION_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* WithCapability(::System::String* str, Il2CppObject* arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHCAPABILITY_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* With(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single MatchPercentage(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHPERCENTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MatchSingleProperty(::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHSINGLEPROPERTY_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetNumPropertiesIn(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETNUMPROPERTIESIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* FromDeviceDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_FROMDEVICEDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

