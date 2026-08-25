#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_GETDYNAMICMEMBERNAMES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYGETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYSETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYSETMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DynamicProxy`1_TypeDefinitionIndex = 31829;

	class DynamicProxy`1 : public Il2CppObject
	{
	public:
		Il2CppObject* GetDynamicMemberNames(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_GETDYNAMICMEMBERNAMES_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryBinaryOperation(Il2CppObject* arg, ::System::Dynamic::BinaryOperationBinder* arg, ::System::Object* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::BinaryOperationBinder*, ::System::Object*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYBINARYOPERATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryConvert(Il2CppObject* arg, ::System::Dynamic::ConvertBinder* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::ConvertBinder*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYCONVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryCreateInstance(Il2CppObject* arg, ::System::Dynamic::CreateInstanceBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::CreateInstanceBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYCREATEINSTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryDeleteIndex(Il2CppObject* arg, ::System::Dynamic::DeleteIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::DeleteIndexBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYDELETEINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryDeleteMember(Il2CppObject* arg, ::System::Dynamic::DeleteMemberBinder* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::DeleteMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYDELETEMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetIndex(Il2CppObject* arg, ::System::Dynamic::GetIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::GetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYGETINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetMember(Il2CppObject* arg, ::System::Dynamic::GetMemberBinder* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::GetMemberBinder*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYGETMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryInvoke(Il2CppObject* arg, ::System::Dynamic::InvokeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::InvokeBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYINVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryInvokeMember(Il2CppObject* arg, ::System::Dynamic::InvokeMemberBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYINVOKEMEMBER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrySetIndex(Il2CppObject* arg, ::System::Dynamic::SetIndexBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::SetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYSETINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrySetMember(Il2CppObject* arg, ::System::Dynamic::SetMemberBinder* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::SetMemberBinder*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYSETMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryUnaryOperation(Il2CppObject* arg, ::System::Dynamic::UnaryOperationBinder* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Dynamic::UnaryOperationBinder*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_TRYUNARYOPERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICPROXY`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

