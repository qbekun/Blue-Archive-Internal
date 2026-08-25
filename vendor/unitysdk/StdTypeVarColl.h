#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeParameterType; }

#define STDTYPEVARCOLL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90DFE20)
#define STDTYPEVARCOLL_GETTYPEVARSYM_OFFSET UNITYSDK_OFFSET(0x90DF380)

	inline static constexpr unsigned int StdTypeVarColl_TypeDefinitionIndex = 34605;

	class StdTypeVarColl : public Il2CppObject
	{
	public:
		Il2CppObject* prgptvs; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STDTYPEVARCOLL_.CTOR_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* GetTypeVarSym(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STDTYPEVARCOLL_GETTYPEVARSYM_OFFSET))(arg, arg, nullptr);
		}

	};

