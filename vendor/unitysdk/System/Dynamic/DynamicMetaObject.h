#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B57B0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B5880)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B58B0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RESTRICTIONS_OFFSET UNITYSDK_OFFSET(0x96B58C0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x96B3E60)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x96B3EF0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x96B58D0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0x96B4020)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCONVERT_OFFSET UNITYSDK_OFFSET(0x96B5A30)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETMEMBER_OFFSET UNITYSDK_OFFSET(0x96B5AA0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETMEMBER_OFFSET UNITYSDK_OFFSET(0x96B5B00)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x96B5B70)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETINDEX_OFFSET UNITYSDK_OFFSET(0x96B5BE0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETINDEX_OFFSET UNITYSDK_OFFSET(0x96B5C50)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x96B5CD0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x96B5D50)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKE_OFFSET UNITYSDK_OFFSET(0x96B5DC0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x96B5E30)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x96B5EB0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x96B5F10)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GETDYNAMICMEMBERNAMES_OFFSET UNITYSDK_OFFSET(0x96B5F90)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GETEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x96B6030)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x96B6160)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96B63E0)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicMetaObject_TypeDefinitionIndex = 33547;

	class DynamicMetaObject : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EmptyMetaObjects; // 0x0
		::System::Object* s_noValueSentinel; // 0x8
		::System::Object* _value; // 0x10
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x18
		::System::Dynamic::BindingRestrictions* _Restrictions_k__BackingField; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Dynamic::BindingRestrictions* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Dynamic::BindingRestrictions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Dynamic::BindingRestrictions* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Dynamic::BindingRestrictions*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_EXPRESSION_OFFSET))(nullptr);
		}

		::System::Dynamic::BindingRestrictions* get_Restrictions()
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RESTRICTIONS_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_HASVALUE_OFFSET))(nullptr);
		}

		::System::Type* get_RuntimeType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RUNTIMETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_LimitType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_LIMITTYPE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindConvert(::System::Dynamic::ConvertBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::ConvertBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::GetMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DeleteMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindGetIndex(::System::Dynamic::GetIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::GetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindSetIndex(::System::Dynamic::SetIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::SetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteIndex(::System::Dynamic::DeleteIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DeleteIndexBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKEMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindInvoke(::System::Dynamic::InvokeBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::InvokeBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindCreateInstance(::System::Dynamic::CreateInstanceBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::CreateInstanceBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindUnaryOperation(::System::Dynamic::UnaryOperationBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::UnaryOperationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDUNARYOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindBinaryOperation(::System::Dynamic::BinaryOperationBinder* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::BinaryOperationBinder*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDBINARYOPERATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetDynamicMemberNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GETDYNAMICMEMBERNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExpressions(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GETEXPRESSIONS_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Create(::System::Object* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Object*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

