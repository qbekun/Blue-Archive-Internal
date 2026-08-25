#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x9084B10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9084B20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x9084B90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET UNITYSDK_OFFSET(0x9084C00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_GET_ISCOMPOUNDASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x9084C10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET UNITYSDK_OFFSET(0x9084C20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9080300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET UNITYSDK_OFFSET(0x9084C50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET UNITYSDK_OFFSET(0x9084DF0)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpSetMemberBinder_TypeDefinitionIndex = 34434;

	class CSharpSetMemberBinder : public Il2CppObject
	{
	public:
		::System::Boolean _IsCompoundAssignment_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _argumentInfo; // 0x30
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* _binder; // 0x38

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* get_BindingFlags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::RuntimeBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PopulateSymbolTableWithName(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_POPULATESYMBOLTABLEWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsBinderThatCanHaveRefReceiver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_GET_ISBINDERTHATCANHAVEREFRECEIVER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompoundAssignment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_GET_ISCOMPOUNDASSIGNMENT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.GetArgumentInfo(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GETARGUMENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Microsoft.CSharp.RuntimeBinder.ICSharpBinder.get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPSETMEMBERBINDER_MICROSOFT.CSHARP.RUNTIMEBINDER.ICSHARPBINDER.GET_NAME_OFFSET))(nullptr);
		}

	};
}

