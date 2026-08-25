#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52810)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52820)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52A20)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B52B80)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTEARRAY_OFFSET UNITYSDK_OFFSET(0x9B53030)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_SET_ATTRIBUTEARRAY_OFFSET UNITYSDK_OFFSET(0x9B53980)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B53AB0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9B53C00)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9B53D40)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ISBROWSABLE_OFFSET UNITYSDK_OFFSET(0x9B53E50)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B53F20)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B53F70)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESIGNTIMEONLY_OFFSET UNITYSDK_OFFSET(0x9B53F80)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9B54070)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CHECKATTRIBUTESVALID_OFFSET UNITYSDK_OFFSET(0x9B53050)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CREATEATTRIBUTECOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B54190)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B54200)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B46520)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILTERATTRIBUTESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x9B53130)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x9B46BE0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x9B54450)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B54500)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOCATIONTARGET_OFFSET UNITYSDK_OFFSET(0x9B54510)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETSITE_OFFSET UNITYSDK_OFFSET(0x9B45BD0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOKEE_OFFSET UNITYSDK_OFFSET(0x9B54620)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MemberDescriptor_TypeDefinitionIndex = 29502;

	class MemberDescriptor : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* displayName; // 0x18
		::System::Int32 nameHash; // 0x20
		::System::ComponentModel::AttributeCollection* attributeCollection; // 0x28
		::Il2CppArray<::System::Object*>* attributes; // 0x30
		::Il2CppArray<::System::Object*>* originalAttributes; // 0x38
		::System::Boolean attributesFiltered; // 0x40
		::System::Boolean attributesFilled; // 0x41
		::System::Int32 metadataVersion; // 0x44
		::System::String* category; // 0x48
		::System::String* description; // 0x50
		::System::Object* lockCookie; // 0x58

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::MemberDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::MemberDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::MemberDescriptor* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::ComponentModel::MemberDescriptor*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AttributeArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTEARRAY_OFFSET))(nullptr);
		}

		::System::Void set_AttributeArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_SET_ATTRIBUTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* get_Attributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* get_Category()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBrowsable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ISBROWSABLE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_NameHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAMEHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean get_DesignTimeOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESIGNTIMEONLY_OFFSET))(nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void CheckAttributesValid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CHECKATTRIBUTESVALID_OFFSET))(nullptr);
		}

		::System::ComponentModel::AttributeCollection* CreateAttributeCollection()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CREATEATTRIBUTECOLLECTION_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void FillAttributes(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void FilterAttributesIfNeeded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILTERATTRIBUTESIFNEEDED_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Object* GetInvocationTarget(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOCATIONTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::ISite* GetSite(::System::Object* arg)
		{
			return (return (::System::ComponentModel::ISite*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETSITE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetInvokee(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOKEE_OFFSET))(arg, arg, nullptr);
		}

	};
}

