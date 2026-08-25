#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PickingMode; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_ID_OFFSET UNITYSDK_OFFSET(0xA424E10)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_ORDERINDOCUMENT_OFFSET UNITYSDK_OFFSET(0xA424E20)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0xA424E30)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_RULEINDEX_OFFSET UNITYSDK_OFFSET(0xA424E40)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0xA424E50)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_CLASSES_OFFSET UNITYSDK_OFFSET(0xA424E60)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETPATHS_OFFSET UNITYSDK_OFFSET(0xA424E70)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETPATHS_OFFSET UNITYSDK_OFFSET(0xA424EF0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETS_OFFSET UNITYSDK_OFFSET(0xA424F00)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETS_OFFSET UNITYSDK_OFFSET(0xA424F80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_SKIPCLONE_OFFSET UNITYSDK_OFFSET(0xA424F90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA424FA0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA424FB0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ADDPROPERTY_OFFSET UNITYSDK_OFFSET(0xA425140)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_SETORADDPROPERTY_OFFSET UNITYSDK_OFFSET(0xA425150)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_TRYGETATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0xA425350)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementAsset_TypeDefinitionIndex = 30700;

	class VisualElementAsset : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::System::Int32 m_Id; // 0x18
		::System::Int32 m_OrderInDocument; // 0x1C
		::System::Int32 m_ParentId; // 0x20
		::System::Int32 m_RuleIndex; // 0x24
		::System::String* m_Text; // 0x28
		::UnityEngine::UIElements::PickingMode* m_PickingMode; // 0x30
		::System::String* m_FullTypeName; // 0x38
		::Il2CppArray<::System::Object*>* m_Classes; // 0x40
		Il2CppObject* m_StylesheetPaths; // 0x48
		Il2CppObject* m_Stylesheets; // 0x50
		::System::Boolean m_SkipClone; // 0x58
		Il2CppObject* m_Properties; // 0x60

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_orderInDocument()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_ORDERINDOCUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_parentId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_PARENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ruleIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_RULEINDEX_OFFSET))(nullptr);
		}

		::System::String* get_fullTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_FULLTYPENAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_classes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_CLASSES_OFFSET))(nullptr);
		}

		Il2CppObject* get_stylesheetPaths()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETPATHS_OFFSET))(nullptr);
		}

		::System::Boolean get_hasStylesheetPaths()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETPATHS_OFFSET))(nullptr);
		}

		Il2CppObject* get_stylesheets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETS_OFFSET))(nullptr);
		}

		::System::Boolean get_hasStylesheets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETS_OFFSET))(nullptr);
		}

		::System::Boolean get_skipClone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_SKIPCLONE_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void AddProperty(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ADDPROPERTY_OFFSET))(str, str, nullptr);
		}

		::System::Void SetOrAddProperty(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_SETORADDPROPERTY_OFFSET))(str, str, nullptr);
		}

		::System::Boolean TryGetAttributeValue(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_TRYGETATTRIBUTEVALUE_OFFSET))(str, arg, nullptr);
		}

	};
}

