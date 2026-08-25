#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class TimeValue; }
namespace UnityEngine::UIElements { class Angle; }
namespace UnityEngine::UIElements::StyleSheets { class Dimension; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA36B9F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOLENGTH_OFFSET UNITYSDK_OFFSET(0xA36BA00)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOTIME_OFFSET UNITYSDK_OFFSET(0xA36BA40)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOANGLE_OFFSET UNITYSDK_OFFSET(0xA36BA80)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA36BB10)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA36BB40)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA36BB60)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA36BBE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA36BC20)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int Dimension_TypeDefinitionIndex = 30800;

	class Dimension : public Il2CppObject
	{
	public:
		Unit* unit; // 0x10
		::System::Single value; // 0x14

		::System::Void .ctor(::System::Single arg, Unit* arg)
		{
			((::System::Void(*)(::System::Single, Unit*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Length* ToLength()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOLENGTH_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TimeValue* ToTime()
		{
			return (return (::UnityEngine::UIElements::TimeValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOTIME_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Angle* ToAngle()
		{
			return (return (::UnityEngine::UIElements::Angle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOANGLE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension* arg, ::UnityEngine::UIElements::StyleSheets::Dimension* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::Dimension*, ::UnityEngine::UIElements::StyleSheets::Dimension*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleSheets::Dimension* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::Dimension*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

