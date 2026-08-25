#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GETARGUMENTINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int ICSharpBinder_TypeDefinitionIndex = 34439;

	class ICSharpBinder : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* GetArgumentInfo(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GETARGUMENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBinderThatCanHaveRefReceiver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET))(nullptr);
		}

		::System::Void PopulateSymbolTableWithName(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* get_BindingFlags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

	};
}

