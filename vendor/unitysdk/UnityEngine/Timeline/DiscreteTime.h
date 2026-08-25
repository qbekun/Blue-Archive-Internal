#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class DiscreteTime; }

#define UNITYENGINE_TIMELINE_DISCRETETIME_GET_TICKVALUE_OFFSET UNITYSDK_OFFSET(0xA1A5020)
#define UNITYENGINE_TIMELINE_DISCRETETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A5030)
#define UNITYENGINE_TIMELINE_DISCRETETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A5040)
#define UNITYENGINE_TIMELINE_DISCRETETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA195330)
#define UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKBEFORE_OFFSET UNITYSDK_OFFSET(0xA192F80)
#define UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKAFTER_OFFSET UNITYSDK_OFFSET(0xA1A3420)
#define UNITYENGINE_TIMELINE_DISCRETETIME_FROMTICKS_OFFSET UNITYSDK_OFFSET(0xA1A5180)
#define UNITYENGINE_TIMELINE_DISCRETETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA1A5190)
#define UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1A5210)
#define UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1A5220)
#define UNITYENGINE_TIMELINE_DISCRETETIME_DOUBLETODISCRETETIME_OFFSET UNITYSDK_OFFSET(0xA1A50A0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_INTTODISCRETETIME_OFFSET UNITYSDK_OFFSET(0xA1A5130)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TODOUBLE_OFFSET UNITYSDK_OFFSET(0xA1A52B0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xA192F90)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xA193210)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA192EC0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA1A52C0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA1A52D0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xA192F70)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xA1A5320)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xA198300)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1A5330)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1A5350)
#define UNITYENGINE_TIMELINE_DISCRETETIME_MAX_OFFSET UNITYSDK_OFFSET(0xA195490)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETNEARESTTICK_OFFSET UNITYSDK_OFFSET(0xA1A5370)
#define UNITYENGINE_TIMELINE_DISCRETETIME_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1A53C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int DiscreteTime_TypeDefinitionIndex = 36280;

	class DiscreteTime : public Il2CppObject
	{
	public:
		::System::Double k_Tick; // 0x0
		::UnityEngine::Timeline::DiscreteTime* kMaxTime; // 0x0
		::System::Int64 m_DiscreteTime; // 0x10

		::System::Double get_tickValue()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GET_TICKVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* OneTickBefore()
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKBEFORE_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* OneTickAfter()
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKAFTER_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* FromTicks(::System::Int64 arg)
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_FROMTICKS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int64 DoubleToDiscreteTime(::System::Double arg)
		{
			return (return (::System::Int64(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_DOUBLETODISCRETETIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 IntToDiscreteTime(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_INTTODISCRETETIME_OFFSET))(arg, nullptr);
		}

		::System::Double ToDouble(::System::Int64 arg)
		{
			return (return (::System::Double(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Double op_Explicit(::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* op_Explicit(::System::Double arg)
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* op_Implicit(::System::Int32 arg)
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Timeline::DiscreteTime* arg, ::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime*, ::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Timeline::DiscreteTime* arg, ::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime*, ::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::UnityEngine::Timeline::DiscreteTime* arg, ::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime*, ::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::UnityEngine::Timeline::DiscreteTime* arg, ::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime*, ::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* op_Subtraction(::UnityEngine::Timeline::DiscreteTime* arg, ::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::UnityEngine::Timeline::DiscreteTime*, ::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GETHASHCODE_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* Max(::UnityEngine::Timeline::DiscreteTime* arg, ::UnityEngine::Timeline::DiscreteTime* arg)
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::UnityEngine::Timeline::DiscreteTime*, ::UnityEngine::Timeline::DiscreteTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetNearestTick(::System::Double arg)
		{
			return (return (::System::Int64(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GETNEARESTTICK_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

