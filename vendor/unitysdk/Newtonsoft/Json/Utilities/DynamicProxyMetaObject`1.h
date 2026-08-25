#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_ISOVERRIDDEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDGETMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDSETMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDGETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDSETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GET_NOARGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETARGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETARGARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETARGARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CONSTANT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CALLMETHODWITHRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BUILDCALLMETHODWITHRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CALLMETHODRETURNLAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CALLMETHODNORESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETRESTRICTIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETDYNAMICMEMBERNAMES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DynamicProxyMetaObject`1_TypeDefinitionIndex = 31845;

	class DynamicProxyMetaObject`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _proxy; // 0x0

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsOverridden(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_ISOVERRIDDEN_OFFSET))(str, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::GetMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDGETMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDSETMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DeleteMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDDELETEMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindConvert(::System::Dynamic::ConvertBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::ConvertBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDINVOKEMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindCreateInstance(::System::Dynamic::CreateInstanceBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::CreateInstanceBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDCREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindInvoke(::System::Dynamic::InvokeBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::InvokeBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindBinaryOperation(::System::Dynamic::BinaryOperationBinder* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::BinaryOperationBinder*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDBINARYOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindUnaryOperation(::System::Dynamic::UnaryOperationBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::UnaryOperationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDUNARYOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindGetIndex(::System::Dynamic::GetIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::GetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDGETINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindSetIndex(::System::Dynamic::SetIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::SetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDSETINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteIndex(::System::Dynamic::DeleteIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DeleteIndexBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BINDDELETEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_NoArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GET_NOARGS_OFFSET))(nullptr);
		}

		Il2CppObject* GetArgs(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETARGS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArgArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETARGARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArgArray(::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETARGARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::ConstantExpression* Constant(::System::Dynamic::DynamicMetaObjectBinder* arg)
		{
			return (return (::System::Linq::Expressions::ConstantExpression*(*)(::System::Dynamic::DynamicMetaObjectBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CONSTANT_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* CallMethodWithResult(::System::String* str, ::System::Dynamic::DynamicMetaObjectBinder* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::String*, ::System::Dynamic::DynamicMetaObjectBinder*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CALLMETHODWITHRESULT_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BuildCallMethodWithResult(::System::String* str, ::System::Dynamic::DynamicMetaObjectBinder* arg, Il2CppObject* arg, ::System::Dynamic::DynamicMetaObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::String*, ::System::Dynamic::DynamicMetaObjectBinder*, Il2CppObject*, ::System::Dynamic::DynamicMetaObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_BUILDCALLMETHODWITHRESULT_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* CallMethodReturnLast(::System::String* str, ::System::Dynamic::DynamicMetaObjectBinder* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::String*, ::System::Dynamic::DynamicMetaObjectBinder*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CALLMETHODRETURNLAST_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* CallMethodNoResult(::System::String* str, ::System::Dynamic::DynamicMetaObjectBinder* arg, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::String*, ::System::Dynamic::DynamicMetaObjectBinder*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_CALLMETHODNORESULT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Dynamic::BindingRestrictions* GetRestrictions()
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETRESTRICTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* GetDynamicMemberNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXYMETAOBJECT`1_GETDYNAMICMEMBERNAMES_OFFSET))(nullptr);
		}

	};
}

