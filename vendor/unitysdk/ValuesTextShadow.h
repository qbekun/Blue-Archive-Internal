#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class TextShadow; }

#define VALUESTEXTSHADOW_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA37A760)
#define VALUESTEXTSHADOW_ISSAME_OFFSET UNITYSDK_OFFSET(0xA37A770)
#define VALUESTEXTSHADOW_LERP_OFFSET UNITYSDK_OFFSET(0xA37A870)
#define VALUESTEXTSHADOW_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA37A980)
#define VALUESTEXTSHADOW_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37AAA0)
#define VALUESTEXTSHADOW_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37ABA0)
#define VALUESTEXTSHADOW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37AC70)

	inline static constexpr unsigned int ValuesTextShadow_TypeDefinitionIndex = 30202;

	class ValuesTextShadow : public ::System::Net::WebResponseStream
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTEXTSHADOW_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::TextShadow* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::TextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTEXTSHADOW_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::TextShadow* Lerp(::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::TextShadow* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::TextShadow*(*)(::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::TextShadow*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTEXTSHADOW_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTEXTSHADOW_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTEXTSHADOW_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTEXTSHADOW_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTEXTSHADOW_.CTOR_OFFSET))(nullptr);
		}

	};

