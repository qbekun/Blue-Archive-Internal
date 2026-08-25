#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B3F0F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B3F100)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B31640)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x9B3F110)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_ISLOCALIZABLE_OFFSET UNITYSDK_OFFSET(0x9B3F7D0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SERIALIZATIONVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9B3F8C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9B3F990)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B3FB10)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B3F5B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B3FD10)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B3FD80)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B3FDA0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B3FDC0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B3FDE0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x9B3FE80)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B40290)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETINVOCATIONTARGET_OFFSET UNITYSDK_OFFSET(0x9B402F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x9B3F380)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9B403C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9B40460)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETVALUECHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0x9B405F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET UNITYSDK_OFFSET(0x9B40670)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyDescriptor_TypeDefinitionIndex = 29444;

	class PropertyDescriptor : public Il2CppObject
	{
	public:
		::System::ComponentModel::TypeConverter* _converter; // 0x60
		::System::Collections::Hashtable* _valueChangedHandlers; // 0x68
		::Il2CppArray<::System::Object*>* _editors; // 0x70
		::Il2CppArray<::System::Object*>* _editorTypes; // 0x78
		::System::Int32 _editorCount; // 0x80

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::MemberDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::MemberDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::MemberDescriptor* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::ComponentModel::MemberDescriptor*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::ComponentModel::TypeConverter* get_Converter()
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_CONVERTER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLocalizable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_ISLOCALIZABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::ComponentModel::DesignerSerializationVisibility* get_SerializationVisibility()
		{
			return (return (::System::ComponentModel::DesignerSerializationVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SERIALIZATIONVISIBILITY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Void AddValueChanged(::System::Object* arg, ::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_CREATEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void FillAttributes(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::System::Object* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetEditor(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETEDITOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Object* GetInvocationTarget(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETINVOCATIONTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetTypeFromName(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETTYPEFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnValueChanged(::System::Object* arg, ::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveValueChanged(::System::Object* arg, ::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::EventHandler* GetValueChangedHandler(::System::Object* arg)
		{
			return (return (::System::EventHandler*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETVALUECHANGEDHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SupportsChangeEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET))(nullptr);
		}

	};
}

