#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleVariableResolver; }
namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleProperty; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }
namespace UnityEngine::UIElements { class StyleVariableContext; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyValue; }
namespace UnityEngine::UIElements { class StyleValueType; }
namespace UnityEngine::UIElements { class StyleValueKeyword; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class TimeValue; }
namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine::UIElements { class TransformOrigin; }
namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine::UIElements { class Scale; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements::StyleSheets { class StyleEnumType; }
namespace UnityEngine::UIElements { class FontDefinition; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UIElements { class Background; }
namespace UnityEngine::UIElements { class Cursor; }
namespace UnityEngine::UIElements { class TextShadow; }
namespace UnityEngine::UIElements { class Angle; }
namespace UnityEngine::UIElements::StyleSheets { class ImageSource&; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0xA36C0B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_PROPERTY_OFFSET UNITYSDK_OFFSET(0xA36C0C0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0xA36C0D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0xA36C0E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_VALUECOUNT_OFFSET UNITYSDK_OFFSET(0xA36C0F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_VALUECOUNT_OFFSET UNITYSDK_OFFSET(0xA36C100)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_DPISCALING_OFFSET UNITYSDK_OFFSET(0xA36C110)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_DPISCALING_OFFSET UNITYSDK_OFFSET(0xA36C120)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0xA36C130)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SETINLINECONTEXT_OFFSET UNITYSDK_OFFSET(0xA36C910)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_MOVENEXTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA36C980)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GETVALUE_OFFSET UNITYSDK_OFFSET(0xA36CA80)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0xA36A170)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0xA36A060)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_ISKEYWORD_OFFSET UNITYSDK_OFFSET(0xA36A0E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0xA36A4D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLENGTH_OFFSET UNITYSDK_OFFSET(0xA36A1E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTIMEVALUE_OFFSET UNITYSDK_OFFSET(0xA36A430)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSLATE_OFFSET UNITYSDK_OFFSET(0xA36CE10)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSFORMORIGIN_OFFSET UNITYSDK_OFFSET(0xA36D250)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READROTATE_OFFSET UNITYSDK_OFFSET(0xA36D5A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READSCALE_OFFSET UNITYSDK_OFFSET(0xA36D820)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READFLOAT_OFFSET UNITYSDK_OFFSET(0xA36A2C0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READINT_OFFSET UNITYSDK_OFFSET(0xA36DBA0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READCOLOR_OFFSET UNITYSDK_OFFSET(0xA36A330)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READENUM_OFFSET UNITYSDK_OFFSET(0xA36DD30)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READFONTDEFINITION_OFFSET UNITYSDK_OFFSET(0xA36DE40)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READFONT_OFFSET UNITYSDK_OFFSET(0xA36E390)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA36E690)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READCURSOR_OFFSET UNITYSDK_OFFSET(0xA36F1D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTEXTSHADOW_OFFSET UNITYSDK_OFFSET(0xA36F620)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLISTEASINGFUNCTION_OFFSET UNITYSDK_OFFSET(0xA36FAB0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLISTTIMEVALUE_OFFSET UNITYSDK_OFFSET(0xA36FCD0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLISTSTYLEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xA36FE80)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_LOADPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA36C3E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SETCURRENTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA36C9C0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSFORMORIGIN_OFFSET UNITYSDK_OFFSET(0xA36D3D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSFORMORIGINENUM_OFFSET UNITYSDK_OFFSET(0xA3700A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSLATE_OFFSET UNITYSDK_OFFSET(0xA36CF90)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READSCALE_OFFSET UNITYSDK_OFFSET(0xA36D980)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READROTATE_OFFSET UNITYSDK_OFFSET(0xA36D720)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READENUM_OFFSET UNITYSDK_OFFSET(0xA3701D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READANGLE_OFFSET UNITYSDK_OFFSET(0xA3702A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_TRYGETIMAGESOURCEFROMVALUE_OFFSET UNITYSDK_OFFSET(0xA36E940)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA370310)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StylePropertyReader_TypeDefinitionIndex = 30805;

	class StylePropertyReader : public Il2CppObject
	{
	public:
		GetCursorIdFunction* getCursorIdFunc; // 0x0
		Il2CppObject* m_Values; // 0x10
		Il2CppObject* m_ValueCount; // 0x18
		::UnityEngine::UIElements::StyleVariableResolver* m_Resolver; // 0x20
		::UnityEngine::UIElements::StyleSheet* m_Sheet; // 0x28
		::Il2CppArray<::System::Object*>* m_Properties; // 0x30
		::Il2CppArray<::System::Object*>* m_PropertyIds; // 0x38
		::System::Int32 m_CurrentValueIndex; // 0x40
		::System::Int32 m_CurrentPropertyIndex; // 0x44
		::UnityEngine::UIElements::StyleProperty* _property_k__BackingField; // 0x48
		::UnityEngine::UIElements::StyleSheets::StylePropertyId* _propertyId_k__BackingField; // 0x50
		::System::Int32 _valueCount_k__BackingField; // 0x54
		::System::Single _dpiScaling_k__BackingField; // 0x58

		::UnityEngine::UIElements::StyleProperty* get_property()
		{
			return (return (::UnityEngine::UIElements::StyleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_PROPERTY_OFFSET))(nullptr);
		}

		::System::Void set_property(::UnityEngine::UIElements::StyleProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_PROPERTY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::StylePropertyId* get_propertyId()
		{
			return (return (::UnityEngine::UIElements::StyleSheets::StylePropertyId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_PROPERTYID_OFFSET))(nullptr);
		}

		::System::Void set_propertyId(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_PROPERTYID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_valueCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_VALUECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_valueCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_VALUECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_dpiScaling()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GET_DPISCALING_OFFSET))(nullptr);
		}

		::System::Void set_dpiScaling(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SET_DPISCALING_OFFSET))(arg, nullptr);
		}

		::System::Void SetContext(::UnityEngine::UIElements::StyleSheet* arg, ::UnityEngine::UIElements::StyleComplexSelector* arg, ::UnityEngine::UIElements::StyleVariableContext* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleComplexSelector*, ::UnityEngine::UIElements::StyleVariableContext*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SETCONTEXT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetInlineContext(::UnityEngine::UIElements::StyleSheet* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SETINLINECONTEXT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::StylePropertyId* MoveNextProperty()
		{
			return (return (::UnityEngine::UIElements::StyleSheets::StylePropertyId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_MOVENEXTPROPERTY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::StylePropertyValue* GetValue(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::StylePropertyValue*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GETVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleValueType* GetValueType(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::StyleValueType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_GETVALUETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValueType(::System::Int32 arg, ::UnityEngine::UIElements::StyleValueType* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::UIElements::StyleValueType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_ISVALUETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsKeyword(::System::Int32 arg, ::UnityEngine::UIElements::StyleValueKeyword* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::UIElements::StyleValueKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_ISKEYWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadAsString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READASSTRING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Length* ReadLength(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLENGTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TimeValue* ReadTimeValue(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::TimeValue*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTIMEVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Translate* ReadTranslate(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::Translate*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSLATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TransformOrigin* ReadTransformOrigin(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::TransformOrigin*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSFORMORIGIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Rotate* ReadRotate(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READROTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Scale* ReadScale(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READSCALE_OFFSET))(arg, nullptr);
		}

		::System::Single ReadFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadInt(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* ReadColor(::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READENUM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::FontDefinition* ReadFontDefinition(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::FontDefinition*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READFONTDEFINITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Font* ReadFont(::System::Int32 arg)
		{
			return (return (::UnityEngine::Font*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READFONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Background* ReadBackground(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::Background*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READBACKGROUND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Cursor* ReadCursor(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::Cursor*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READCURSOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TextShadow* ReadTextShadow(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::TextShadow*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTEXTSHADOW_OFFSET))(arg, nullptr);
		}

		::System::Void ReadListEasingFunction(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLISTEASINGFUNCTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadListTimeValue(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLISTTIMEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadListStylePropertyName(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READLISTSTYLEPROPERTYNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_LOADPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void SetCurrentProperty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_SETCURRENTPROPERTY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TransformOrigin* ReadTransformOrigin(::System::Int32 arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg)
		{
			return (return (::UnityEngine::UIElements::TransformOrigin*(*)(::System::Int32, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSFORMORIGIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Length* ReadTransformOriginEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, bool&* arg, bool&* arg)
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSFORMORIGINENUM_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Translate* ReadTranslate(::System::Int32 arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg)
		{
			return (return (::UnityEngine::UIElements::Translate*(*)(::System::Int32, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READTRANSLATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Scale* ReadScale(::System::Int32 arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg)
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::System::Int32, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READSCALE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Rotate* ReadRotate(::System::Int32 arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg)
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::System::Int32, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READROTATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READENUM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Angle* ReadAngle(::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg)
		{
			return (return (::UnityEngine::UIElements::Angle*(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_READANGLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetImageSourceFromValue(::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg, ::System::Single arg, ::UnityEngine::UIElements::StyleSheets::ImageSource&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::System::Single, ::UnityEngine::UIElements::StyleSheets::ImageSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_TRYGETIMAGESOURCEFROMVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYREADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

