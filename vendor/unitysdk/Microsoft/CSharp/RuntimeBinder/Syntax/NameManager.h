#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class NameTable; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedName; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_GETKNOWNNAMES_OFFSET UNITYSDK_OFFSET(0x909AE40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_ADD_OFFSET UNITYSDK_OFFSET(0x908A860)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_ADD_OFFSET UNITYSDK_OFFSET(0x9095680)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_GETPREDEFINEDNAME_OFFSET UNITYSDK_OFFSET(0x908B9F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x909B440)

namespace Microsoft::CSharp::RuntimeBinder::Syntax
{
	inline static constexpr unsigned int NameManager_TypeDefinitionIndex = 34455;

	class NameManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_predefinedNames; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Syntax::NameTable* s_names; // 0x8

		::Microsoft::CSharp::RuntimeBinder::Syntax::NameTable* GetKnownNames()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::NameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_GETKNOWNNAMES_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* Add(::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_ADD_OFFSET))(str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* Add(::System::String* str, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_ADD_OFFSET))(str, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* GetPredefinedName(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_GETPREDEFINEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

