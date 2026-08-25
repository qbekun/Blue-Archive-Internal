#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x9082710)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9082720)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x9082DF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET UNITYSDK_OFFSET(0x90832F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET UNITYSDK_OFFSET(0x9083300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9080160)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET UNITYSDK_OFFSET(0x9083590)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET UNITYSDK_OFFSET(0x90836C0)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpGetMemberBinder_TypeDefinitionIndex = 34429;

	class CSharpGetMemberBinder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _argumentInfo; // 0x28
		::System::Boolean _ResultIndexed_k__BackingField; // 0x30
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* _binder; // 0x38

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* get_BindingFlags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PopulateSymbolTableWithName(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsBinderThatCanHaveRefReceiver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.GetArgumentInfo(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPGETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET))(nullptr);
		}

	};
}

