#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define VALUESCOLOR_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA379CD0)
#define VALUESCOLOR_ISSAME_OFFSET UNITYSDK_OFFSET(0xA379CE0)
#define VALUESCOLOR_LERP_OFFSET UNITYSDK_OFFSET(0xA379EF0)
#define VALUESCOLOR_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA379F10)
#define VALUESCOLOR_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA379FA0)
#define VALUESCOLOR_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37A090)
#define VALUESCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37A140)

	inline static constexpr unsigned int ValuesColor_TypeDefinitionIndex = 30197;

	class ValuesColor : public ::System::Net::WebRequestStream
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLOR_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLOR_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* Lerp(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLOR_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLOR_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLOR_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLOR_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLOR_.CTOR_OFFSET))(nullptr);
		}

	};

