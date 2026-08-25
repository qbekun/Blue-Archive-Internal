#pragma once
#include "../unitysdk.h"

#define ANIMANCER_EASING_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x4B5600)
#define ANIMANCER_EASING_GETDERIVATIVEDELEGATE_OFFSET UNITYSDK_OFFSET(0x4B6160)
#define ANIMANCER_EASING_GETRANGEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x4B68C0)
#define ANIMANCER_EASING_GETRANGEDDERIVATIVEDELEGATE_OFFSET UNITYSDK_OFFSET(0x4B70F0)
#define ANIMANCER_EASING_LERP_OFFSET UNITYSDK_OFFSET(0x4B7850)
#define ANIMANCER_EASING_UNLERP_OFFSET UNITYSDK_OFFSET(0x4B7860)
#define ANIMANCER_EASING_RESCALE_OFFSET UNITYSDK_OFFSET(0x4B7880)
#define ANIMANCER_EASING_LINEAR_OFFSET UNITYSDK_OFFSET(0x4B78E0)
#define ANIMANCER_EASING_LINEARDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B78F0)
#define ANIMANCER_EASING_LINEAR_OFFSET UNITYSDK_OFFSET(0x4B7900)
#define ANIMANCER_EASING_LINEARDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B7910)

namespace Animancer
{
	inline static constexpr unsigned int Easing_TypeDefinitionIndex = 35192;

	class Easing : public Il2CppObject
	{
	public:
		::System::Single Ln2; // 0x0
		::System::Int32 FunctionCount; // 0x0
		::Il2CppArray<::System::Object*>* _FunctionDelegates; // 0x0
		::Il2CppArray<::System::Object*>* _DerivativeDelegates; // 0x8
		::Il2CppArray<::System::Object*>* _RangedFunctionDelegates; // 0x10
		::Il2CppArray<::System::Object*>* _RangedDerivativeDelegates; // 0x18

		Il2CppObject* GetDelegate(Function* arg)
		{
			return (return (Il2CppObject*(*)(Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_GETDELEGATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDerivativeDelegate(Function* arg)
		{
			return (return (Il2CppObject*(*)(Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_GETDERIVATIVEDELEGATE_OFFSET))(arg, nullptr);
		}

		RangedDelegate* GetRangedDelegate(Function* arg)
		{
			return (return (RangedDelegate*(*)(Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_GETRANGEDDELEGATE_OFFSET))(arg, nullptr);
		}

		RangedDelegate* GetRangedDerivativeDelegate(Function* arg)
		{
			return (return (RangedDelegate*(*)(Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_GETRANGEDDERIVATIVEDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Single Lerp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single UnLerp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_UNLERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ReScale(::System::Single arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_RESCALE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single Linear(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_LINEAR_OFFSET))(arg, nullptr);
		}

		::System::Single LinearDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_LINEARDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single Linear(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_LINEAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single LinearDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EASING_LINEARDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

