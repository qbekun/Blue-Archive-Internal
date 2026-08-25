#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B54930)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B54C30)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B54D90)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B54E90)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_AMBIENTVALUE_OFFSET UNITYSDK_OFFSET(0x9B55380)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_CHANGEDEVENTVALUE_OFFSET UNITYSDK_OFFSET(0x9B55510)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_IPROPCHANGEDEVENTVALUE_OFFSET UNITYSDK_OFFSET(0x9B556A0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SET_IPROPCHANGEDEVENTVALUE_OFFSET UNITYSDK_OFFSET(0x9B55860)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B558E0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x9B558F0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_GETMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x9B55BF0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISEXTENDER_OFFSET UNITYSDK_OFFSET(0x9B56100)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B56160)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9B56860)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_RESETMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x9B56870)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SETMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x9B56240)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SHOULDSERIALIZEMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x9B56AB0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9B56CF0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERCANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B56EB0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETRECEIVERTYPE_OFFSET UNITYSDK_OFFSET(0x9B57290)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B572A0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETVALUE_OFFSET UNITYSDK_OFFSET(0x9B57160)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B572C0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSETVALUE_OFFSET UNITYSDK_OFFSET(0x9B57770)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9B57C10)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B580B0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B583D0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9B59030)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONINOTIFYPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9B593C0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9B594C0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9B59560)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B59730)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9B59B50)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9B5A1B0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET UNITYSDK_OFFSET(0x9B5A510)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B5A550)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectPropertyDescriptor_TypeDefinitionIndex = 29505;

	class ReflectPropertyDescriptor : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* argsNone; // 0x0
		::System::Object* noValue; // 0x8
		::System::Diagnostics::TraceSwitch* PropDescCreateSwitch; // 0x10
		::System::Diagnostics::TraceSwitch* PropDescUsageSwitch; // 0x18
		::System::Int32 BitDefaultValueQueried; // 0x20
		::System::Int32 BitGetQueried; // 0x24
		::System::Int32 BitSetQueried; // 0x28
		::System::Int32 BitShouldSerializeQueried; // 0x2C
		::System::Int32 BitResetQueried; // 0x30
		::System::Int32 BitChangedQueried; // 0x34
		::System::Int32 BitIPropChangedQueried; // 0x38
		::System::Int32 BitReadOnlyChecked; // 0x3C
		::System::Int32 BitAmbientValueQueried; // 0x40
		::System::Int32 BitSetOnDemand; // 0x44
		::System::Collections::Specialized::BitVector32* state; // 0x88
		::System::Type* componentClass; // 0x90
		::System::Type* type; // 0x98
		::System::Object* defaultValue; // 0xA0
		::System::Object* ambientValue; // 0xA8
		::System::Reflection::PropertyInfo* propInfo; // 0xB0
		::System::Reflection::MethodInfo* getMethod; // 0xB8
		::System::Reflection::MethodInfo* setMethod; // 0xC0
		::System::Reflection::MethodInfo* shouldSerializeMethod; // 0xC8
		::System::Reflection::MethodInfo* resetMethod; // 0xD0
		::System::ComponentModel::EventDescriptor* realChangedEvent; // 0xD8
		::System::ComponentModel::EventDescriptor* realIPropChangedEvent; // 0xE0
		::System::Type* receiverType; // 0xE8

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Type* arg, ::System::Reflection::PropertyInfo* arg, ::System::Reflection::MethodInfo* arg, ::System::Reflection::MethodInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Type*, ::System::Reflection::PropertyInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Type* arg, ::System::Type* arg, ::System::Reflection::MethodInfo* arg, ::System::Reflection::MethodInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::ComponentModel::PropertyDescriptor* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::ComponentModel::PropertyDescriptor*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* get_AmbientValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_AMBIENTVALUE_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptor* get_ChangedEventValue()
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_CHANGEDEVENTVALUE_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptor* get_IPropChangedEventValue()
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_IPROPCHANGEDEVENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_IPropChangedEventValue(::System::ComponentModel::EventDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::EventDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SET_IPROPCHANGEDEVENTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Object* get_DefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_GetMethodValue()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_GETMETHODVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExtender()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISEXTENDER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_ResetMethodValue()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_RESETMETHODVALUE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_SetMethodValue()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SETMETHODVALUE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_ShouldSerializeMethodValue()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SHOULDSERIALIZEMETHODVALUE_OFFSET))(nullptr);
		}

		::System::Void AddValueChanged(::System::Object* arg, ::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ExtenderCanResetValue(::System::ComponentModel::IExtenderProvider* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERCANRESETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* ExtenderGetReceiverType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETRECEIVERTYPE_OFFSET))(nullptr);
		}

		::System::Type* ExtenderGetType(::System::ComponentModel::IExtenderProvider* arg)
		{
			return (return (::System::Type*(*)(::System::ComponentModel::IExtenderProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* ExtenderGetValue(::System::ComponentModel::IExtenderProvider* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExtenderResetValue(::System::ComponentModel::IExtenderProvider* arg, ::System::Object* arg, ::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERRESETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ExtenderSetValue(::System::ComponentModel::IExtenderProvider* arg, ::System::Object* arg, ::System::Object* arg, ::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSETVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ExtenderShouldSerializeValue(::System::ComponentModel::IExtenderProvider* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSHOULDSERIALIZEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void FillAttributes(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnINotifyPropertyChanged(::System::Object* arg, ::System::ComponentModel::PropertyChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONINOTIFYPROPERTYCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnValueChanged(::System::Object* arg, ::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveValueChanged(::System::Object* arg, ::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SupportsChangeEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

