#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class Rotate; }

#define VALUESROTATE_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA37B110)
#define VALUESROTATE_ISSAME_OFFSET UNITYSDK_OFFSET(0xA37B120)
#define VALUESROTATE_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37B160)
#define VALUESROTATE_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37B250)
#define VALUESROTATE_LERP_OFFSET UNITYSDK_OFFSET(0xA37B310)
#define VALUESROTATE_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA37B3A0)
#define VALUESROTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37B4F0)

	inline static constexpr unsigned int ValuesRotate_TypeDefinitionIndex = 30204;

	class ValuesRotate : public <ReadAllAsyncInner>d__47
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESROTATE_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::UnityEngine::UIElements::Rotate* arg, ::UnityEngine::UIElements::Rotate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Rotate*, ::UnityEngine::UIElements::Rotate*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESROTATE_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESROTATE_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESROTATE_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Rotate* Lerp(::UnityEngine::UIElements::Rotate* arg, ::UnityEngine::UIElements::Rotate* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::UnityEngine::UIElements::Rotate*, ::UnityEngine::UIElements::Rotate*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESROTATE_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESROTATE_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESROTATE_.CTOR_OFFSET))(nullptr);
		}

	};

