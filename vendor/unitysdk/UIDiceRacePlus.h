#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UILabel;

#define UIDICERACEPLUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D6FB0)
#define UIDICERACEPLUS_SHOWRACEPLUSPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23D6FC0)

	inline static constexpr unsigned int UIDiceRacePlus_TypeDefinitionIndex = 5338;

	class UIDiceRacePlus : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* racePlusAnimation; // 0x18
		UILabel* racePlusCount; // 0x20
		UILabel* racePlusCountInfo; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEPLUS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowRacePlusProduction(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEPLUS_SHOWRACEPLUSPRODUCTION_OFFSET))(arg, arg2, nullptr);
		}

	};

