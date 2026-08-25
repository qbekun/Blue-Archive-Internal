#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MXUnderCover { class UCSkillGuide; }

#define MXUNDERCOVER_UCSKILLGUIDEARROW_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB46E0)
#define MXUNDERCOVER_UCSKILLGUIDEARROW_SET_OFFSET UNITYSDK_OFFSET(0xDB46F0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSkillGuideArrow_TypeDefinitionIndex = 9974;

	class UCSkillGuideArrow : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* linePivot; // 0x18
		::MXUnderCover::UCSkillGuide* line; // 0x20
		::UnityEngine::Transform* headPivot; // 0x28
		::MXUnderCover::UCSkillGuide* head; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLGUIDEARROW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLGUIDEARROW_SET_OFFSET))(arg, arg2, nullptr);
		}

	};
}

