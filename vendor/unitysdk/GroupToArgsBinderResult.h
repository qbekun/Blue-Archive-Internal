#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }

#define GROUPTOARGSBINDERRESULT_GET_BESTRESULT_OFFSET UNITYSDK_OFFSET(0x90B63B0)
#define GROUPTOARGSBINDERRESULT_SET_BESTRESULT_OFFSET UNITYSDK_OFFSET(0x90B63C0)
#define GROUPTOARGSBINDERRESULT_SET_AMBIGUOUSRESULT_OFFSET UNITYSDK_OFFSET(0x90B63D0)
#define GROUPTOARGSBINDERRESULT_GET_INACCESSIBLERESULT_OFFSET UNITYSDK_OFFSET(0x90B63E0)
#define GROUPTOARGSBINDERRESULT_GET_UNINFERABLERESULT_OFFSET UNITYSDK_OFFSET(0x90B63F0)
#define GROUPTOARGSBINDERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B16C0)
#define GROUPTOARGSBINDERRESULT_NUMBEROFERRORTYPES_OFFSET UNITYSDK_OFFSET(0x90B6400)
#define GROUPTOARGSBINDERRESULT_ISBETTERTHANCURRENT_OFFSET UNITYSDK_OFFSET(0x90B6470)
#define GROUPTOARGSBINDERRESULT_ISBETTERUNINFERABLERESULT_OFFSET UNITYSDK_OFFSET(0x90B5FB0)

	inline static constexpr unsigned int GroupToArgsBinderResult_TypeDefinitionIndex = 34472;

	class GroupToArgsBinderResult : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _BestResult_k__BackingField; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _AmbiguousResult_k__BackingField; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _InaccessibleResult_k__BackingField; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _UninferableResult_k__BackingField; // 0x28

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* get_BestResult()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_GET_BESTRESULT_OFFSET))(nullptr);
		}

		::System::Void set_BestResult(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_SET_BESTRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void set_AmbiguousResult(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_SET_AMBIGUOUSRESULT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* get_InaccessibleResult()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_GET_INACCESSIBLERESULT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* get_UninferableResult()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_GET_UNINFERABLERESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 NumberOfErrorTypes(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_NUMBEROFERRORTYPES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBetterThanCurrent(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_ISBETTERTHANCURRENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsBetterUninferableResult(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDERRESULT_ISBETTERUNINFERABLERESULT_OFFSET))(arg, nullptr);
		}

	};

