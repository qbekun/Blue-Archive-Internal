#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParentSymbol; }

#define KEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CD990)
#define KEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x90CDC70)
#define KEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x90CDC90)
#define KEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90CDD10)

	inline static constexpr unsigned int Key_TypeDefinitionIndex = 34549;

	class Key : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _name; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* _parent; // 0x18

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + KEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(Key* arg)
		{
			return (return (::System::Boolean(*)(Key*, ::PVOID))((::PBYTE)hIl2Cpp + KEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + KEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEY_GETHASHCODE_OFFSET))(nullptr);
		}

	};

