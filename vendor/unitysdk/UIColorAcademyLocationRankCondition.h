#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define UICOLORACADEMYLOCATIONRANKCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343BD0)

	inline static constexpr unsigned int UIColorAcademyLocationRankCondition_TypeDefinitionIndex = 4986;

	class UIColorAcademyLocationRankCondition : public Il2CppObject
	{
	public:
		::System::Boolean Ok; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORACADEMYLOCATIONRANKCONDITION_.CTOR_OFFSET))(nullptr);
		}

	};

