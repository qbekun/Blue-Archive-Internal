#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define OFFSETINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1FFC0)

	inline static constexpr unsigned int OffsetInfo_TypeDefinitionIndex = 8870;

	class OffsetInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Transform; // 0x10
		::UnityEngine::Vector3* MostWideAdd; // 0x18
		::UnityEngine::Vector3* MostNarrowAdd; // 0x24
		::UnityEngine::Vector3* AddFactor; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFSETINFO_.CTOR_OFFSET))(nullptr);
		}

	};

