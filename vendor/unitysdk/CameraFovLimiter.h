#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define CAMERAFOVLIMITER_GET_LIMITEDASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xE48710)
#define CAMERAFOVLIMITER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE488A0)

	inline static constexpr unsigned int CameraFovLimiter_TypeDefinitionIndex = 733;

	class CameraFovLimiter : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* aspectLimit; // 0x18

		::System::Single get_LimitedAspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVLIMITER_GET_LIMITEDASPECTRATIO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVLIMITER_.CTOR_OFFSET))(nullptr);
		}

	};

