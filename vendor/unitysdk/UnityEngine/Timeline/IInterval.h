#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_IINTERVAL_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IINTERVAL_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IInterval_TypeDefinitionIndex = 36282;

	class IInterval : public Il2CppObject
	{
	public:
		::System::Int64 get_intervalStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IINTERVAL_GET_INTERVALSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_intervalEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IINTERVAL_GET_INTERVALEND_OFFSET))(nullptr);
		}

	};
}

