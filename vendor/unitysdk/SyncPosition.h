#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define SYNCPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDBEF0)
#define SYNCPOSITION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCDBF00)

	inline static constexpr unsigned int SyncPosition_TypeDefinitionIndex = 9175;

	class SyncPosition : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Source; // 0x18
		::UnityEngine::Transform* Target; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCPOSITION_LATEUPDATE_OFFSET))(nullptr);
		}

	};

