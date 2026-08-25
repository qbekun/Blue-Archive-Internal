#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define ALPHACHANGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20533C0)
#define ALPHACHANGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2053480)
#define ALPHACHANGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20534F0)

	inline static constexpr unsigned int AlphaChanger_TypeDefinitionIndex = 3332;

	class AlphaChanger : public Il2CppObject
	{
	public:
		::System::Single alpha; // 0x18
		::UnityEngine::Material* mat; // 0x20

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPHACHANGER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPHACHANGER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPHACHANGER_.CTOR_OFFSET))(nullptr);
		}

	};

