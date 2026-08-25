#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define COLLECTION_GETCONTROLTYPEFORLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F732D0)
#define COLLECTION_TRYFINDMATCHINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F73430)
#define COLLECTION_ADDMATCHER_OFFSET UNITYSDK_OFFSET(0x9F73690)
#define COLLECTION_VALUETYPEISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x9F73850)
#define COLLECTION_HASLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F5E9C0)
#define COLLECTION_FINDLAYOUTTHATINTRODUCESCONTROL_OFFSET UNITYSDK_OFFSET(0x9F73960)
#define COLLECTION_TRYLOADLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F73B00)
#define COLLECTION_TRYLOADLAYOUTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F73F80)
#define COLLECTION_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9F74260)
#define COLLECTION_GETROOTLAYOUTNAME_OFFSET UNITYSDK_OFFSET(0x9F74500)
#define COLLECTION_GETBASELAYOUTS_OFFSET UNITYSDK_OFFSET(0x9F745C0)
#define COLLECTION_TRYFINDLAYOUTFORTYPE_OFFSET UNITYSDK_OFFSET(0x9F6DB90)
#define COLLECTION_ISBASEDON_OFFSET UNITYSDK_OFFSET(0x9F74680)
#define COLLECTION_GETBASELAYOUTNAME_OFFSET UNITYSDK_OFFSET(0x9F74740)
#define COLLECTION_COMPUTEDISTANCEININHERITANCEHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9F747C0)
#define COLLECTION_ISGENERATEDLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F74AB0)

	inline static constexpr unsigned int Collection_TypeDefinitionIndex = 28861;

	class Collection : public Il2CppObject
	{
	public:
		::System::Single kBaseScoreForNonGeneratedLayouts; // 0x0
		Il2CppObject* layoutTypes; // 0x10
		Il2CppObject* layoutStrings; // 0x18
		Il2CppObject* layoutBuilders; // 0x20
		Il2CppObject* baseLayoutTable; // 0x28
		Il2CppObject* layoutOverrides; // 0x30
		Il2CppObject* layoutOverrideNames; // 0x38
		Il2CppObject* precompiledLayouts; // 0x40
		Il2CppObject* layoutMatchers; // 0x48

		::System::Type* GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_GETCONTROLTYPEFORLAYOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_TRYFINDMATCHINGLAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_ADDMATCHER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_VALUETYPEISASSIGNABLEFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_HASLAYOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl* arg, Cache* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::UnityEngine::InputSystem::InputControl*, Cache*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_FINDLAYOUTTHATINTRODUCESCONTROL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_TRYLOADLAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_TRYLOADLAYOUTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Allocate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_ALLOCATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_GETROOTLAYOUTNAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_GETBASELAYOUTS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* TryFindLayoutForType(::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_TRYFINDLAYOUTFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_ISBASEDON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_GETBASELAYOUTNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_COMPUTEDISTANCEININHERITANCEHIERARCHY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTION_ISGENERATEDLAYOUT_OFFSET))(arg, nullptr);
		}

	};

