#pragma once
#include "unitysdk.h"

#define VALUESFLOAT_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA33E130)
#define VALUESFLOAT_ISSAME_OFFSET UNITYSDK_OFFSET(0xA33E140)
#define VALUESFLOAT_LERP_OFFSET UNITYSDK_OFFSET(0xA33E1D0)
#define VALUESFLOAT_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA33E1E0)
#define VALUESFLOAT_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA33E270)
#define VALUESFLOAT_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA33E310)
#define VALUESFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33E390)

	inline static constexpr unsigned int ValuesFloat_TypeDefinitionIndex = 30194;

	class ValuesFloat : public <InitReadAsync>d__52
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFLOAT_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESFLOAT_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Lerp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESFLOAT_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFLOAT_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFLOAT_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESFLOAT_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESFLOAT_.CTOR_OFFSET))(nullptr);
		}

	};

