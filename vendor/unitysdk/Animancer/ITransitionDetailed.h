#pragma once
#include "../unitysdk.h"

#define ANIMANCER_ITRANSITIONDETAILED_SET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITIONDETAILED_GET_MAXIMUMDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITIONDETAILED_GET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITIONDETAILED_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITIONDETAILED_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITIONDETAILED_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITIONDETAILED_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ITransitionDetailed_TypeDefinitionIndex = 35155;

	class ITransitionDetailed : public Il2CppObject
	{
	public:
		::System::Void set_NormalizedStartTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITIONDETAILED_SET_NORMALIZEDSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaximumDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITIONDETAILED_GET_MAXIMUMDURATION_OFFSET))(nullptr);
		}

		::System::Single get_NormalizedStartTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITIONDETAILED_GET_NORMALIZEDSTARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITIONDETAILED_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITIONDETAILED_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITIONDETAILED_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITIONDETAILED_GET_SPEED_OFFSET))(nullptr);
		}

	};
}

