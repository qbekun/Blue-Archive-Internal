#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9084E00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x9084E10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9084E20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x90852C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET UNITYSDK_OFFSET(0x9085340)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET UNITYSDK_OFFSET(0x9085350)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x9085380)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpUnaryOperationBinder_TypeDefinitionIndex = 34435;

	class CSharpUnaryOperationBinder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _argumentInfo; // 0x20
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* _binder; // 0x28

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_GET_NAME_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* get_BindingFlags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PopulateSymbolTableWithName(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsBinderThatCanHaveRefReceiver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.GetArgumentInfo(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPUNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET))(arg, arg, nullptr);
		}

	};
}

