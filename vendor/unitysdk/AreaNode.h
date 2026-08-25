#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RectInt; }

#define AREANODE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xA405500)
#define AREANODE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA405150)
#define AREANODE_REMOVEFROMCHAIN_OFFSET UNITYSDK_OFFSET(0xA405F40)
#define AREANODE_ADDAFTER_OFFSET UNITYSDK_OFFSET(0xA405FB0)
#define AREANODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA406220)
#define AREANODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA406230)

	inline static constexpr unsigned int AreaNode_TypeDefinitionIndex = 30571;

	class AreaNode : public Il2CppObject
	{
	public:
		Il2CppObject* s_Pool; // 0x0
		::UnityEngine::RectInt* rect; // 0x10
		AreaNode* previous; // 0x20
		AreaNode* next; // 0x28

		AreaNode* Acquire(::UnityEngine::RectInt* arg)
		{
			return (return (AreaNode*(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + AREANODE_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREANODE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void RemoveFromChain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREANODE_REMOVEFROMCHAIN_OFFSET))(nullptr);
		}

		::System::Void AddAfter(AreaNode* arg)
		{
			((::System::Void(*)(AreaNode*, ::PVOID))((::PBYTE)hIl2Cpp + AREANODE_ADDAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREANODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREANODE_.CCTOR_OFFSET))(nullptr);
		}

	};

