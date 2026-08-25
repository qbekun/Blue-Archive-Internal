#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Canvas; }
namespace RuntimeInspectorNamespace { class Tooltip; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Color; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace RuntimeInspectorNamespace { class DraggedReferenceItem; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace RuntimeInspectorNamespace { class IRuntimeInspectorCustomEditor; }

#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_SET_EXPOSEDEXTENSIONMETHODSHOLDER_OFFSET UNITYSDK_OFFSET(0x9587700)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISNULLFORDEV_OFFSET UNITYSDK_OFFSET(0x9587B10)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISEMPTYFORDEV_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x9587B90)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETNAMEWITHTYPE_OFFSET UNITYSDK_OFFSET(0x95880C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9588310)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_TINT_OFFSET UNITYSDK_OFFSET(0x9586270)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_SHOWTOOLTIP_OFFSET UNITYSDK_OFFSET(0x95883D0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_HIDETOOLTIP_OFFSET UNITYSDK_OFFSET(0x9588C10)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_CREATEDRAGGEDREFERENCEITEM_OFFSET UNITYSDK_OFFSET(0x9588D30)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_CREATEDRAGGEDREFERENCEITEM_OFFSET UNITYSDK_OFFSET(0x9588E10)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_POOLDRAGGEDREFERENCEITEM_OFFSET UNITYSDK_OFFSET(0x95890B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTFROMDRAGGEDREFERENCEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTSFROMDRAGGEDREFERENCEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTFROMDRAGGEDREFERENCEITEM_OFFSET UNITYSDK_OFFSET(0x9589170)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTSFROMDRAGGEDREFERENCEITEM_OFFSET UNITYSDK_OFFSET(0x9589960)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTSFROMDRAGGEDREFERENCEITEMINTERNAL_OFFSET UNITYSDK_OFFSET(0x95891D0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_COPYVALUESFROM_OFFSET UNITYSDK_OFFSET(0x9589A00)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_CREATEPOPUPCANVAS_OFFSET UNITYSDK_OFFSET(0x95886C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x9589EA0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISPOINTERVALID_OFFSET UNITYSDK_OFFSET(0x95863E0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETALLVARIABLES_OFFSET UNITYSDK_OFFSET(0x9589FD0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETEXPOSEDMETHODS_OFFSET UNITYSDK_OFFSET(0x958AFA0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x958ACD0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_HASATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x958B650)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETTYPE_OFFSET UNITYSDK_OFFSET(0x958B850)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETEXPOSEDEXTENSIONMETHODS_OFFSET UNITYSDK_OFFSET(0x9587750)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ADDCUSTOMEDITOR_OFFSET UNITYSDK_OFFSET(0x958BB80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ADDCUSTOMEDITORINTERNAL_OFFSET UNITYSDK_OFFSET(0x958BBD0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETCUSTOMEDITOR_OFFSET UNITYSDK_OFFSET(0x958C040)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x958CD70)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RuntimeInspectorUtils_TypeDefinitionIndex = 35722;

	class RuntimeInspectorUtils : public Il2CppObject
	{
	public:
		Il2CppObject* typeToVariables; // 0x0
		Il2CppObject* typeToExposedMethods; // 0x8
		Il2CppObject* commonSerializableTypes; // 0x10
		Il2CppObject* validVariablesList; // 0x18
		Il2CppObject* typesToSearchForVariablesList; // 0x20
		Il2CppObject* propertyNamesInVariablesList; // 0x28
		Il2CppObject* exposedMethodsList; // 0x30
		Il2CppObject* exposedExtensionMethods; // 0x38
		Il2CppObject* customEditors; // 0x40
		Il2CppObject* customEditorAttributes; // 0x48
		Il2CppObject* IgnoredTransformsInHierarchy; // 0x50
		::UnityEngine::Canvas* popupCanvas; // 0x58
		::UnityEngine::Canvas* popupReferenceCanvas; // 0x60
		::RuntimeInspectorNamespace::Tooltip* tooltipPopup; // 0x68
		Il2CppObject* draggedReferenceItemsPool; // 0x70
		::System::Globalization::NumberFormatInfo* numberFormat; // 0x78
		::System::Text::StringBuilder* stringBuilder; // 0x80

