#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
class RailPointInfo;

#define RAILPOINTPROPERTIES_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xE49C80)
#define RAILPOINTPROPERTIES_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xE49CA0)
#define RAILPOINTPROPERTIES_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xE49CB0)
#define RAILPOINTPROPERTIES_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0xE49CD0)
#define RAILPOINTPROPERTIES_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xE49CE0)
#define RAILPOINTPROPERTIES_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xE49CF0)
#define RAILPOINTPROPERTIES_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE49D00)
#define RAILPOINTPROPERTIES_SET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE49D10)
#define RAILPOINTPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xE49D20)
#define RAILPOINTPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xE49E00)

	inline static constexpr unsigned int RailPointProperties_TypeDefinitionIndex = 737;

	class RailPointProperties : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _Position_k__BackingField; // 0x10
		::UnityEngine::Vector3* _Forward_k__BackingField; // 0x1C
		::System::Single _MinDistance_k__BackingField; // 0x28
		::System::Single _MaxDistance_k__BackingField; // 0x2C

		::UnityEngine::Vector3* get_Position()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Forward()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_GET_MINDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_MinDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_SET_MINDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_GET_MAXDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_MaxDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_SET_MAXDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(RailPointInfo* arg)
		{
			((::System::Void(*)(RailPointInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(RailPointInfo* arg, RailPointInfo* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(RailPointInfo*, RailPointInfo*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTPROPERTIES_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

