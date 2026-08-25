#pragma once
#include "unitysdk.h"

#define VALUESDISCRETE`1_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUESDISCRETE`1_ISSAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUESDISCRETE`1_LERP_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUESDISCRETE`1_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUESDISCRETE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ValuesDiscrete`1_TypeDefinitionIndex = 30198;

	class ValuesDiscrete`1 : public <WriteChunkTrailer>d__40
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x0

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESDISCRETE`1_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESDISCRETE`1_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Lerp(Il2CppObject* arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESDISCRETE`1_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESDISCRETE`1_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESDISCRETE`1_.CTOR_OFFSET))(nullptr);
		}

	};

