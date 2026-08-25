#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDLOGICHOLDER_FINDCARRIERSKILLS_OFFSET UNITYSDK_OFFSET(0x25A4F90)
#define INTERACTIVEWORLDRAIDLOGICHOLDER_ISFIXEDCARRIERSKILL_OFFSET UNITYSDK_OFFSET(0x25A5160)
#define INTERACTIVEWORLDRAIDLOGICHOLDER_FINDFIXEDCARRIERSKILLS_OFFSET UNITYSDK_OFFSET(0x25A52B0)
#define INTERACTIVEWORLDRAIDLOGICHOLDER_TRYGETLIVEPHASESEASONINFO_OFFSET UNITYSDK_OFFSET(0x25A5590)

	inline static constexpr unsigned int InteractiveWorldRaidLogicHolder_TypeDefinitionIndex = 335;

	class InteractiveWorldRaidLogicHolder : public Il2CppObject
	{
	public:
		Il2CppObject* FindCarrierSkills(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDLOGICHOLDER_FINDCARRIERSKILLS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFixedCarrierSkill(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDLOGICHOLDER_ISFIXEDCARRIERSKILL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindFixedCarrierSkills(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDLOGICHOLDER_FINDFIXEDCARRIERSKILLS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLivePhaseSeasonInfo(::System::Int64 arg, ::MX::Data::WorldRaidSeasonInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::WorldRaidSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDLOGICHOLDER_TRYGETLIVEPHASESEASONINFO_OFFSET))(arg, arg2, nullptr);
		}

	};

