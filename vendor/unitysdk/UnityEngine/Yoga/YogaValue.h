#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaUnit; }
namespace UnityEngine::Yoga { class YogaValue; }

#define UNITYENGINE_YOGA_YOGAVALUE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0xA44E520)
#define UNITYENGINE_YOGA_YOGAVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA44E530)
#define UNITYENGINE_YOGA_YOGAVALUE_POINT_OFFSET UNITYSDK_OFFSET(0xA44FE50)
#define UNITYENGINE_YOGA_YOGAVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA44FEE0)
#define UNITYENGINE_YOGA_YOGAVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA44FF30)
#define UNITYENGINE_YOGA_YOGAVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA44FFD0)
#define UNITYENGINE_YOGA_YOGAVALUE_AUTO_OFFSET UNITYSDK_OFFSET(0xA450000)
#define UNITYENGINE_YOGA_YOGAVALUE_PERCENT_OFFSET UNITYSDK_OFFSET(0xA450010)
#define UNITYENGINE_YOGA_YOGAVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA4500A0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaValue_TypeDefinitionIndex = 37363;

	class YogaValue : public Il2CppObject
	{
	public:
		::System::Single value; // 0x10
		::UnityEngine::Yoga::YogaUnit* unit; // 0x14

		::UnityEngine::Yoga::YogaUnit* get_Unit()
		{
			return (return (::UnityEngine::Yoga::YogaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Single get_Value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::Yoga::YogaValue* Point(::System::Single arg)
		{
			return (return (::UnityEngine::Yoga::YogaValue*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_POINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Yoga::YogaValue* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Yoga::YogaValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::UnityEngine::Yoga::YogaValue* Auto()
		{
			return (return (::UnityEngine::Yoga::YogaValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_AUTO_OFFSET))(nullptr);
		}

		::UnityEngine::Yoga::YogaValue* Percent(::System::Single arg)
		{
			return (return (::UnityEngine::Yoga::YogaValue*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_PERCENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Yoga::YogaValue* op_Implicit(::System::Single arg)
		{
			return (return (::UnityEngine::Yoga::YogaValue*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGAVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

