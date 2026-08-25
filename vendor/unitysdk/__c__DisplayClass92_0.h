#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class MGSManager; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define <>C__DISPLAYCLASS92_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x147BA50)
#define <>C__DISPLAYCLASS92_0__LOADGROUNDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x147BA60)

	inline static constexpr unsigned int <>c__DisplayClass92_0_TypeDefinitionIndex = 15158;

	class <>c__DisplayClass92_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::MGSManager* __4__this; // 0x10
		::System::Boolean loaded; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS92_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadGroundData_b__0(::UnityEngine::AI::NavMeshSurface* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshSurface*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS92_0__LOADGROUNDDATA_B__0_OFFSET))(arg, nullptr);
		}

	};

