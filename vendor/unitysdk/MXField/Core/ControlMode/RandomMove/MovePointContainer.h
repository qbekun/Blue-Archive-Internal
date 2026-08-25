#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0xEE45B0)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE4600)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_GETRANDOMPOINT_OFFSET UNITYSDK_OFFSET(0xEE3F70)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_GETRANDOMINDEX_OFFSET UNITYSDK_OFFSET(0xEE4610)

namespace MXField::Core::ControlMode::RandomMove
{
	inline static constexpr unsigned int MovePointContainer_TypeDefinitionIndex = 11013;

	class MovePointContainer : public Il2CppObject
	{
	public:
		::System::Int32 currentIndex; // 0x18
		::Il2CppArray<::System::Object*>* movePoints; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetRandomPoint()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_GETRANDOMPOINT_OFFSET))(nullptr);
		}

		::System::Int32 GetRandomIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_MOVEPOINTCONTAINER_GETRANDOMINDEX_OFFSET))(nullptr);
		}

	};
}

