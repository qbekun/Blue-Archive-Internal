#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define SCENARIOTOUCHZONEINFO_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1EDE7A0)
#define SCENARIOTOUCHZONEINFO_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1EDE7B0)
#define SCENARIOTOUCHZONEINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDE7C0)
#define SCENARIOTOUCHZONEINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDE7D0)
#define SCENARIOTOUCHZONEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE7F0)

	inline static constexpr unsigned int ScenarioTouchZoneInfo_TypeDefinitionIndex = 1850;

	class ScenarioTouchZoneInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _Position_k__BackingField; // 0x10
		::UnityEngine::Vector2* _Size_k__BackingField; // 0x1C

		::System::Void set_Size(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTOUCHZONEINFO_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Size()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTOUCHZONEINFO_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTOUCHZONEINFO_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Position()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTOUCHZONEINFO_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTOUCHZONEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

