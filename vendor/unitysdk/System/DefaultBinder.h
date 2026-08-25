#pragma once
#include "../unitysdk.h"

#define SYSTEM_DEFAULTBINDER_BINDTOMETHOD_OFFSET UNITYSDK_OFFSET(0x93955F0)
#define SYSTEM_DEFAULTBINDER_BINDTOFIELD_OFFSET UNITYSDK_OFFSET(0x93985A0)
#define SYSTEM_DEFAULTBINDER_SELECTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9398C60)
#define SYSTEM_DEFAULTBINDER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x939A5E0)
#define SYSTEM_DEFAULTBINDER_REORDERARGUMENTARRAY_OFFSET UNITYSDK_OFFSET(0x939A650)
#define SYSTEM_DEFAULTBINDER_EXACTBINDING_OFFSET UNITYSDK_OFFSET(0x939A9D0)
#define SYSTEM_DEFAULTBINDER_EXACTPROPERTYBINDING_OFFSET UNITYSDK_OFFSET(0x939AE70)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFIC_OFFSET UNITYSDK_OFFSET(0x9399F50)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICTYPE_OFFSET UNITYSDK_OFFSET(0x9399B50)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICMETHOD_OFFSET UNITYSDK_OFFSET(0x9398340)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICFIELD_OFFSET UNITYSDK_OFFSET(0x9398A80)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICPROPERTY_OFFSET UNITYSDK_OFFSET(0x939A400)
#define SYSTEM_DEFAULTBINDER_COMPAREMETHODSIGANDNAME_OFFSET UNITYSDK_OFFSET(0x939B170)
#define SYSTEM_DEFAULTBINDER_GETHIERARCHYDEPTH_OFFSET UNITYSDK_OFFSET(0x939B2C0)
#define SYSTEM_DEFAULTBINDER_FINDMOSTDERIVEDNEWSLOTMETH_OFFSET UNITYSDK_OFFSET(0x939AC80)
#define SYSTEM_DEFAULTBINDER_REORDERPARAMS_OFFSET UNITYSDK_OFFSET(0x93981D0)
#define SYSTEM_DEFAULTBINDER_CREATEPARAMORDER_OFFSET UNITYSDK_OFFSET(0x9397D90)
#define SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x93998A0)
#define SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVEOBJECTTOTYPE_OFFSET UNITYSDK_OFFSET(0x9398090)
#define SYSTEM_DEFAULTBINDER_COMPAREMETHODSIG_OFFSET UNITYSDK_OFFSET(0x939B350)
#define SYSTEM_DEFAULTBINDER_SELECTMETHOD_OFFSET UNITYSDK_OFFSET(0x939B4A0)
#define SYSTEM_DEFAULTBINDER_CANCHANGEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x939BD00)
#define SYSTEM_DEFAULTBINDER_CANPRIMITIVEWIDEN_OFFSET UNITYSDK_OFFSET(0x939BD50)
#define SYSTEM_DEFAULTBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x939BE00)
#define SYSTEM_DEFAULTBINDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x939BE10)

namespace System
{
	inline static constexpr unsigned int DefaultBinder_TypeDefinitionIndex = 23925;

	class DefaultBinder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _primitiveConversions; // 0x0

		::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object[]&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object&* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::System::Object[]&*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_BINDTOMETHOD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_BINDTOFIELD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_SELECTPROPERTY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReorderArgumentArray(::System::Object[]&* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_REORDERARGUMENTARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodBase* ExactBinding(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_EXACTBINDING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Reflection::PropertyInfo* ExactPropertyBinding(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_EXACTPROPERTYBINDING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindMostSpecific(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFIC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindMostSpecificType(::System::Type* arg, ::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindMostSpecificMethod(::System::Reflection::MethodBase* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::System::Reflection::MethodBase* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::MethodBase*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::System::Reflection::MethodBase*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICMETHOD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindMostSpecificField(::System::Reflection::FieldInfo* arg, ::System::Reflection::FieldInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindMostSpecificProperty(::System::Reflection::PropertyInfo* arg, ::System::Reflection::PropertyInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareMethodSigAndName(::System::Reflection::MethodBase* arg, ::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_COMPAREMETHODSIGANDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHierarchyDepth(::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_GETHIERARCHYDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTDERIVEDNEWSLOTMETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReorderParams(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_REORDERPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CreateParamOrder(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CREATEPARAMORDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvertPrimitive(::System::RuntimeType* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertPrimitiveObjectToType(::System::Object* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVEOBJECTTOTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareMethodSig(::System::Reflection::MethodBase* arg, ::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_COMPAREMETHODSIG_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_SELECTMETHOD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanChangePrimitive(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANCHANGEPRIMITIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanPrimitiveWiden(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANPRIMITIVEWIDEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

