#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }

#define MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED53B0)
#define MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_KEEP_OFFSET UNITYSDK_OFFSET(0xED5430)
#define MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_CLEAR_OFFSET UNITYSDK_OFFSET(0xED55F0)
#define MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_RESTORE_OFFSET UNITYSDK_OFFSET(0xED57C0)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldDesignLevelKeeper_TypeDefinitionIndex = 10942;

	class FieldDesignLevelKeeper : public Il2CppObject
	{
	public:
		Il2CppObject* levelObjects; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Keep(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_KEEP_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Restore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDESIGNLEVELKEEPER_RESTORE_OFFSET))(nullptr);
		}

	};
}

