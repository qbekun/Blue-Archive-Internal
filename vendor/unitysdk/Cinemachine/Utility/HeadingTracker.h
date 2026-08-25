#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define CINEMACHINE_UTILITY_HEADINGTRACKER_GETRELIABLEHEADING_OFFSET UNITYSDK_OFFSET(0x2884F60)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_CLEARHISTORY_OFFSET UNITYSDK_OFFSET(0x2885140)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_POPBOTTOM_OFFSET UNITYSDK_OFFSET(0x28851A0)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_ADD_OFFSET UNITYSDK_OFFSET(0x28853B0)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_GET_FILTERSIZE_OFFSET UNITYSDK_OFFSET(0x2885340)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_DECAY_OFFSET UNITYSDK_OFFSET(0x2885360)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2885600)
#define CINEMACHINE_UTILITY_HEADINGTRACKER_DECAYHISTORY_OFFSET UNITYSDK_OFFSET(0x2885710)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int HeadingTracker_TypeDefinitionIndex = 34413;

	class HeadingTracker : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mHistory; // 0x10
		::System::Int32 mTop; // 0x18
		::System::Int32 mBottom; // 0x1C
		::System::Int32 mCount; // 0x20
		::UnityEngine::Vector3* mHeadingSum; // 0x24
		::System::Single mWeightSum; // 0x30
		::System::Single mWeightTime; // 0x34
		::UnityEngine::Vector3* mLastGoodHeading; // 0x38
		::System::Single mDecayExponent; // 0x0

		::UnityEngine::Vector3* GetReliableHeading()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_GETRELIABLEHEADING_OFFSET))(nullptr);
		}

		::System::Void ClearHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_CLEARHISTORY_OFFSET))(nullptr);
		}

		::System::Void PopBottom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_POPBOTTOM_OFFSET))(nullptr);
		}

		::System::Void Add(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FilterSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_GET_FILTERSIZE_OFFSET))(nullptr);
		}

		::System::Single Decay(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_DECAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void DecayHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_HEADINGTRACKER_DECAYHISTORY_OFFSET))(nullptr);
		}

	};
}

