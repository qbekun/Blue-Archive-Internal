#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9084560)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x9084590)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x90845A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x9084920)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET UNITYSDK_OFFSET(0x90849A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_ISCOMPOUNDASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x90849B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET UNITYSDK_OFFSET(0x90849C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_FALLBACKSETINDEX_OFFSET UNITYSDK_OFFSET(0x90849F0)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpSetIndexBinder_TypeDefinitionIndex = 34433;

	class CSharpSetIndexBinder : public Il2CppObject
	{
	public:
		::System::Boolean _IsCompoundAssignment_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _argumentInfo; // 0x20
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* _binder; // 0x28

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_NAME_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* get_BindingFlags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PopulateSymbolTableWithName(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsBinderThatCanHaveRefReceiver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompoundAssignment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_GET_ISCOMPOUNDASSIGNMENT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.GetArgumentInfo(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetIndex(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETINDEXBINDER_FALLBACKSETINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

