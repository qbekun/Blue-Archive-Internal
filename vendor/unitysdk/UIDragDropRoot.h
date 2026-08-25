#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define UIDRAGDROPROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA00760)
#define UIDRAGDROPROOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA00770)
#define UIDRAGDROPROOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA007D0)

	inline static constexpr unsigned int UIDragDropRoot_TypeDefinitionIndex = 33;

	class UIDragDropRoot : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* root; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPROOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPROOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGDROPROOT_ONDISABLE_OFFSET))(nullptr);
		}

	};

