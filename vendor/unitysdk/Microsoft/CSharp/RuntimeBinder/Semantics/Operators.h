#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class OperatorKind; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_GETOPERATORBYNAME_OFFSET UNITYSDK_OFFSET(0x90B8830)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_GETINFO_OFFSET UNITYSDK_OFFSET(0x90B8A00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_OPERATOROFMETHODNAME_OFFSET UNITYSDK_OFFSET(0x90B8A90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x90B8B80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90B8C70)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int Operators_TypeDefinitionIndex = 34482;

	class Operators : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_operatorInfos; // 0x0
		Il2CppObject* s_operatorsByName; // 0x8

		Il2CppObject* GetOperatorByName()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_GETOPERATORBYNAME_OFFSET))(nullptr);
		}

		OperatorInfo* GetInfo(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind* arg)
		{
			return (return (OperatorInfo*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_GETINFO_OFFSET))(arg, nullptr);
		}

		::System::String* OperatorOfMethodName(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_OPERATOROFMETHODNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetDisplayName(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_GETDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_OPERATORS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

