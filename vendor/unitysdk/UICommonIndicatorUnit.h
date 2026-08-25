#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UICOMMONINDICATORUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2345040)
#define UICOMMONINDICATORUNIT_SET_OFFSET UNITYSDK_OFFSET(0x2344FA0)
#define UICOMMONINDICATORUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2345080)

	inline static constexpr unsigned int UICommonIndicatorUnit_TypeDefinitionIndex = 4996;

	class UICommonIndicatorUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* onObject; // 0x18
		::UnityEngine::GameObject* offObject; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATORUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATORUNIT_SET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATORUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

