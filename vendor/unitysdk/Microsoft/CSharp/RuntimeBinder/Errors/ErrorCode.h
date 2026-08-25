#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrorCode; }

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrorCode_TypeDefinitionIndex = 34621;

	class ErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadBinaryOps; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadIndexLHS; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadIndexCount; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadUnaryOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NoImplicitConv; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NoExplicitConv; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_ConstOutOfRange; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AmbigBinaryOps; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AmbigUnaryOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_ValueCantBeNull; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NoSuchMember; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_ObjectRequired; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AmbigCall; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadAccess; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AssgLvalueExpected; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NoConstructors; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_PropertyLacksGet; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_ObjectProhibited; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AssgReadonly; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AssgReadonlyStatic; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AssgReadonlyProp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_UnsafeNeeded; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadBoolOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_MustHaveOpTF; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_ConstOutOfRangeChecked; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AmbigMember; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NoImplicitConvCast; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_InaccessibleGetter; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_InaccessibleSetter; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadArity; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_TypeArgsNotAllowed; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_HasNoTypeVars; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NewConstraintNotSatisfied; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_GenericConstraintNotSatisfiedRefType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_GenericConstraintNotSatisfiedNullableEnum; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_GenericConstraintNotSatisfiedNullableInterface; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_GenericConstraintNotSatisfiedValType; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_CantInferMethTypeArgs; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_RefConstraintNotSatisfied; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_ValConstraintNotSatisfied; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_AmbigUDConv; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BindToBogus; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_CantCallSpecialMethod; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_ConvertToStaticClass; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_IncrementLvalueExpected; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadArgCount; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadArgTypes; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadProtectedAccess; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BindToBogusProp2; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BindToBogusProp1; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadDelArgCount; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadDelArgTypes; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadCtorArgCount; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadNamedArgument; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_DuplicateNamedArgument; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NamedArgumentUsedInPositional; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadNamedArgumentForDelegateInvoke; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_NonInvocableMemberCalled; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* ERR_BadNonTrailingNamedArgument; // 0x0

	};
}

