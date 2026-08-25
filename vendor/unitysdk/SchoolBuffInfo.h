#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;

#define SCHOOLBUFFINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD06E0)

	inline static constexpr unsigned int SchoolBuffInfo_TypeDefinitionIndex = 8658;

	class SchoolBuffInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* RootObject; // 0x10
		UITexture* SchoolIcon; // 0x18
		UILabel* SchoolName; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLBUFFINFO_.CTOR_OFFSET))(nullptr);
		}

	};

