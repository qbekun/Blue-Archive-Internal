#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Utilities { class Substring; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CLEANSLASHES_OFFSET UNITYSDK_OFFSET(0x9EA0A40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_COMBINE_OFFSET UNITYSDK_OFFSET(0x9E9A980)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_OFFSET UNITYSDK_OFFSET(0x9EA0A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_OFFSET UNITYSDK_OFFSET(0x9EA0AB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICEUSAGES_OFFSET UNITYSDK_OFFSET(0x9EA23D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICELAYOUT_OFFSET UNITYSDK_OFFSET(0x9EA25F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EA2850)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9EA2B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9EA2CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CONTROLLAYOUTMATCHESPATHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9EA2F60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_STRINGMATCHES_OFFSET UNITYSDK_OFFSET(0x9EA3180)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E926F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9EA33B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9EA3530)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCHILD_OFFSET UNITYSDK_OFFSET(0x9E9AEB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHES_OFFSET UNITYSDK_OFFSET(0x9EA1160)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHCONTROLCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9EA3600)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESPREFIX_OFFSET UNITYSDK_OFFSET(0x9EA3AB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9EA3590)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHCONTROLSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHBYUSAGEATDEVICEROOTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHCHILDRENRECURSIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHPATHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9EA4270)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHCOMPONENTCANYIELDMULTIPLEMATCHES_OFFSET UNITYSDK_OFFSET(0x9EA4510)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSE_OFFSET UNITYSDK_OFFSET(0x9EA45C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath_TypeDefinitionIndex = 28480;

	class InputControlPath : public Il2CppObject
	{
	public:
		::System::String* Wildcard; // 0x0
		::System::String* DoubleWildcard; // 0x0
		::System::Char Separator; // 0x0
		::System::Char SeparatorReplacement; // 0x0

		::System::String* CleanSlashes(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CLEANSLASHES_OFFSET))(str, nullptr);
		}

		::System::String* Combine(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_COMBINE_OFFSET))(arg, str, nullptr);
		}

		::System::String* ToHumanReadableString(::System::String* str, HumanReadableStringOptions* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::String*(*)(::System::String*, HumanReadableStringOptions*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* ToHumanReadableString(::System::String* str, ::System::String&* arg, ::System::String&* arg, HumanReadableStringOptions* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String&*, ::System::String&*, HumanReadableStringOptions*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TryGetDeviceUsages(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICEUSAGES_OFFSET))(str, nullptr);
		}

		::System::String* TryGetDeviceLayout(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICELAYOUT_OFFSET))(str, nullptr);
		}

		::System::String* TryGetControlLayout(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETCONTROLLAYOUT_OFFSET))(str, nullptr);
		}

		::System::String* FindControlLayoutRecursive(PathParser&* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(PathParser&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_OFFSET))(arg, str, nullptr);
		}

		::System::String* FindControlLayoutRecursive(PathParser&* arg, ::UnityEngine::InputSystem::Layouts::InputControlLayout* arg)
		{
			return (return (::System::String*(*)(PathParser&*, ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ControlLayoutMatchesPathComponent(ControlItem&* arg, PathParser&* arg)
		{
			return (return (::System::Boolean(*)(ControlItem&*, PathParser&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CONTROLLAYOUTMATCHESPATHCOMPONENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean StringMatches(::UnityEngine::InputSystem::Utilities::Substring* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_STRINGMATCHES_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* TryFindControl(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROL_OFFSET))(arg, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TryFindControls(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 TryFindControls(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET))(arg, str, arg, arg, nullptr);
		}

		Il2CppObject* TryFindControl(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 TryFindControls(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* TryFindChild(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCHILD_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* TryFindChild(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCHILD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean Matches(::System::String* str, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHES_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean MatchControlComponent(ParsedPathComponent&* arg, ControlItem&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(ParsedPathComponent&*, ControlItem&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHCONTROLCOMPONENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchesPrefix(::System::String* str, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESPREFIX_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean MatchesRecursive(PathParser&* arg, ::UnityEngine::InputSystem::InputControl* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(PathParser&*, ::UnityEngine::InputSystem::InputControl*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESRECURSIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* MatchControlsRecursive(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg, Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHCONTROLSRECURSIVE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		Il2CppObject* MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice* arg, ::System::String* str, ::System::Int32 arg, Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, ::System::String*, ::System::Int32, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHBYUSAGEATDEVICEROOTRECURSIVE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		Il2CppObject* MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl* arg, ::System::String* str, ::System::Int32 arg, Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHCHILDRENRECURSIVE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Boolean MatchPathComponent(::System::String* str, ::System::String* str, int32_t&* arg, PathComponentType* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, int32_t&*, PathComponentType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHPATHCOMPONENT_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Boolean PathComponentCanYieldMultipleMatches(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHCOMPONENTCANYIELDMULTIPLEMATCHES_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Parse(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSE_OFFSET))(str, nullptr);
		}

	};
}

