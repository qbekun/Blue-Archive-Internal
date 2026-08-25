#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleValueType; }
namespace UnityEngine::UIElements { class StyleValueHandle; }
namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleValueKeyword; }
namespace UnityEngine::UIElements::StyleSheets { class Dimension; }
namespace UnityEngine::UIElements::StyleSheets { class Dimension&; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Object&; }
namespace UnityEngine::UIElements { class StyleValueFunction; }
namespace UnityEngine::UIElements::StyleSheets { class ScalableImage; }

#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHERRORS_OFFSET UNITYSDK_OFFSET(0xA41C570)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHERRORS_OFFSET UNITYSDK_OFFSET(0xA41C580)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHWARNINGS_OFFSET UNITYSDK_OFFSET(0xA41C590)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHWARNINGS_OFFSET UNITYSDK_OFFSET(0xA41C5A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_RULES_OFFSET UNITYSDK_OFFSET(0xA41C5B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_RULES_OFFSET UNITYSDK_OFFSET(0xA41C5C0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_COMPLEXSELECTORS_OFFSET UNITYSDK_OFFSET(0xA41CCE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_COMPLEXSELECTORS_OFFSET UNITYSDK_OFFSET(0xA41CCF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_FLATTENEDRECURSIVEIMPORTS_OFFSET UNITYSDK_OFFSET(0xA41CD20)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xA41CD30)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xA41CD40)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_ISDEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA41CD50)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_ISDEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA41CD60)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYCHECKACCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_CHECKACCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA41CEE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA41CEF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA41CF70)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SETUPREFERENCES_OFFSET UNITYSDK_OFFSET(0xA41C5F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READKEYWORD_OFFSET UNITYSDK_OFFSET(0xA41D1B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFLOAT_OFFSET UNITYSDK_OFFSET(0xA41D1C0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADFLOAT_OFFSET UNITYSDK_OFFSET(0xA41D2B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READDIMENSION_OFFSET UNITYSDK_OFFSET(0xA41D390)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADDIMENSION_OFFSET UNITYSDK_OFFSET(0xA41D480)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READCOLOR_OFFSET UNITYSDK_OFFSET(0xA41D580)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADCOLOR_OFFSET UNITYSDK_OFFSET(0xA41D610)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READSTRING_OFFSET UNITYSDK_OFFSET(0xA41D690)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADSTRING_OFFSET UNITYSDK_OFFSET(0xA41D700)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READENUM_OFFSET UNITYSDK_OFFSET(0xA41D780)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADENUM_OFFSET UNITYSDK_OFFSET(0xA41D7F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READVARIABLE_OFFSET UNITYSDK_OFFSET(0xA41D870)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADVARIABLE_OFFSET UNITYSDK_OFFSET(0xA41D8E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xA41D960)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xA41D9D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0xA41DA50)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READMISSINGASSETREFERENCEURL_OFFSET UNITYSDK_OFFSET(0xA41DAC0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0xA41DB30)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTION_OFFSET UNITYSDK_OFFSET(0xA41DBB0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0xA41DBC0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READSCALABLEIMAGE_OFFSET UNITYSDK_OFFSET(0xA41DDB0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_CUSTOMSTARTSWITH_OFFSET UNITYSDK_OFFSET(0xA41D0E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41DE40)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA41DE50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSheet_TypeDefinitionIndex = 30650;

	class StyleSheet : public Il2CppObject
	{
	public:
		::System::Boolean m_ImportedWithErrors; // 0x18
		::System::Boolean m_ImportedWithWarnings; // 0x19
		::Il2CppArray<::System::Object*>* m_Rules; // 0x20
		::Il2CppArray<::System::Object*>* m_ComplexSelectors; // 0x28
		::Il2CppArray<::System::Object*>* floats; // 0x30
		::Il2CppArray<::System::Object*>* dimensions; // 0x38
		::Il2CppArray<::System::Object*>* colors; // 0x40
		::Il2CppArray<::System::Object*>* strings; // 0x48
		::Il2CppArray<::System::Object*>* assets; // 0x50
		::Il2CppArray<::System::Object*>* imports; // 0x58
		Il2CppObject* m_FlattenedImportedStyleSheets; // 0x60
		::System::Int32 m_ContentHash; // 0x68
		::Il2CppArray<::System::Object*>* scalableImages; // 0x70
		Il2CppObject* orderedNameSelectors; // 0x78
		Il2CppObject* orderedTypeSelectors; // 0x80
		Il2CppObject* orderedClassSelectors; // 0x88
		::System::Boolean m_IsDefaultStyleSheet; // 0x90
		::System::String* kCustomPropertyMarker; // 0x0

		::System::Boolean get_importedWithErrors()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHERRORS_OFFSET))(nullptr);
		}

		::System::Void set_importedWithErrors(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHERRORS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_importedWithWarnings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHWARNINGS_OFFSET))(nullptr);
		}

		::System::Void set_importedWithWarnings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHWARNINGS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_rules()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_RULES_OFFSET))(nullptr);
		}

		::System::Void set_rules(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_RULES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_complexSelectors()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_COMPLEXSELECTORS_OFFSET))(nullptr);
		}

		::System::Void set_complexSelectors(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_COMPLEXSELECTORS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_flattenedRecursiveImports()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_FLATTENEDRECURSIVEIMPORTS_OFFSET))(nullptr);
		}

		::System::Int32 get_contentHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_CONTENTHASH_OFFSET))(nullptr);
		}

		::System::Void set_contentHash(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_CONTENTHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDefaultStyleSheet()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_ISDEFAULTSTYLESHEET_OFFSET))(nullptr);
		}

		::System::Void set_isDefaultStyleSheet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_ISDEFAULTSTYLESHEET_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryCheckAccess(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::UIElements::StyleValueType* arg, ::UnityEngine::UIElements::StyleValueHandle* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::UIElements::StyleValueType*, ::UnityEngine::UIElements::StyleValueHandle*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYCHECKACCESS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* CheckAccess(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::UIElements::StyleValueType* arg, ::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::UIElements::StyleValueType*, ::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_CHECKACCESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void FlattenImportedStyleSheetsRecursive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_OFFSET))(nullptr);
		}

		::System::Void FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetupReferences()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SETUPREFERENCES_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleValueKeyword* ReadKeyword(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::UnityEngine::UIElements::StyleValueKeyword*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Single ReadFloat(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadFloat(::UnityEngine::UIElements::StyleValueHandle* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Dimension* ReadDimension(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Dimension*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READDIMENSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadDimension(::UnityEngine::UIElements::StyleValueHandle* arg, ::UnityEngine::UIElements::StyleSheets::Dimension&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::UnityEngine::UIElements::StyleSheets::Dimension&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADDIMENSION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* ReadColor(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadColor(::UnityEngine::UIElements::StyleValueHandle* arg, ::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadString(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadString(::UnityEngine::UIElements::StyleValueHandle* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadEnum(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READENUM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadEnum(::UnityEngine::UIElements::StyleValueHandle* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADENUM_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadVariable(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READVARIABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadVariable(::UnityEngine::UIElements::StyleValueHandle* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADVARIABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READRESOURCEPATH_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADRESOURCEPATH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READASSETREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::String* ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READMISSINGASSETREFERENCEURL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle* arg, ::UnityEngine::Object&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::UnityEngine::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADASSETREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleValueFunction* ReadFunction(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::UnityEngine::UIElements::StyleValueFunction*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::String* ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTIONNAME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::ScalableImage* ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::ScalableImage*(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READSCALABLEIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CustomStartsWith(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_CUSTOMSTARTSWITH_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

