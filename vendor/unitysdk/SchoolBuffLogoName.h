#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;

#define SCHOOLBUFFLOGONAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x236B080)

	inline static constexpr unsigned int SchoolBuffLogoName_TypeDefinitionIndex = 5074;

	class SchoolBuffLogoName : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* On; // 0x10
		::UnityEngine::GameObject* Off; // 0x18
		UITexture* SchoolLogo; // 0x20
		UILabel* SchoolName; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLBUFFLOGONAME_.CTOR_OFFSET))(nullptr);
		}

	};

