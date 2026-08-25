#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpCallFlags; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x90836D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x90836E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x9083840)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET UNITYSDK_OFFSET(0x9083D40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_STATICCALL_OFFSET UNITYSDK_OFFSET(0x9083D50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET UNITYSDK_OFFSET(0x9083D90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_TYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9083DC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9083E60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET UNITYSDK_OFFSET(0x9083E70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_RESULTDISCARDED_OFFSET UNITYSDK_OFFSET(0x9083EA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9083EB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_FALLBACKINVOKE_OFFSET UNITYSDK_OFFSET(0x9083F80)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpInvokeBinder_TypeDefinitionIndex = 34430;

	class CSharpInvokeBinder : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* _flags; // 0x20
		::Il2CppArray<::System::Object*>* _argumentInfo; // 0x28
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* _binder; // 0x30

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* get_BindingFlags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PopulateSymbolTableWithName(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsBinderThatCanHaveRefReceiver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET))(nullptr);
		}

		::System::Boolean Microsoft.CSharp.RuntimeBinder.ICSharpInvokeOrInvokeMemberBinder.get_StaticCall()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_STATICCALL_OFFSET))(nullptr);
		}

		::System::String* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Microsoft.CSharp.RuntimeBinder.ICSharpInvokeOrInvokeMemberBinder.get_TypeArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_TYPEARGUMENTS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* Microsoft.CSharp.RuntimeBinder.ICSharpInvokeOrInvokeMemberBinder.get_Flags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_FLAGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.GetArgumentInfo(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Microsoft.CSharp.RuntimeBinder.ICSharpInvokeOrInvokeMemberBinder.get_ResultDiscarded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPINVOKEORINVOKEMEMBERBINDER.GET_RESULTDISCARDED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* arg, ::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags*, ::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKEBINDER_FALLBACKINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

