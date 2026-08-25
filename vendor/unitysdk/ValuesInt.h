#pragma once
#include "unitysdk.h"

#define VALUESINT_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA379310)
#define VALUESINT_ISSAME_OFFSET UNITYSDK_OFFSET(0xA379320)
#define VALUESINT_LERP_OFFSET UNITYSDK_OFFSET(0xA379330)
#define VALUESINT_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA379450)
#define VALUESINT_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA3796A0)
#define VALUESINT_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA379770)
#define VALUESINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA379810)

	inline static constexpr unsigned int ValuesInt_TypeDefinitionIndex = 30195;

	class ValuesInt : public <ReadAsync>d__40
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESINT_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESINT_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Lerp(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESINT_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESINT_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESINT_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESINT_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESINT_.CTOR_OFFSET))(nullptr);
		}

	};

