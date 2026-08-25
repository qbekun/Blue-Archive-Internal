#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpCallFlags; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x9084150)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9084160)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x9084240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET UNITYSDK_OFFSET(0x90842A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_STATICCALL_OFFSET UNITYSDK_OFFSET(0x90842B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x90842F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_CALLINGCONTEXT_OFFSET UNITYSDK_OFFSET(0x9084300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_TYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9084310)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GETARGUMENTINFO_OFFSET UNITYSDK_OFFSET(0x9084320)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_ARGUMENTINFOARRAY_OFFSET UNITYSDK_OFFSET(0x9084350)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_RESULTDISCARDED_OFFSET UNITYSDK_OFFSET(0x90843C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x90843D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_FALLBACKINVOKE_OFFSET UNITYSDK_OFFSET(0x90844C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET UNITYSDK_OFFSET(0x9084550)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpInvokeMemberBinder_TypeDefinitionIndex = 34432;

	class CSharpInvokeMemberBinder : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* _Flags_k__BackingField; // 0x28
		::System::Type* _CallingContext_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _TypeArguments_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _argumentInfo; // 0x40
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* _binder; // 0x48

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* get_BindingFlags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PopulateSymbolTableWithName(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsBinderThatCanHaveRefReceiver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET))(nullptr);
		}

		::System::Boolean Microsoft.CSharp.RuntimeBinder.ICSharpInvokeOrInvokeMemberBinder.get_StaticCall()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_STATICCALL_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* get_Flags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Type* get_CallingContext()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_CALLINGCONTEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TypeArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GET_TYPEARGUMENTS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* GetArgumentInfo(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_GETARGUMENTINFO_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ArgumentInfoArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_ARGUMENTINFOARRAY_OFFSET))(nullptr);
		}

		::System::Boolean Microsoft.CSharp.RuntimeBinder.ICSharpInvokeOrInvokeMemberBinder.get_ResultDiscarded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_RESULTDISCARDED_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_FALLBACKINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET))(nullptr);
		}

	};
}

