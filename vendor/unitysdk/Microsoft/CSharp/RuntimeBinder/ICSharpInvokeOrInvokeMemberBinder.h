#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpCallFlags; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_STATICCALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_RESULTDISCARDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_TYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int ICSharpInvokeOrInvokeMemberBinder_TypeDefinitionIndex = 34440;

	class ICSharpInvokeOrInvokeMemberBinder : public Il2CppObject
	{
	public:
		::System::Boolean get_StaticCall()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_STATICCALL_OFFSET))(nullptr);
		}

		::System::Boolean get_ResultDiscarded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_RESULTDISCARDED_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags* get_Flags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpCallFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_FLAGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TypeArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ICSHARPINVOKEORINVOKEMEMBERBINDER_GET_TYPEARGUMENTS_OFFSET))(nullptr);
		}

	};
}

