#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class ICSharpBinder; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder { class ICSharpInvokeOrInvokeMemberBinder; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_BIND_OFFSET UNITYSDK_OFFSET(0x90803C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_VALIDATEBINDARGUMENT_OFFSET UNITYSDK_OFFSET(0x9081CA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_VALIDATEBINDARGUMENT_OFFSET UNITYSDK_OFFSET(0x9081DC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISTYPEOFSTATICCALL_OFFSET UNITYSDK_OFFSET(0x9081EB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISCOMOBJECT_OFFSET UNITYSDK_OFFSET(0x9081F60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x9081FC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISDYNAMICALLYTYPEDRUNTIMEPROXY_OFFSET UNITYSDK_OFFSET(0x9081FD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_DEDUCEARGUMENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x90814E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CONVERTRESULT_OFFSET UNITYSDK_OFFSET(0x90817F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_GETTYPEFORERRORMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x9081B70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISINCREMENTORDECREMENTACTIONONLOCAL_OFFSET UNITYSDK_OFFSET(0x9081480)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CREATECALLINFO_OFFSET UNITYSDK_OFFSET(0x9082110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_GETCLROPERATORNAME_OFFSET UNITYSDK_OFFSET(0x90822A0)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int BinderHelper_TypeDefinitionIndex = 34424;

	class BinderHelper : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* s_DoubleIsNaN; // 0x0
		::System::Reflection::MethodInfo* s_SingleIsNaN; // 0x8

		::System::Dynamic::DynamicMetaObject* Bind(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_BIND_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ValidateBindArgument(::System::Dynamic::DynamicMetaObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Dynamic::DynamicMetaObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_VALIDATEBINDARGUMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void ValidateBindArgument(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_VALIDATEBINDARGUMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsTypeOfStaticCall(::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISTYPEOFSTATICCALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsComObject(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISCOMOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTransparentProxy(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISTRANSPARENTPROXY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDynamicallyTypedRuntimeProxy(::System::Dynamic::DynamicMetaObject* arg, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Dynamic::DynamicMetaObject*, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISDYNAMICALLYTYPEDRUNTIMEPROXY_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::BindingRestrictions* DeduceArgumentRestriction(::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder* arg, ::System::Dynamic::DynamicMetaObject* arg, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* arg)
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::System::Int32, ::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder*, ::System::Dynamic::DynamicMetaObject*, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_DEDUCEARGUMENTRESTRICTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ConvertResult(::System::Linq::Expressions::Expression* arg, ::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CONVERTRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetTypeForErrorMetaObject(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_GETTYPEFORERRORMETAOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsIncrementOrDecrementActionOnLocal(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_ISINCREMENTORDECREMENTACTIONONLOCAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Cons(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CONS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Cons(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_TOARRAY_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::CallInfo* CreateCallInfo(Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (::System::Dynamic::CallInfo*(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_CREATECALLINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetCLROperatorName(::System::Linq::Expressions::ExpressionType* arg)
		{
			return (return (::System::String*(*)(::System::Linq::Expressions::ExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDERHELPER_GETCLROPERATORNAME_OFFSET))(arg, nullptr);
		}

	};
}

