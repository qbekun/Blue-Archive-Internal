#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class ExposedMethod; }
namespace UnityEngine { class Component; }
namespace RuntimeInspectorNamespace { class RuntimeInspector; }
namespace RuntimeInspectorNamespace { class ExpandableInspectorField; }

#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_0_OFFSET UNITYSDK_OFFSET(0x956C5D0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x956C650)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_5_OFFSET UNITYSDK_OFFSET(0x956C6E0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_REMOVECOMPONENTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x956C770)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_GENERATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x956C820)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_CLEARELEMENTS_OFFSET UNITYSDK_OFFSET(0x956DD90)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_4_OFFSET UNITYSDK_OFFSET(0x956E240)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__GENERATEELEMENTS_B__20_0_OFFSET UNITYSDK_OFFSET(0x956E2D0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_2_OFFSET UNITYSDK_OFFSET(0x956E2E0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_REMOVECOMPONENTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x956E330)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_3_OFFSET UNITYSDK_OFFSET(0x956E540)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_ADDCOMPONENTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x956E710)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x956F7A0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_ONUNBOUND_OFFSET UNITYSDK_OFFSET(0x956F810)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x956F920)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x956FBB0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_1_OFFSET UNITYSDK_OFFSET(0x956FEB0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x956FF60)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x95703A0)
#define RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x95703F0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int GameObjectField_TypeDefinitionIndex = 35656;

	class GameObjectField : public Il2CppObject
	{
	public:
		::System::String* currentTag; // 0xB8
		Getter* isActiveGetter; // 0xC0
		Getter* nameGetter; // 0xC8
		Getter* tagGetter; // 0xD0
		Setter* isActiveSetter; // 0xD8
		Setter* nameSetter; // 0xE0
		Setter* tagSetter; // 0xE8
		::System::Reflection::PropertyInfo* layerProp; // 0xF0
		Il2CppObject* components; // 0xF8
		Il2CppObject* componentsExpandedStates; // 0x100
		::Il2CppArray<::System::Object*>* addComponentTypes; // 0x108
		::RuntimeInspectorNamespace::ExposedMethod* addComponentMethod; // 0x0
		::RuntimeInspectorNamespace::ExposedMethod* removeComponentMethod; // 0x18

		::System::Object* _Initialize_b__15_0()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_0_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__15_5(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_5_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RemoveComponentCoroutine(::UnityEngine::Component* arg, ::RuntimeInspectorNamespace::RuntimeInspector* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::Component*, ::RuntimeInspectorNamespace::RuntimeInspector*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_REMOVECOMPONENTCOROUTINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_GENERATEELEMENTS_OFFSET))(nullptr);
		}

		::System::Void ClearElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_CLEARELEMENTS_OFFSET))(nullptr);
		}

		::System::Object* _Initialize_b__15_4()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_4_OFFSET))(nullptr);
		}

		::System::Object* _GenerateElements_b__20_0()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__GENERATEELEMENTS_B__20_0_OFFSET))(nullptr);
		}

		::System::Object* _Initialize_b__15_2()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_2_OFFSET))(nullptr);
		}

		::System::Void RemoveComponentButtonClicked(::RuntimeInspectorNamespace::ExpandableInspectorField* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::ExpandableInspectorField*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_REMOVECOMPONENTBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__15_3(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_3_OFFSET))(arg, nullptr);
		}

		::System::Void AddComponentButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_ADDCOMPONENTBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnbound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_ONUNBOUND_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__15_1(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD__INITIALIZE_B__15_1_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_GAMEOBJECTFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

