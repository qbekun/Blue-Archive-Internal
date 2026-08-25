#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class Scale; }

#define VALUESSCALE_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA37AD10)
#define VALUESSCALE_ISSAME_OFFSET UNITYSDK_OFFSET(0xA37AD20)
#define VALUESSCALE_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37AD50)
#define VALUESSCALE_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37AE40)
#define VALUESSCALE_LERP_OFFSET UNITYSDK_OFFSET(0xA37AEF0)
#define VALUESSCALE_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA37AF50)
#define VALUESSCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37B070)

	inline static constexpr unsigned int ValuesScale_TypeDefinitionIndex = 30203;

	class ValuesScale : public <ReadAllAsync>d__48
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESSCALE_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::UnityEngine::UIElements::Scale* arg, ::UnityEngine::UIElements::Scale* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Scale*, ::UnityEngine::UIElements::Scale*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESSCALE_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESSCALE_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESSCALE_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Scale* Lerp(::UnityEngine::UIElements::Scale* arg, ::UnityEngine::UIElements::Scale* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::UnityEngine::UIElements::Scale*, ::UnityEngine::UIElements::Scale*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESSCALE_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESSCALE_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESSCALE_.CTOR_OFFSET))(nullptr);
		}

	};

