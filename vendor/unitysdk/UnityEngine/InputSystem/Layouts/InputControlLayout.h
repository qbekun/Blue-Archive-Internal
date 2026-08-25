#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Layouts { class InputControlAttribute; }
namespace UnityEngine::InputSystem::Utilities { class InternedString&; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher&; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DEFAULTVARIANT_OFFSET UNITYSDK_OFFSET(0x9F69B10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F69B70)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F69B80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F69BB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x9F69BC0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x9F69BD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F69BE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_BASELAYOUTS_OFFSET UNITYSDK_OFFSET(0x9F69BF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_APPLIEDOVERRIDES_OFFSET UNITYSDK_OFFSET(0x9F69C40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_COMMONUSAGES_OFFSET UNITYSDK_OFFSET(0x9F69C90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x9F69CE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x9F69D30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISDEVICELAYOUT_OFFSET UNITYSDK_OFFSET(0x9F69D60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F69DF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F69E80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F69E90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISGENERICTYPEOFDEVICE_OFFSET UNITYSDK_OFFSET(0x9F69EB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISGENERICTYPEOFDEVICE_OFFSET UNITYSDK_OFFSET(0x9F69EC0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_HIDEINUI_OFFSET UNITYSDK_OFFSET(0x9F69EE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_HIDEINUI_OFFSET UNITYSDK_OFFSET(0x9F69EF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISNOISY_OFFSET UNITYSDK_OFFSET(0x9F69F10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISNOISY_OFFSET UNITYSDK_OFFSET(0x9F69F20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CANRUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9F69F40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_CANRUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9F69FA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F6A030)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROL_OFFSET UNITYSDK_OFFSET(0x9F6A1E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROLINCLUDINGARRAYELEMENTS_OFFSET UNITYSDK_OFFSET(0x9F6A420)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9F6A8F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMTYPE_OFFSET UNITYSDK_OFFSET(0x9F6A970)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_TOJSON_OFFSET UNITYSDK_OFFSET(0x9F6B1A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9F6B710)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F6B140)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMS_OFFSET UNITYSDK_OFFSET(0x9F6AFF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMFIELDS_OFFSET UNITYSDK_OFFSET(0x9F6C490)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9F6C510)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBERS_OFFSET UNITYSDK_OFFSET(0x9F6C590)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBER_OFFSET UNITYSDK_OFFSET(0x9F6CAE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATECONTROLITEMFROMMEMBER_OFFSET UNITYSDK_OFFSET(0x9F6CDC0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_INFERLAYOUTFROMVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9F6D8D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_MERGELAYOUT_OFFSET UNITYSDK_OFFSET(0x9F6DD80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATELOOKUPTABLEFORCONTROLS_OFFSET UNITYSDK_OFFSET(0x9F6F510)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_OFFSET UNITYSDK_OFFSET(0x9F700B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_OFFSET UNITYSDK_OFFSET(0x9F6FF60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_PARSEHEADERFIELDSFROMJSON_OFFSET UNITYSDK_OFFSET(0x9F70110)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x9F702F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHEREF_OFFSET UNITYSDK_OFFSET(0x9F70340)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F70390)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__MERGELAYOUT_B__77_0_OFFSET UNITYSDK_OFFSET(0x9F70410)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_TypeDefinitionIndex = 28866;

	class InputControlLayout : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::InternedString* s_DefaultVariant; // 0x0
		::System::String* VariantSeparator; // 0x0
		::UnityEngine::InputSystem::Utilities::InternedString* m_Name; // 0x10
		::System::Type* m_Type; // 0x20
		::UnityEngine::InputSystem::Utilities::InternedString* m_Variants; // 0x28
		::UnityEngine::InputSystem::Utilities::FourCC* m_StateFormat; // 0x38
		::System::Int32 m_StateSizeInBytes; // 0x3C
		Il2CppObject* m_UpdateBeforeRender; // 0x40
		Il2CppObject* m_BaseLayouts; // 0x48
		Il2CppObject* m_AppliedOverrides; // 0x68
		::Il2CppArray<::System::Object*>* m_CommonUsages; // 0x88
		::Il2CppArray<::System::Object*>* m_Controls; // 0x90
		::System::String* m_DisplayName; // 0x98
		::System::String* m_Description; // 0xA0
		Flags* m_Flags; // 0xA8
		Collection* s_Layouts; // 0x10
		Cache* s_CacheInstance; // 0x50
		::System::Int32 s_CacheInstanceRef; // 0x58

		::UnityEngine::InputSystem::Utilities::InternedString* get_DefaultVariant()
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DEFAULTVARIANT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* get_name()
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Type* get_type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* get_variants()
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_VARIANTS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_stateFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATEFORMAT_OFFSET))(nullptr);
		}

		::System::Int32 get_stateSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATESIZEINBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* get_baseLayouts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_BASELAYOUTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_appliedOverrides()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_APPLIEDOVERRIDES_OFFSET))(nullptr);
		}

		Il2CppObject* get_commonUsages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_COMMONUSAGES_OFFSET))(nullptr);
		}

		Il2CppObject* get_controls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CONTROLS_OFFSET))(nullptr);
		}

		::System::Boolean get_updateBeforeRender()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_UPDATEBEFORERENDER_OFFSET))(nullptr);
		}

		::System::Boolean get_isDeviceLayout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISDEVICELAYOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_isControlLayout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISCONTROLLAYOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_isOverride()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_isOverride(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isGenericTypeOfDevice()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISGENERICTYPEOFDEVICE_OFFSET))(nullptr);
		}

		::System::Void set_isGenericTypeOfDevice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISGENERICTYPEOFDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hideInUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_HIDEINUI_OFFSET))(nullptr);
		}

		::System::Void set_hideInUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_HIDEINUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isNoisy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISNOISY_OFFSET))(nullptr);
		}

		::System::Void set_isNoisy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISNOISY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_canRunInBackground()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CANRUNINBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void set_canRunInBackground(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_CANRUNINBACKGROUND_OFFSET))(arg, nullptr);
		}

		ControlItem* get_Item(::System::String* str)
		{
			return (return (ControlItem*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ITEM_OFFSET))(str, nullptr);
		}

		Il2CppObject* FindControl(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindControlIncludingArrayElements(::System::String* str, int32_t&* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROLINCLUDINGARRAYELEMENTS_OFFSET))(str, arg, nullptr);
		}

		::System::Type* GetValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GETVALUETYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* FromType(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMTYPE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_TOJSON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* FromJson(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMJSON_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddControlItems(::System::Type* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddControlItemsFromFields(::System::Type* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMFIELDS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddControlItemsFromProperties(::System::Type* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMPROPERTIES_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddControlItemsFromMembers(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBERS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddControlItemsFromMember(::System::Reflection::MemberInfo* arg, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		ControlItem* CreateControlItemFromMember(::System::Reflection::MemberInfo* arg, ::UnityEngine::InputSystem::Layouts::InputControlAttribute* arg)
		{
			return (return (ControlItem*(*)(::System::Reflection::MemberInfo*, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATECONTROLITEMFROMMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* InferLayoutFromValueType(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_INFERLAYOUTFROMVALUETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_MERGELAYOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateLookupTableForControls(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATELOOKUPTABLEFORCONTROLS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean VariantsMatch(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_OFFSET))(str, str, nullptr);
		}

		::System::Void ParseHeaderFieldsFromJson(::System::String* str, ::UnityEngine::InputSystem::Utilities::InternedString&* arg, Il2CppObject&* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString&*, Il2CppObject&*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_PARSEHEADERFIELDSFROMJSON_OFFSET))(str, arg, arg, arg, nullptr);
		}

		Cache&* get_cache()
		{
			return (return (Cache&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CACHE_OFFSET))(nullptr);
		}

		CacheRefInstance* CacheRef()
		{
			return (return (CacheRefInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHEREF_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean _MergeLayout_b__77_0(ControlItem* arg)
		{
			return (return (::System::Boolean(*)(ControlItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__MERGELAYOUT_B__77_0_OFFSET))(arg, nullptr);
		}

	};
}