		::System::Void set_ExposedExtensionMethodsHolder(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_SET_EXPOSEDEXTENSIONMETHODSHOLDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullForDev(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISNULLFORDEV_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEmptyForDev(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISEMPTYFORDEV_OFFSET))(arg, nullptr);
		}

		::System::String* ToTitleCase(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_TOTITLECASE_OFFSET))(str, nullptr);
		}

		::System::String* GetNameWithType(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETNAMEWITHTYPE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Texture* GetTexture(::UnityEngine::Object* arg)
		{
			return (return (::UnityEngine::Texture*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* Tint(::UnityEngine::Color* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_TINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowTooltip(::System::String* str, ::UnityEngine::EventSystems::PointerEventData* arg, ::RuntimeInspectorNamespace::UISkin* arg, ::UnityEngine::Canvas* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::EventSystems::PointerEventData*, ::RuntimeInspectorNamespace::UISkin*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_SHOWTOOLTIP_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void HideTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_HIDETOOLTIP_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::DraggedReferenceItem* CreateDraggedReferenceItem(::UnityEngine::Object* arg, ::UnityEngine::EventSystems::PointerEventData* arg, ::RuntimeInspectorNamespace::UISkin* arg, ::UnityEngine::Canvas* arg)
		{
			return (return (::RuntimeInspectorNamespace::DraggedReferenceItem*(*)(::UnityEngine::Object*, ::UnityEngine::EventSystems::PointerEventData*, ::RuntimeInspectorNamespace::UISkin*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_CREATEDRAGGEDREFERENCEITEM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::RuntimeInspectorNamespace::DraggedReferenceItem* CreateDraggedReferenceItem(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::EventSystems::PointerEventData* arg, ::RuntimeInspectorNamespace::UISkin* arg, ::UnityEngine::Canvas* arg)
		{
			return (return (::RuntimeInspectorNamespace::DraggedReferenceItem*(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::EventSystems::PointerEventData*, ::RuntimeInspectorNamespace::UISkin*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_CREATEDRAGGEDREFERENCEITEM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PoolDraggedReferenceItem(::RuntimeInspectorNamespace::DraggedReferenceItem* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::DraggedReferenceItem*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_POOLDRAGGEDREFERENCEITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAssignableObjectFromDraggedReferenceItem(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTFROMDRAGGEDREFERENCEITEM_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAssignableObjectsFromDraggedReferenceItem(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTSFROMDRAGGEDREFERENCEITEM_OFFSET))(arg, nullptr);
		}

		::System::Object* GetAssignableObjectFromDraggedReferenceItem(::UnityEngine::EventSystems::PointerEventData* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTFROMDRAGGEDREFERENCEITEM_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAssignableObjectsFromDraggedReferenceItem(::UnityEngine::EventSystems::PointerEventData* arg, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTSFROMDRAGGEDREFERENCEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetAssignableObjectsFromDraggedReferenceItemInternal(::UnityEngine::EventSystems::PointerEventData* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETASSIGNABLEOBJECTSFROMDRAGGEDREFERENCEITEMINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyValuesFrom(::UnityEngine::Canvas* arg, ::UnityEngine::Canvas* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_COPYVALUESFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CreatePopupCanvas(::UnityEngine::Canvas* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_CREATEPOPUPCANVAS_OFFSET))(arg, nullptr);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ONSCENELOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPointerValid(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISPOINTERVALID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAllVariables(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETALLVARIABLES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExposedMethods(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETEXPOSEDMETHODS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSerializable(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ISSERIALIZABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAttribute(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_HASATTRIBUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttribute(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAttributes(::System::Reflection::MemberInfo* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Object* Instantiate(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_INSTANTIATE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetType(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETTYPE_OFFSET))(str, nullptr);
		}

		::System::Void GetExposedExtensionMethods(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETEXPOSEDEXTENSIONMETHODS_OFFSET))(arg, nullptr);
		}

		::System::Void AddCustomEditor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ADDCUSTOMEDITOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddCustomEditorInternal(::System::Type* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_ADDCUSTOMEDITORINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::RuntimeInspectorNamespace::IRuntimeInspectorCustomEditor* GetCustomEditor(::System::Type* arg)
		{
			return (return (::RuntimeInspectorNamespace::IRuntimeInspectorCustomEditor*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_GETCUSTOMEDITOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

