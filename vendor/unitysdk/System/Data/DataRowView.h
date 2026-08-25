#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAROWVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9743960)
#define SYSTEM_DATA_DATAROWVIEW_EQUALS_OFFSET UNITYSDK_OFFSET(0x97439B0)
#define SYSTEM_DATA_DATAROWVIEW_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97439C0)
#define SYSTEM_DATA_DATAROWVIEW_GET_DATAVIEW_OFFSET UNITYSDK_OFFSET(0x97439F0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.IDATAERRORINFO.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9743A00)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.IDATAERRORINFO.GET_ERROR_OFFSET UNITYSDK_OFFSET(0x9743A20)
#define SYSTEM_DATA_DATAROWVIEW_GET_ROWVERSIONDEFAULT_OFFSET UNITYSDK_OFFSET(0x9743A80)
#define SYSTEM_DATA_DATAROWVIEW_GETRECORD_OFFSET UNITYSDK_OFFSET(0x9743AF0)
#define SYSTEM_DATA_DATAROWVIEW_HASRECORD_OFFSET UNITYSDK_OFFSET(0x9743B60)
#define SYSTEM_DATA_DATAROWVIEW_GETCOLUMNVALUE_OFFSET UNITYSDK_OFFSET(0x9735AB0)
#define SYSTEM_DATA_DATAROWVIEW_SETCOLUMNVALUE_OFFSET UNITYSDK_OFFSET(0x9735CA0)
#define SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_OFFSET UNITYSDK_OFFSET(0x9743BC0)
#define SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_OFFSET UNITYSDK_OFFSET(0x973ECF0)
#define SYSTEM_DATA_DATAROWVIEW_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9743DC0)
#define SYSTEM_DATA_DATAROWVIEW_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x9743DD0)
#define SYSTEM_DATA_DATAROWVIEW_CANCELEDIT_OFFSET UNITYSDK_OFFSET(0x9743DE0)
#define SYSTEM_DATA_DATAROWVIEW_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x9743EB0)
#define SYSTEM_DATA_DATAROWVIEW_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9743E80)
#define SYSTEM_DATA_DATAROWVIEW_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9743F00)
#define SYSTEM_DATA_DATAROWVIEW_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9743FA0)
#define SYSTEM_DATA_DATAROWVIEW_RAISEPROPERTYCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x9744040)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x97440D0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x9744130)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9744140)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x9744150)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x9744160)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9744170)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET UNITYSDK_OFFSET(0x9744180)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9744190)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x97441F0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9744250)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x97442F0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x9744370)
#define SYSTEM_DATA_DATAROWVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9744380)

namespace System::Data
{
	inline static constexpr unsigned int DataRowView_TypeDefinitionIndex = 32224;

	class DataRowView : public Il2CppObject
	{
	public:
		::System::Data::DataView* _dataView; // 0x10
		::System::Data::DataRow* _row; // 0x18
		::System::Boolean _delayBeginEdit; // 0x20
		::System::ComponentModel::PropertyDescriptorCollection* s_zeroPropertyDescriptorCollection; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x28

		::System::Void .ctor(::System::Data::DataView* arg, ::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataView*, ::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Data::DataView* get_DataView()
		{
			return (return (::System::Data::DataView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GET_DATAVIEW_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.IDataErrorInfo.get_Item(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.IDATAERRORINFO.GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::String* System.ComponentModel.IDataErrorInfo.get_Error()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.IDATAERRORINFO.GET_ERROR_OFFSET))(nullptr);
		}

		::System::Data::DataRowVersion* get_RowVersionDefault()
		{
			return (return (::System::Data::DataRowVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GET_ROWVERSIONDEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 GetRecord()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GETRECORD_OFFSET))(nullptr);
		}

		::System::Boolean HasRecord()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_HASRECORD_OFFSET))(nullptr);
		}

		::System::Object* GetColumnValue(::System::Data::DataColumn* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GETCOLUMNVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetColumnValue(::System::Data::DataColumn* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SETCOLUMNVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataView* CreateChildView(::System::Data::DataRelation* arg, ::System::Boolean arg)
		{
			return (return (::System::Data::DataView*(*)(::System::Data::DataRelation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataView* CreateChildView(::System::Data::DataRelation* arg)
		{
			return (return (::System::Data::DataView*(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRow* get_Row()
		{
			return (return (::System::Data::DataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GET_ROW_OFFSET))(nullptr);
		}

		::System::Void BeginEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_BEGINEDIT_OFFSET))(nullptr);
		}

		::System::Void CancelEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_CANCELEDIT_OFFSET))(nullptr);
		}

		::System::Void EndEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_ENDEDIT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNew()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GET_ISNEW_OFFSET))(nullptr);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RaisePropertyChangedEvent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_RAISEPROPERTYCHANGEDEVENT_OFFSET))(str, nullptr);
		}

		::System::ComponentModel::AttributeCollection* System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET))(nullptr);
		}

		::System::ComponentModel::TypeConverter* System.ComponentModel.ICustomTypeDescriptor.GetConverter()
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET))(nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetEditor(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents()
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_.CCTOR_OFFSET))(nullptr);
		}

	};
}

