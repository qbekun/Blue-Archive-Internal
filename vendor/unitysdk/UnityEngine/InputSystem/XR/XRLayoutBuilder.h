#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::XR { class XRDeviceDescriptor; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription&; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }
namespace UnityEngine::InputSystem::XR { class XRFeatureDescriptor; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETPARENTCONTROLNAME_OFFSET UNITYSDK_OFFSET(0x9F24EB0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x9F24EF0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F26340)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISSUBCONTROL_OFFSET UNITYSDK_OFFSET(0x9F26160)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F26350)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_SANITIZESTRING_OFFSET UNITYSDK_OFFSET(0x9F25E20)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_CONVERTPOTENTIALALIASTONAME_OFFSET UNITYSDK_OFFSET(0x9F25F80)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISPOSECONTROL_OFFSET UNITYSDK_OFFSET(0x9F26190)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETSIZEOFFEATURE_OFFSET UNITYSDK_OFFSET(0x9F262F0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F268D0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRLayoutBuilder_TypeDefinitionIndex = 28580;

	class XRLayoutBuilder : public Il2CppObject
	{
	public:
		::System::String* parentLayout; // 0x10
		::System::String* interfaceName; // 0x18
		::UnityEngine::InputSystem::XR::XRDeviceDescriptor* descriptor; // 0x20
		::Il2CppArray<::System::Object*>* poseSubControlNames; // 0x0
		::Il2CppArray<::System::Object*>* poseSubControlTypes; // 0x8

		::System::String* GetParentControlName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETPARENTCONTROLNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* Build()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_BUILD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSubControl(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISSUBCONTROL_OFFSET))(str, nullptr);
		}

		::System::String* OnFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&* arg, ::System::String* str, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&*, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ONFINDLAYOUTFORDEVICE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* SanitizeString(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_SANITIZESTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_CONVERTPOTENTIALALIASTONAME_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsPoseControl(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISPOSECONTROL_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor* arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::InputSystem::XR::XRFeatureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETSIZEOFFEATURE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

