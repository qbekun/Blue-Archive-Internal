#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define UIDRAGDROPCONTAINER_START_OFFSET UNITYSDK_OFFSET(0x9FDA70)
#define UIDRAGDROPCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDAF0)

	inline static constexpr unsigned int UIDragDropContainer_TypeDefinitionIndex = 30;

	class UIDragDropContainer : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* reparentTarget; // 0x18

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPCONTAINER_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPCONTAINER_.CTOR_OFFSET))(nullptr);
		}

	};

