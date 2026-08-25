#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class Button; }
namespace RuntimeInspectorNamespace { class IRuntimeInspectorCustomEditor; }

#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9575220)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CREATEDRAWERSFORVARIABLESEXCLUDING_OFFSET UNITYSDK_OFFSET(0x9575230)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CLEARELEMENTS_OFFSET UNITYSDK_OFFSET(0x9575790)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CREATEDRAWERSFORVARIABLES_OFFSET UNITYSDK_OFFSET(0x9575850)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9575DA0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9575DB0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CANINITIALIZENEWOBJECT_OFFSET UNITYSDK_OFFSET(0x9575E90)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x9576060)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x9576070)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_GENERATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x9576120)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9576340)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9576370)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_INITIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x9576410)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ObjectField_TypeDefinitionIndex = 35668;

	class ObjectField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Button* initializeObjectButton; // 0xB8
		::System::Boolean elementsInitialized; // 0xC0
		::RuntimeInspectorNamespace::IRuntimeInspectorCustomEditor* customEditor; // 0xC8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CreateDrawersForVariablesExcluding(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CREATEDRAWERSFORVARIABLESEXCLUDING_OFFSET))(arg, nullptr);
		}

		::System::Void ClearElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CLEARELEMENTS_OFFSET))(nullptr);
		}

		::System::Void CreateDrawersForVariables(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CREATEDRAWERSFORVARIABLES_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean CanInitializeNewObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_CANINITIALIZENEWOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void GenerateElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_GENERATEELEMENTS_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitializeObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTFIELD_INITIALIZEOBJECT_OFFSET))(nullptr);
		}

	};
}

