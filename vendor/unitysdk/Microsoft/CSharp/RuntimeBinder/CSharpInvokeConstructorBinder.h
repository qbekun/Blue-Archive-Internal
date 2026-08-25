#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinder; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKECONSTRUCTORBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x9084070)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpInvokeConstructorBinder_TypeDefinitionIndex = 34431;

	class CSharpInvokeConstructorBinder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _argumentInfo; // 0x18
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinder* _binder; // 0x20

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPINVOKECONSTRUCTORBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

