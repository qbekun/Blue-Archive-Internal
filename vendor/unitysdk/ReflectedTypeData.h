#pragma once
#include "unitysdk.h"

#define REFLECTEDTYPEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B61360)
#define REFLECTEDTYPEDATA_GET_ISPOPULATED_OFFSET UNITYSDK_OFFSET(0x9B61020)
#define REFLECTEDTYPEDATA_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B5BBD0)
#define REFLECTEDTYPEDATA_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x9B5C4C0)
#define REFLECTEDTYPEDATA_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9B5C520)
#define REFLECTEDTYPEDATA_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x9B5C700)
#define REFLECTEDTYPEDATA_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x9B5CC70)
#define REFLECTEDTYPEDATA_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9B5CE40)
#define REFLECTEDTYPEDATA_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x9B5D020)
#define REFLECTEDTYPEDATA_GETEDITORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B63CF0)
#define REFLECTEDTYPEDATA_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9B5DCA0)
#define REFLECTEDTYPEDATA_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B61060)
#define REFLECTEDTYPEDATA_GETTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x9B63B40)
#define REFLECTEDTYPEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9B62BC0)

	inline static constexpr unsigned int ReflectedTypeData_TypeDefinitionIndex = 29506;

	class ReflectedTypeData : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x10
		::System::ComponentModel::AttributeCollection* _attributes; // 0x18
		::System::ComponentModel::EventDescriptorCollection* _events; // 0x20
		::System::ComponentModel::PropertyDescriptorCollection* _properties; // 0x28
		::System::ComponentModel::TypeConverter* _converter; // 0x30
		::Il2CppArray<::System::Object*>* _editors; // 0x38
		::Il2CppArray<::System::Object*>* _editorTypes; // 0x40
		::System::Int32 _editorCount; // 0x48

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPopulated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GET_ISPOPULATED_OFFSET))(nullptr);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* GetClassName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETCLASSNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetComponentName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETCOMPONENTNAME_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Object* arg)
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETCONVERTER_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* arg)
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETDEFAULTEVENT_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETDEFAULTPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEditor(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETEDITOR_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::EditorAttribute* GetEditorAttribute(::System::ComponentModel::AttributeCollection* arg, ::System::Type* arg)
		{
			return (return (::System::ComponentModel::EditorAttribute*(*)(::System::ComponentModel::AttributeCollection*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETEDITORATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents()
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETEVENTS_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETPROPERTIES_OFFSET))(nullptr);
		}

		::System::Type* GetTypeFromName(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_GETTYPEFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFLECTEDTYPEDATA_REFRESH_OFFSET))(nullptr);
		}

	};

